//
//  DoctorModel.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 16/02/23.
//

import Foundation

struct DoctorModel: Identifiable, Codable {
    
    var id = UUID().uuidString
    let name: String
    let lastName: String
    let dni: String
    let gender: Gender
    let email: String
    let number: String
    let birthday: String
    let salary: Double
    let specialization: String
    let pricePerBook : Int
    
    
    enum Gender: Codable {
        case female
        case male
    }
    
    init(json: [String: Any]){
        self.name = json["name"] as? String ?? ""
        self.lastName = json["lastName"] as? String ?? ""
        self.dni = json["dni"] as? String ?? ""
        self.gender = json["gender"] as? Gender ?? .male
        self.email = json["email"] as? String ?? ""
        self.number = json["number"] as? String ?? ""
        self.birthday = json["birthday"] as? String ?? ""
        self.salary = json["salary"] as? Double ?? 0.0
        self.specialization = json["specialization"] as? String ?? ""
        self.pricePerBook = json["pricePerBook"] as? Int ?? 50
    }
    
}
