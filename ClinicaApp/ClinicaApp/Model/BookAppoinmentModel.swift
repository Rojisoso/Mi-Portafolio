//
//  BookAppoinmentModel.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 16/02/23.
//

import Foundation


struct BookAppoinmentModel : Identifiable, Codable {
    
    var id = UUID().uuidString
    let date: Date
    let specialization: Specialization
    let price: Double
    
    enum Specialization : Codable{
        case cardiologist
        case pediatrist
        case ophthalmologist
    }
}
