//
//  PasswordView.swift
//  PasswordGenerator
//
//  Created by Luis Vienrich on 20/01/23.
//

import SwiftUI
import CoreData

struct PasswordView: View {
    
    
    @FetchRequest(entity: Passwords.entity(), sortDescriptors: [NSSortDescriptor(keyPath:\ Passwords.name, ascending: true)]) var conexiondatos : FetchedResults<Passwords>
    
    
    var body: some View {
        
        
        NavigationView{
            VStack{
                List{
                    ForEach(self.conexiondatos){ infodatos in
                        PasswordRowView(name: infodatos.name, pass: infodatos.password)
                    }
                }
            }
            .navigationTitle("Contraseñas")
        }
       
    }
}

struct PasswordView_Previews: PreviewProvider {
    static var previews: some View {
        PasswordView()
    }
}
