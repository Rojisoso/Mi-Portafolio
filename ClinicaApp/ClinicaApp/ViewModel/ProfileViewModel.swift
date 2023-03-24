//
//  ProfileViewModel.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 23/02/23.
//

import Foundation
import Combine


class ProfileViewModel : ObservableObject {
    
    @Published var myAppoinments: [BookAppoinmentModel] = []
    
    
    private var bookAppoinmentDataService = BookAppoinmentDataService()
    private var cancel = Set<AnyCancellable>()
    
    
    init() {
       // AddSubs()
    }
    
    
    func AddSubs() {
        
        bookAppoinmentDataService.$allAppoinment
            .sink { [weak self] (returnedBooks) in
                self?.myAppoinments = returnedBooks
            }
            .store(in: &cancel)
    }
}
