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
    let birthday: Date
    let salary: Double
    let specialization: Specialization
    
    
    enum Gender: Codable {
        case female
        case male
    }
    enum Specialization : Codable{
        case cardiologist
        case pediatrist
        case ophthalmologist
    }
}
