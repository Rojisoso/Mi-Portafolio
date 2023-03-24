//
//  NewImageViewModel.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 17/02/23.
//

import Foundation
import SwiftUI
import Combine

class NewImageViewModel: ObservableObject {
    
    @Published var image : UIImage? = nil
    @Published var isLoading: Bool = false
    
    private let new: NewsModel
    private let dataService: NewImageDataService
    private var cancel = Set<AnyCancellable>()
    
    init(new: NewsModel) {
        self.new = new
        self.dataService = NewImageDataService(new: new)
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

