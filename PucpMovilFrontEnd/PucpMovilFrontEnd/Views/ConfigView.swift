//
//  ConfigView.swift
//  PucpMovilFrontEnd
//
//  Created by Luis Vienrich on 26/03/23.
//

import SwiftUI

struct ConfigView: View {
    var body: some View {
        List{
            HStack{
                Text("Cubículo")
                    .padding(.leading)
                    .foregroundColor(.blue)
                    .font(.title3)
                Spacer()
                Image(systemName: "chevron.forward")
                    .padding()
                    .foregroundColor(.orange)
            }
            HStack{
                Text("Cafeterías")
                    .padding(.leading)
                    .foregroundColor(.blue)
                    .font(.title3)
                Spacer()
                Image(systemName: "chevron.forward")
                    .padding()
                    .foregroundColor(.orange)
            }
            HStack{
                Text("Estadística")
                    .padding(.leading)
                    .foregroundColor(.blue)
                    .font(.title3)
                Spacer()
                Image(systemName: "chevron.forward")
                    .padding()
                    .foregroundColor(.orange)
            }
            HStack{
                Text("Configuración")
                    .padding(.leading)
                    .foregroundColor(.blue)
                    .font(.title3)
                Spacer()
                Image(systemName: "chevron.forward")
                    .padding()
                    .foregroundColor(.orange)
            }
        }.listStyle(.plain)
    }
}

struct ConfigView_Previews: PreviewProvider {
    static var previews: some View {
        ConfigView()
    }
}
