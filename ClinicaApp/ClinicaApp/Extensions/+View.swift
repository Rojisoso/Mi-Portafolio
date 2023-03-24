//
//  +View.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 23/02/23.
//

import SwiftUI

extension UIApplication {
    func getRootViewController()-> UIViewController{
        guard let screen = UIApplication.shared.connectedScenes.first as? UIWindowScene else{
            return .init()
        }
        
        guard let root = screen.windows.first?.rootViewController else{
            return .init()
        }
        return root
    }
}
