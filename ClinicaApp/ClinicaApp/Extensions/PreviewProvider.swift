//
//  PreviewProvider.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 17/02/23.
//

import Foundation
import SwiftUI

extension PreviewProvider {
        
    static var dev: DeveloperPreview {
        return DeveloperPreview.instace
    }
}

class DeveloperPreview {
    
    static let instace = DeveloperPreview()
    
    private init() {}
    
    //let homeVM = HomeViewModel()
    
    
}

