//
//  SpecializationDataService.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 19/02/23.
//

import Foundation
import Firebase
import Combine

class EspecializationDataService {
    
    private let db = Firestore.firestore()
    @Published var allSpecialist: [String] = []
    var NewsSub: AnyCancellable?
    
    init() {
        GetSpecialist()
    }
    
    func GetSpecialist(){
        let docRef = db.collection("specialization").document("specialization")
        
        docRef.getDocument { (document, error) in
            if let document = document, document.exists {
                let _ = document.data().map(String.init(describing:)) ?? "nil"
                for item in document.data()! {
                    self.allSpecialist.append(item.value as! String)
                }
            }
        }
    }
}
