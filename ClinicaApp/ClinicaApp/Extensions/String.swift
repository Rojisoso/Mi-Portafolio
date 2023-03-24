//
//  String.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 17/02/23.
//

import Foundation


extension String {
    
    
    func ToDate() ->Date {
        
        let dateFormatter = ISO8601DateFormatter()
        let date = dateFormatter.date(from: self)!
        return date
    }
}
