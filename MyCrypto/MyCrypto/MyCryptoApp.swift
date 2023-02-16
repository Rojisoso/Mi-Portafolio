//
//  MyCryptoApp.swift
//  MyCrypto
//
//  Created by Luis Vienrich on 15/02/23.
//

import SwiftUI

@main
struct MyCryptoApp: App {
    
    @StateObject private var vm = HomeViewModel()
    var body: some Scene {
        WindowGroup {
            NavigationView{
                           HomeView()
                               .toolbar(.hidden)
                       }
                       .environmentObject(vm)
                   }
        }
}
