//
//  CoinModel.swift
//  MyCrypto
//
//  Created by Luis Vienrich on 14/02/23.
//

import Foundation

// https://api.coingecko.com/api/v3/coins/markets?vs_currency=usd&order=market_cap_desc&per_page=250&page=1&sparkline=true&price_change_percentage=24h

//// {
//"id": "bitcoin",
//"symbol": "btc",
//"name": "Bitcoin",
//"image": "https://assets.coingecko.com/coins/images/1/large/bitcoin.png?1547033579",
//"current_price": 22235,
//"market_cap": 428964294272,
//"market_cap_rank": 1,
//"fully_diluted_valuation": 466964654884,
//"total_volume": 45041465057,
//"high_24h": 22291,
//"low_24h": 21609,
//"price_change_24h": 416.38,
//"price_change_percentage_24h": 1.90839,
//"market_cap_change_24h": 7634528592,
//"market_cap_change_percentage_24h": 1.81201,
//"circulating_supply": 19291075,
//"total_supply": 21000000,
//"max_supply": 21000000,
//"ath": 69045,
//"ath_change_percentage": -67.79421,
//"ath_date": "2021-11-10T14:24:11.849Z",
//"atl": 67.81,
//"atl_change_percentage": 32692.71503,
//"atl_date": "2013-07-06T00:00:00.000Z",
//"roi": null,
//"last_updated": "2023-02-14T23:43:16.060Z",
//"sparkline_in_7d": {
//  "price": [
//    23610.185929260544,
//    22959.40588397159
//  ]
//},
//"price_change_percentage_24h_in_currency": 1.908387336103461
//}

struct CoinModel: Identifiable, Codable {
    
    let id, symbol, name: String
    let image: String
    let currentPrice: Double
    let marketCap, marketCapRank, fullyDilutedValuation: Double?
    let totalVolume, high24H, low24H: Double?
    let priceChange24H, priceChangePercentage24H: Double?
    let marketCapChange24H: Double?
    let marketCapChangePercentage24H: Double?
    let circulatingSupply, totalSupply, maxSupply, ath: Double?
    let athChangePercentage: Double?
    let athDate: String?
    let atl, atlChangePercentage: Double?
    let atlDate: String?
    let lastUpdated: String?
    let sparklineIn7D: SparklineIn7D?
    let priceChangePercentage24HInCurrency: Double?
    let currentHoldings: Double?
    
    enum CodingKeys: String, CodingKey {
        case id, symbol, name, image
        case currentPrice = "current_price"
        case marketCap = "market_cap"
        case marketCapRank = "market_cap_rank"
        case fullyDilutedValuation = "fully_diluted_valuaiton"
        case totalVolume = "total_volume"
        case high24H = "high_24h"
        case low24H = "low_24h"
        case priceChange24H = "price_change_24h"
        case priceChangePercentage24H = "price_change_percentage_24h"
        case marketCapChange24H = "market_cap_change_24h"
        case marketCapChangePercentage24H = "market_cap_change_percentage_24h"
        case circulatingSupply = "circulating_supply"
        case totalSupply = "total_supply"
        case maxSupply = "max_supply"
        case ath
        case athChangePercentage = "ath_change_percentage"
        case athDate = "ath_date"
        case atl
        case atlChangePercentage = "atl_change_percentage"
        case atlDate = "atl_date"
        case lastUpdated = "last_updated"
        case sparklineIn7D = "sparkline_in_7d"
        case priceChangePercentage24HInCurrency = "price_change_percentage_24h_in_currency"
        case currentHoldings
    }
    
    func UpdateHoldings(amount: Double) -> CoinModel {
        
        return CoinModel(id: id, symbol: symbol, name: name, image: image, currentPrice: currentPrice, marketCap: marketCap, marketCapRank: marketCapRank, fullyDilutedValuation: fullyDilutedValuation, totalVolume: totalVolume, high24H: high24H, low24H: low24H, priceChange24H: priceChange24H, priceChangePercentage24H: priceChangePercentage24H, marketCapChange24H: marketCapChange24H, marketCapChangePercentage24H: marketCapChangePercentage24H, circulatingSupply: circulatingSupply, totalSupply: totalSupply, maxSupply: maxSupply, ath: ath, athChangePercentage: athChangePercentage, athDate: athDate, atl: atl, atlChangePercentage: atlChangePercentage, atlDate: atlDate, lastUpdated: lastUpdated, sparklineIn7D: sparklineIn7D, priceChangePercentage24HInCurrency: priceChangePercentage24HInCurrency, currentHoldings: amount)
    }
    
    var currentHoldingsValue: Double {
        return (currentHoldings ?? 0) * currentPrice
    }
    
    var rank: Int {
        return Int(marketCapRank ?? 0)
    }

}

struct SparklineIn7D: Codable {
    let price: [Double]?

}

