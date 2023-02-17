//
//  UserModel.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 16/02/23.
//

import Foundation


struct UserModel: Identifiable, Codable {
    
    var id = UUID().uuidString
    let name: String
    let lastName: String
    let dni: String
    let email: String
    let number: String
    let birthday: Date
    
}
