//
//  HomeView.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 16/02/23.
//

import SwiftUI
import Firebase
import GoogleSignIn
import GoogleSignInSwift
import AuthenticationServices

struct HomeView: View {
    
    //@State var isLogged: Bool = false
    @EnvironmentObject var vm: HomeViewModel
    @State var username: String = ""
    @State var password: String = ""
    @State var showPass: Bool = false
    
    
    var body: some View {
        
        if vm.isLooged {
            HomeScreen
        } else {
            LogInScreen
        }
    }
}

struct HomeView_Previews: PreviewProvider {
    static var previews: some View {
        HomeView()
            .environmentObject(dev.homeVM)
            .environmentObject(dev.BookVM)
            .environmentObject(dev.profileVM)
            
    }
}

extension HomeView {
    
    private var HomeScreen: some View {
        TabView {
            NewsView()
                .tabItem {
                    HStack {
                        Text("News")
                        Image(systemName: "newspaper.fill")
                    }
                }
            BookAppoinmentView()
                .tabItem {
                    Text("Book appointment")
                    Image(systemName: "list.bullet.clipboard.fill")
                }
            ProfileView()
                .tabItem {
                    Text("Profile")
                    Image(systemName: "person.circle.fill")
                }
        }
    }
    
    private var LogInScreen: some View {
        VStack(spacing: 15){
            Spacer()
            //HEADER
            HStack{
                Text("Log in")
                    .font(.title)
                    .bold()
                Spacer()
            }
            //BODY
            VStack(spacing: 15){
                TextField("username or email", text: $username)
                    .textFieldStyle(.roundedBorder)
                    .textInputAutocapitalization(.never)
                    .overlay{
                        RoundedRectangle(cornerRadius: 10)
                            .stroke(.green, lineWidth: 2)
                    }
                HStack{
                    if showPass {
                        TextField("password", text: $password)
                            .textFieldStyle(.roundedBorder)
                            .textInputAutocapitalization(.never)
                            .overlay{
                                RoundedRectangle(cornerRadius: 10)
                                    .stroke(.green, lineWidth: 2)
                            }
                    } else {
                        SecureField("password", text: $password)
                            .textFieldStyle(.roundedBorder)
                            .textInputAutocapitalization(.never)
                            .overlay{
                                RoundedRectangle(cornerRadius: 10)
                                    .stroke(.green, lineWidth: 2)
                            }
                    }
                    Button {
                        showPass.toggle()
                    } label: {
                        Image(systemName: showPass ? "eye" : "eye.slash")
                    }
                }
            }
            Button {
                vm.NormalLogIn()
            } label: {
                Text("Log in")
            }.buttonStyle(.bordered)
            Divider()
            Text("or log in with")
                .foregroundColor(.gray)
                .font(.subheadline)
            
            HStack{
                Button {
                    vm.GoogleLogIn()
                } label: {
                    Image("GoogleIcon")
                        .resizable()
                        .scaledToFit()
                        .frame(width: 40, height: 40)
                }
                .buttonStyle(.bordered)
                

            }
            Spacer()
        }
        .frame(width: 300)
        .padding()
    }
    
}
