//
//  MyCryptoApp.swift
//  MyCrypto
//
//  Created by Luis Vienrich on 14/02/23.
//

import SwiftUI

@main
struct MyCryptoApp: App {
    var body: some Scene {
        WindowGroup {
            NavigationView{
                HomeView()
                    .toolbar(.hidden)
            }
        }
    }
}
