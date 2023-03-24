//
//  HomeViewModel.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 17/02/23.
//

import Foundation
import Combine
import SwiftUI
import FirebaseAuth
import GoogleSignIn
import Firebase

class HomeViewModel: ObservableObject {
    
    @Published var allNews: [NewsModel] = []
    private let newsDataService = NewsDataSevice()
    private var cancel = Set<AnyCancellable>()
    @State var username: String = ""
    @State var password: String = ""
    @Published var isLooged: Bool = false
    init() {
       
        AddSubs()
    }
    
    func AddSubs() {

        //UPDATE ALL NEWS
        newsDataService.$allNews
            .sink { [weak self] (returnedNews) in
                self?.allNews = returnedNews
            }
            .store(in: &cancel)
        
        
        
    }
    
    func ReloadData() {
        newsDataService.GetNews()
    }
    
    func NormalLogIn(){
        
    }
    
    func GoogleLogIn() {

                guard let clientID = FirebaseApp.app()?.options.clientID else { return }
                
                // Create Google Sign In configuration object.
                let config = GIDConfiguration(clientID: clientID)
                
                GIDSignIn.sharedInstance.configuration = config
                // Start the sign in flow!
                 GIDSignIn.sharedInstance.signIn(withPresenting: UIApplication.shared.getRootViewController()) {  user, error in
                    
                    if error != nil {
                        // ...
                        return
                    }
                    
                    guard
                        let authentication = user?.user.idToken?.tokenString,
                        let accesToken = user?.user.accessToken.tokenString
                    else {
                        return
                    }
                    let credential = GoogleAuthProvider.credential(withIDToken: authentication, accessToken: accesToken)
                    
                    // AUTENTICACION CON FIREBASE
                    Auth.auth().signIn(with: credential) { authResult, error in
                        self.isLooged = true
                        
                    }
                }
        }
    
    func CloseSession(){
        let firebaseAuth = Auth.auth()
        do {
          try firebaseAuth.signOut()
        } catch let signOutError as NSError {
          print("Error signing out: %@", signOutError)
        }
        self.isLooged = false
    }
    
}
