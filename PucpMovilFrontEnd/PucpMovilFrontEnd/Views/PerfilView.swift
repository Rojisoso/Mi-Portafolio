//
//  PerfilView.swift
//  PucpMovilFrontEnd
//
//  Created by Luis Vienrich on 26/03/23.
//

import SwiftUI

struct PerfilView: View {
    var body: some View {
        VStack{
            Image(systemName: "person.crop.circle")
                .resizable()
                .frame(width: 100,height: 100)
            Text("VIENRICH CHONG")
                .font(.title2)
                .foregroundColor(.orange)
            Text("LUIS PABLO")
                .foregroundColor(.blue)
                .font(.subheadline)
            Divider()
                .overlay(Color.orange)
            Text("Documento Nacional de Identidad:")
                .font(.footnote)
                .foregroundColor(.cyan)
                .padding(.bottom)
            Text("12345678")
                .font(.title3)
                .foregroundColor(.blue)
            Image("CodigoDeBarras")
                .resizable()
                .frame(width: 250,height: 60)
                .padding(.bottom)
            Text("Mi codigo de usuario es:")
                .font(.footnote)
                .foregroundColor(.cyan)
                .padding(.top)
            Text("12345678")
                .font(.title3)
                .foregroundColor(.blue)
                .padding(.bottom)
            Button("CERRAR SESIÓN"){
                    //DO NOTHING FOR NOW
            }
            .padding()
            .background(Color(red: 0.9,green: 1,blue: 0))
            .clipShape(Capsule())
            
        }
    }
}

struct PerfilView_Previews: PreviewProvider {
    static var previews: some View {
        PerfilView()
    }
}
