//
//  PassInfoView.swift
//  PasswordGenerator
//
//  Created by Luis Vienrich on 8/02/23.
//

import SwiftUI

struct PassInfoView: View {
    
    //VARIABLES
    public var name:String
    @Binding public var pass:String
    
    
    
    
    var body: some View {
        
        NavigationView{
            
            VStack{
                HStack{
                    
                    VStack{
                        Text("Password:").font(.title2).bold()
                        TextField("",text: $pass).lineSpacing(1).multilineTextAlignment(.center)
                    }
                    
                    
                }.padding(.top,40)
                
                Spacer()
            }
            
            
            
            
            
                .navigationTitle(name)
        }
        
    }
}

struct PassInfoView_Previews: PreviewProvider {
    static var previews: some View {
        PassInfoView(name: "asd",pass: .constant("asdasd"))
    }
}
