//
//  BookAppoinmentModel.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 16/02/23.
//

import Foundation


struct BookAppoinmentModel : Identifiable, Codable {
    
    var id = UUID().uuidString
    let date: String
    let specialization: String
    let price: Int
    let pacient: UserModel
    let doctor: DoctorModel
    
    
    init(json: [String: Any]){
        self.date = json["name"] as? String ?? ""
        self.specialization = json["specialization"] as? String ?? ""
        self.price = json["price"] as? Int ?? 0
        self.pacient = (json["pacient"] as? UserModel)!
        self.doctor = (json["doctor"] as? DoctorModel)!
    }
}
