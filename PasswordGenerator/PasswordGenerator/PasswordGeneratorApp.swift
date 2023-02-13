//
//  PasswordGeneratorApp.swift
//  PasswordGenerator
//
//  Created by Luis Vienrich on 20/01/23.
//

import SwiftUI
import CoreData
import FirebaseCore




@main
struct PasswordGeneratorApp: App {
    
    @Environment(\.scenePhase) var scenePhase
    
    @UIApplicationDelegateAdaptor(AppDelegate.self) var appDelegate
    
    let persistenceContainer = PersistenceController.shared
    
    var body: some Scene {
        WindowGroup {
            NavigationView{
                ContentView()
                    .environment(\.managedObjectContext, persistenceContainer.container.viewContext)
            }
        }.onChange(of: scenePhase) { _ in
            persistenceContainer.save()
        }
    }
}
