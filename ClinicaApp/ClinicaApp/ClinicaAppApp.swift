//
//  ClinicaAppApp.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 16/02/23.
//

import SwiftUI
import FirebaseCore


@main
struct ClinicaAppApp: App {
    
    @UIApplicationDelegateAdaptor(AppDelegate.self) var appDelegate
    @StateObject private var vm = HomeViewModel()
    @StateObject private var bavm = BookAppoinmentViewModel()
    @StateObject private var pvm = ProfileViewModel()
    var body: some Scene {
        WindowGroup {
            HomeView()
                .environmentObject(vm)
                .environmentObject(bavm)
                .environmentObject(pvm)
        }
    }
}
