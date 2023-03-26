//
//  CursosView.swift
//  PucpMovilFrontEnd
//
//  Created by Luis Vienrich on 26/03/23.
//

import SwiftUI

struct CursosView: View {
    var body: some View {
        VStack{
            HStack{
                Text("2023-1")
                    .padding(.leading)
                    .foregroundColor(.orange)
                    .font(.footnote)
                Spacer()
            }
            Divider()
                .overlay(Color.orange)
            List{
                HStack{
                    Text("MTR218")
                        .foregroundColor(.blue)
                    Text("HERRAMIENTAS DE SIMULACIÓN")
                        .foregroundColor(.blue)
                    Spacer()
                    Image(systemName: "chevron.forward")
                        .foregroundColor(.orange)
                }
                HStack{
                    Text("IND231")
                        .foregroundColor(.blue)
                    Text("INGENIERÍA ECONÓMICA")
                        .foregroundColor(.blue)
                    Spacer()
                    Image(systemName: "chevron.forward")
                        .foregroundColor(.orange)
                }
                HStack{
                    Text("IEE239")
                        .foregroundColor(.blue)
                    Text("PROCESAMIENTO DE SEÑALES E IMÁGENES DIGITALES")
                        .foregroundColor(.blue)
                    Spacer()
                    Image(systemName: "chevron.forward")
                        .foregroundColor(.orange)
                }
                HStack{
                    Text("1MEC05")
                        .foregroundColor(.blue)
                    Text("PROCESOS Y TECNOLOGÍAS DE FABRICACIÓN")
                        .foregroundColor(.blue)
                    Spacer()
                    Image(systemName: "chevron.forward")
                        .foregroundColor(.orange)
                }
            }.listStyle(.plain)
        }
    }
}

struct CursosView_Previews: PreviewProvider {
    static var previews: some View {
        CursosView()
    }
}
