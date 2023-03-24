//
//  DoctorDataService.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 19/02/23.
//

import Foundation
import Firebase
import Combine

class DoctorDataService {
    
    private let db = Firestore.firestore()
    @Published var allDoctors: [DoctorModel] = []
    var NewsSub: AnyCancellable?
    
    
    init(){
        GetDoctors()
    }
    func GetDoctors() {
        let _ = db.collection("doctors").getDocuments(){ (querySnapshot, err) in
            if let err = err {
                print("Error getting documents: \(err)")
            } else {
                for document in querySnapshot!.documents {
                   // print("\(document.documentID) => \(document.data())")
                    let doctor: DoctorModel = DoctorModel(json: document.data())
                    self.allDoctors.append(doctor)
                }
            }
        }
    }
}



