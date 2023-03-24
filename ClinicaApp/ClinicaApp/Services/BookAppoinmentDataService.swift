//
//  BookAppoinmentDataService.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 23/02/23.
//

import Foundation
import Firebase
import Combine

class BookAppoinmentDataService {
    
    private let db = Firestore.firestore()
    @Published var allAppoinment: [BookAppoinmentModel] = []
    
    init() {
       // GetAppoinments()
    }
    
    func GetAppoinments(){
        let docRef = db.collection("BookAppoinment").document("SF")

        docRef.getDocument { (document, error) in
            if let document = document, document.exists {
                let dataDescription = document.data().map(String.init(describing:)) ?? "nil"
                print("Document data: \(dataDescription)")
            } else {
                print("Document does not exist")
            }
        }
            
    }
}
