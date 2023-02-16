//
//  MarketDataService.swift
//  MyCrypto
//
//  Created by Luis Vienrich on 16/02/23.
//

import Foundation
import Combine

class MarketDataService {
    
    @Published var marketData: MarketDataModel? = nil
    
    var marketSub: AnyCancellable?
    init() {
        GetData()
    }
    
    private func GetData() {
        
        guard let url = URL(string: "https://api.coingecko.com/api/v3/global") else { return }
        
        
        marketSub = NetManager.Download(url: url)
            .decode(type: GolbalData.self, decoder: JSONDecoder())
            .sink(receiveCompletion: NetManager.HandleCompletion, receiveValue: { [weak self] returnedGlobalData in
                self?.marketData = returnedGlobalData.data
                self?.marketSub?.cancel()
            })
                
            

    }
}
