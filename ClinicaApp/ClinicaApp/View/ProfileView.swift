//
//  ProfileView.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 16/02/23.
//

import SwiftUI
import Firebase

struct ProfileView: View {
    
    @EnvironmentObject var pvm: ProfileViewModel
    @EnvironmentObject var hvm: HomeViewModel
    @State var password: String = "password"
    @State var enablePassword: Bool = false
    let defaults = UserDefaults.standard
    
    var body: some View {
        
        VStack(spacing: 20){
            
            ImagenProfile
            
            InfoProfile
            
            PasswordProfile
            
            Button {
                hvm.CloseSession()
            } label: {
                Text("Sign out")
            }
            .buttonStyle(.bordered)

            Divider()
            
            List{
                
            
            }
        }
        
    }
}

struct ProfileView_Previews: PreviewProvider {
    static var previews: some View {
        ProfileView()
            .environmentObject(dev.profileVM)
            .environmentObject(dev.homeVM)
    }
}

extension ProfileView {
     
    private var ImagenProfile: some View {
        
        ZStack{
            ProfileImageView()
                .frame(width: 100,height: 100)
                .background{
                    
                }
        }
    }
    
    private var InfoProfile: some View {
        VStack(spacing: 20){
            Text("Last Name")
            Text("Name")
            Text("DNI")
        }
    }
    
    private var PasswordProfile: some View {
        HStack{
            if enablePassword {
                TextField("", text: $password)
            } else{
                SecureField("",text: $password)
            }
            Button {
                enablePassword.toggle()
            } label: {
                Image(systemName: enablePassword ? "eye" : "eye.slash")
            }
        }
        .padding()
    }
    
    
}
