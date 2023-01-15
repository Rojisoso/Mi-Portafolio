//
//  AppDelegate.swift
//  iOS-Calculator
//
//  Created by Luis Vienrich on 13/01/23.
//

import UIKit

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
    
    var window: UIWindow?
    

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        
        setupView()
        return true
    }

    //MARK - Private methods
    
    private func setupView(){
        
        window = UIWindow(frame: UIScreen.main.bounds)
        let vc = HomeView()
        window?.rootViewController = vc
        window?.makeKeyAndVisible()
        
    }

}

