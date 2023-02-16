//
//  CoinDataService.swift
//  MyCrypto
//
//  Created by Luis Vienrich on 15/02/23.
//

import Foundation
import Combine

class CoinDataSevice {
    
    @Published var allCoins: [CoinModel] = []
    var coinSub: AnyCancellable?
    init() {
        GetCoins()
    }
    
    private func GetCoins() {
        
        guard let url = URL(string: "https://api.coingecko.com/api/v3/coins/markets?vs_currency=usd&order=market_cap_desc&per_page=250&page=1&sparkline=true&price_change_percentage=24h") else { return }
        
        
        coinSub = NetManager.Download(url: url)
            .decode(type: [CoinModel].self, decoder: JSONDecoder())
            .sink(receiveCompletion: NetManager.HandleCompletion, receiveValue: { [weak self] returnedCoins in
                self?.allCoins = returnedCoins
                self?.coinSub?.cancel()
            })
                
            

    }
}
