//
//  CoinImageViewModel.swift
//  MyCrypto
//
//  Created by Luis Vienrich on 15/02/23.
//

import Foundation
import SwiftUI
import Combine

class CoinImageViewModel: ObservableObject {
    
    @Published var image : UIImage? = nil
    @Published var isLoading: Bool = false
    
    private let coin: CoinModel
    private let dataService: CoinImageService
    private var cancel = Set<AnyCancellable>()
    
    init(coin: CoinModel) {
        self.coin = coin
        self.dataService = CoinImageService(coin: coin)
        self.GetImage()
        self.isLoading = true
    }
    
   private func GetImage() {
       
       dataService.$image
           .sink { [weak self] _ in
               self?.isLoading = false
           } receiveValue: { [weak self] returnedImage in
               self?.image = returnedImage
               
           }
           .store(in: &cancel)

    }
}
