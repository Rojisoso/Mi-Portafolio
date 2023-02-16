//
//  MarketDataModel.swift
//  MyCrypto
//
//  Created by Luis Vienrich on 16/02/23.
//

import Foundation

/*
// URL: https://api.coingecko.com/api/v3/global

 {
   "data": {
     "active_cryptocurrencies": 12323,
     "upcoming_icos": 0,
     "ongoing_icos": 49,
     "ended_icos": 3376,
     "markets": 662,
     "total_market_cap": {
       "btc": 47339083.36408939,
       "eth": 688807189.229845,
       "ltc": 11432006054.691437,
       "bch": 8630509611.44694,
       "bnb": 3615062696.378638,
       "eos": 1052279538104.9698,
       "xrp": 2909200944848.9155,
       "xlm": 12830574205529.057,
       "link": 160338648515.5157,
       "dot": 176150411716.6877,
       "yfi": 156881806.99281394,
       "usd": 1167203876178.5918,
       "aed": 4287198197397.7817,
       "ars": 224564802539415.34,
       "aud": 1686916575697.5024,
       "bdt": 124094181764763.52,
       "bhd": 439970497902.2637,
       "bmd": 1167203876178.5918,
       "brl": 6092570792877.037,
       "cad": 1561432821377.2915,
       "chf": 1076300871097.9285,
       "clp": 924577206437350.9,
       "cny": 7994529509110.029,
       "czk": 25767854575116.41,
       "dkk": 8122595118404.35,
       "eur": 1090108892953.1211,
       "gbp": 968793223674.7451,
       "hkd": 9161006217273.781,
       "huf": 414328016197099.25,
       "idr": 17714542451777052,
       "ils": 4120346403298.0527,
       "inr": 96477931459291.84,
       "jpy": 156222786673292.78,
       "krw": 1497742252578673,
       "kwd": 357557733816.9216,
       "lkr": 426315947015934.2,
       "mmk": 2452779352951373.5,
       "mxn": 21668535349647.746,
       "myr": 5122274210609.739,
       "ngn": 538452443715904.8,
       "nok": 11884871385383.86,
       "nzd": 1852265011204.7163,
       "php": 64386463920027.91,
       "pkr": 309809031649396.94,
       "pln": 5193586865832.62,
       "rub": 87234968854648,
       "sar": 4378840042532.068,
       "sek": 12137541844479.623,
       "sgd": 1556781513930.722,
       "thb": 39976732759116.83,
       "try": 22004956188470.926,
       "twd": 35326006580075.484,
       "uah": 43135215628152.98,
       "vef": 116872124121.76254,
       "vnd": 27577174069335730,
       "zar": 21019448605289.3,
       "xdr": 870487811611.356,
       "xag": 53638655705.12827,
       "xau": 634445338.935637,
       "bits": 47339083364089.39,
       "sats": 4733908336408939
     },
     "total_volume": {
       "btc": 3914657.5036625774,
       "eth": 56960212.16035665,
       "ltc": 945358150.256501,
       "bch": 713691242.2033048,
       "bnb": 298943944.5150846,
       "eos": 87017189541.06432,
       "xrp": 240573422616.2521,
       "xlm": 1061011325539.8477,
       "link": 13259041978.293148,
       "dot": 14566579705.323967,
       "yfi": 12973181.973321397,
       "usd": 96520741161.04851,
       "aed": 354525508321.58966,
       "ars": 18570158669069.055,
       "aud": 139497855932.64066,
       "bdt": 10261842547099.43,
       "bhd": 36382914256.21032,
       "bmd": 96520741161.04851,
       "brl": 503818964712.443,
       "cad": 129121104091.89842,
       "chf": 89003609318.68503,
       "clp": 76456974695901.61,
       "cny": 661099512434.3696,
       "czk": 2130846609131.5474,
       "dkk": 671689768154.5603,
       "eur": 90145449686.62022,
       "gbp": 80113373412.56418,
       "hkd": 757560121173.6765,
       "huf": 34262435229449.105,
       "idr": 1464886128010735,
       "ils": 340727868372.61786,
       "inr": 7978144727057.826,
       "jpy": 12918684956151.928,
       "krw": 123854277078319.52,
       "kwd": 29567874285.052147,
       "lkr": 35253765014447.42,
       "mmk": 202830101821183.28,
       "mxn": 1791857561910.9485,
       "myr": 423581272585.2605,
       "ngn": 44526778918514.125,
       "nok": 982807389636.758,
       "nzd": 153171177166.9973,
       "php": 5324373355104.686,
       "pkr": 25619343769734.99,
       "pln": 429478400307.9769,
       "rub": 7213807305522.76,
       "sar": 362103737793.1083,
       "sek": 1003701717079.5964,
       "sgd": 128736468938.37181,
       "thb": 3305835384765.917,
       "try": 1819677542094.313,
       "twd": 2921248298568.237,
       "uah": 3567022923366.2407,
       "vef": 9664621812.455801,
       "vnd": 2280466450312113.5,
       "zar": 1738181991668.3225,
       "xdr": 71984107029.75723,
       "xag": 4435594251.52999,
       "xau": 52464814.06549966,
       "bits": 3914657503662.577,
       "sats": 391465750366257.75
     },
     "market_cap_percentage": {
       "btc": 40.753432127002284,
       "eth": 17.45800918459422,
       "usdt": 5.975445762746845,
       "bnb": 4.358608254944401,
       "usdc": 3.5491035958154282,
       "xrp": 1.743847107439805,
       "ada": 1.2277307570280676,
       "busd": 1.2169661902296327,
       "doge": 1.058939358501498,
       "okb": 1.0511860168213618
     },
     "market_cap_change_percentage_24h_usd": 8.530277800532899,
     "updated_at": 1676523728
   }
 }

*/

struct GolbalData: Codable {
    
    let data: MarketDataModel?
}

struct MarketDataModel: Codable {
    
    let totalMarketCap, totalVolume, marketCapPercentage: [String: Double]
    let marketCapChangePercentage24HUsd: Double
    
    enum CodingKeys: String, CodingKey {
        case totalMarketCap = "total_market_cap"
        case totalVolume = "total_volume"
        case marketCapPercentage = "market_cap_percentage"
        case marketCapChangePercentage24HUsd = "market_cap_change_percentage_24h_usd"
    }
    
    var marketCap: String {
        if let item = totalMarketCap.first(where: { (key,value) in
            return key == "usd"
        }){
            return "$" + item.value.FormattedWithAbbreviations()
        }
        return ""
    }
    
    var volume: String {
        if let item = totalVolume.first(where: { $0.key == "usd"}) {
            return "$" + item.value.FormattedWithAbbreviations()
        }
        return ""
    }
    
    var btcDominance: String {
        if let item = marketCapPercentage.first(where: { $0.key == "btc"}) {
            return item.value.asPercentString()
        }
        return ""
    }
}
