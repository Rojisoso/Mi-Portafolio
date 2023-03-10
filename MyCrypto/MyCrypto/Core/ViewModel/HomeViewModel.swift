//
//  HomeViewModel.swift
//  MyCrypto
//
//  Created by Luis Vienrich on 15/02/23.
//

import Foundation
import Combine

class HomeViewModel: ObservableObject {
    
    @Published var stadistics: [StatisticsModel] = []
    @Published var allCoins: [CoinModel] = []
    @Published var portfolioCoins: [CoinModel] = []
    @Published var searchText: String = ""
    @Published var isLoading: Bool = false
    
    private let portfolioDataService = PortfolioDataService()
    private let coinDataService = CoinDataSevice()
    private let marketDataService = MarketDataService()
    private var cancel = Set<AnyCancellable>()
    init() {
        
        AddSubs()
    }
    
    func AddSubs() {
        
        //UPDATE ALL COINS
        $searchText
            .combineLatest(coinDataService.$allCoins)
            .debounce(for: .seconds(0.5), scheduler: DispatchQueue.main)
            .map({ (text, startingCoins) -> [CoinModel] in
                
                guard !text.isEmpty else {
                    return startingCoins
                }
                
                let lowercasedText = text.lowercased()
                return startingCoins.filter { (coin) -> Bool in
                    return coin.name.lowercased().contains(lowercasedText) ||
                    coin.symbol.lowercased().contains(lowercasedText) ||
                    coin.id.lowercased().contains(lowercasedText)
                }
            })
            .sink { [weak self] returnedCoins in
                self?.allCoins = returnedCoins
            }
            .store(in: &cancel)
        
        // UPDATE MARKET DATA
        marketDataService.$marketData
            .combineLatest($portfolioCoins)
            .map{ (marketDataModel, portfolioCoins) -> [StatisticsModel] in
                var stats: [StatisticsModel] = []
                
                guard let data = marketDataModel else {
                    return stats
                }
                let marketCap = StatisticsModel(title: "Market Cap", value: data.marketCap,percentageChange: data.marketCapChangePercentage24HUsd)
                let volume = StatisticsModel(title: "24h Volume", value: data.volume)
                let btcDominance = StatisticsModel(title: "BTC Dominance", value: data.btcDominance)
                
                let portfolioValue = portfolioCoins.map({$0.currentHoldingsValue})
                    .reduce(0, +)
                
                let previousValue = portfolioCoins.map { (coin) -> Double in
                    let currentValue = coin.currentHoldingsValue
                    let percentChange = coin.priceChangePercentage24H! / 100
                    let previousValue = currentValue / (1 + percentChange)
                    return previousValue
                }
                    .reduce(0, +)
                
                let percentageChange = ((portfolioValue - previousValue) / previousValue) * 100
                
                let portfolio = StatisticsModel(title: "Porfolio Value", value:portfolioValue.asCurrencyWith6Decimals() ,percentageChange: percentageChange)
                
                stats.append(contentsOf: [
                    marketCap,
                    volume,
                    btcDominance,
                    portfolio
                ])
                return stats
            }
            .sink { [weak self] (returnedStats) in
                self?.stadistics = returnedStats
                self?.isLoading = false
            }
            .store(in: &cancel)
            
        //UPDATE PORTFOLIO ENTITIES
        $allCoins
            .combineLatest(portfolioDataService.$savedEntities)
            .map { (coinModels, portfolioEntities) -> [CoinModel] in
                coinModels
                    .compactMap { (coin) -> CoinModel? in
                        guard let entity = portfolioEntities.first(where: {$0.coinID == coin.id }) else {
                            return nil
                        }
                        return coin.UpdateHoldings(amount: entity.amount)
                    }
            }
            .sink { [weak self] returnedCoins in
                self?.portfolioCoins = returnedCoins
            }
            .store(in: &cancel)
    }
   
     func UpdatePortfolio(coin: CoinModel, amount: Double) {
        portfolioDataService.UpdatePortfolio(coin: coin, amount: amount)
    }
    
    func ReloadData() {
        isLoading = true
        coinDataService.GetCoins()
        marketDataService.GetData()
    }
}
