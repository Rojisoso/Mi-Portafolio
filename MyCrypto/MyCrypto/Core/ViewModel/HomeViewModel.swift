//
//  HomeViewModel.swift
//  MyCrypto
//
//  Created by Luis Vienrich on 15/02/23.
//

import Foundation
import Combine

class HomeViewModel: ObservableObject {
    
    @Published var allCoins: [CoinModel] = []
    @Published var portfolioCoins: [CoinModel] = []
    @Published var searchText: String = ""
    
    private let dataService = CoinDataSevice()
    private var cancel = Set<AnyCancellable>()
    init() {
        
        AddSubs()
    }
    
    func AddSubs() {
        
        dataService.$allCoins
            .sink { [weak self] returnedCoin in
                self?.allCoins = returnedCoin
            }
            .store(in: &cancel)
    }
   
}
