//
//  AppDelegate.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 19/02/23.
//

import Foundation
import UIKit
import FirebaseCore
import GoogleSignIn
import FirebaseFirestore


class AppDelegate: NSObject, UIApplicationDelegate {
  func application(_ application: UIApplication,
                   didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey : Any]? = nil) -> Bool {
    FirebaseApp.configure()
    
      
    return true
  }
    
    @available(iOS 9.0, *)
        func application(_ application: UIApplication, open url: URL,
                         options: [UIApplication.OpenURLOptionsKey: Any])
          -> Bool {
          return GIDSignIn.sharedInstance.handle(url)
        }
    
}
