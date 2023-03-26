//
//  PucpMovilFrontEndApp.swift
//  PucpMovilFrontEnd
//
//  Created by Luis Vienrich on 23/03/23.
//

import SwiftUI

@main
struct PucpMovilFrontEndApp: App {
    
    @StateObject var launchScreenState = LaunchScreenStateManager()
    
    var body: some Scene {
        WindowGroup {
            ZStack {
                HomeView()
                if launchScreenState.state != .finished {
                    LaunchScreenView()
                }
            }.environmentObject(launchScreenState)
        }
    }
}
