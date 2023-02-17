//
//  ProfileView.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 16/02/23.
//

import SwiftUI

struct ProfileView: View {
    
    @State var password: String = "password"
    @State var enablePassword: Bool = false
    var body: some View {
        
        VStack(spacing: 20){
            
            ZStack{
                ProfileImageView()
                    .frame(width: 100,height: 100)
                    .background{
                        
                    }
            }
            VStack(spacing: 20){
                Text("Last Name")
                Text("Name")
                Text("DNI")
            }
            
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
}

struct ProfileView_Previews: PreviewProvider {
    static var previews: some View {
        ProfileView()
    }
}
