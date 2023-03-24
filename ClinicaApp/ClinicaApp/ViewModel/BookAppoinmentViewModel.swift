//
//  BookAppoinmentViewModel.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 19/02/23.
//

import Foundation
import Combine


class BookAppoinmentViewModel : ObservableObject {
    
    @Published var doctors: [DoctorModel] = []
    @Published var specialist: [String] = []
    
    private var cancel = Set<AnyCancellable>()
    private let specializationDataService = EspecializationDataService()
    private let doctorDataService = DoctorDataService()
    
    init() {
        AddSubs()
    }
    
    func AddSubs() {
        
        specializationDataService.$allSpecialist
            .sink { [weak self] (returnedSpecialist) in
                self?.specialist = returnedSpecialist
            }
            .store(in: &cancel)
        
        doctorDataService.$allDoctors
            .sink { [weak self] returnedDoctors in
                self?.doctors = returnedDoctors
            }
            .store(in: &cancel)
        
    }
    
    
}
