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
    
    let homeVM = HomeViewModel()
    let BookVM = BookAppoinmentViewModel()
    let profileVM = ProfileViewModel()
    
    let info = NewsModel(author: "TMZ Staff", title: "Rafael Nadal Pulls Out Of U.S. Open Over COVID-19 Concerns", description: "Rafael Nadal is officially OUT of the U.S. Open, the tennis legend said Tuesday it's just too damn unsafe for him to travel to America during the COVID-19 pandemic.", url: "https://www.tmz.com/2020/08/04/rafael-nadal-us-open-tennis-covid-19-concerns/", urlToImage: "")
    
}

