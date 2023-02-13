//
//  PasswordRowView.swift
//  PasswordGenerator
//
//  Created by Luis Vienrich on 20/01/23.
//

import SwiftUI

struct PasswordRowView: View {
    
    var name: String
    var pass: String
    
    
    
    var body: some View {
        
        
        HStack{
            VStack{
                HStack{
                    Text(self.name).font(.title)
                    Spacer()
                }
                HStack{
                    Text("password:").font(.subheadline).foregroundColor(.gray)
                    Text(self.pass).font(.subheadline).foregroundColor(.gray).lineLimit(1)
                    Spacer()
                }
                
            }.padding(30)
            Spacer()
            
        }
        
    }
}

struct PasswordRowView_Previews: PreviewProvider {
    static var previews: some View {
        PasswordRowView(name: "asd", pass: "asd")
    }
}
