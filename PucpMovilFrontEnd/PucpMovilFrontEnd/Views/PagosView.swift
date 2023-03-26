//
//  PagosView.swift
//  PucpMovilFrontEnd
//
//  Created by Luis Vienrich on 26/03/23.
//

import SwiftUI

struct PagosView: View {
    var body: some View {
        VStack{
            HStack{
                Text("Cuotas Académicas")
                    .foregroundColor(.orange)
                    .font(.title2)
                    .padding()
                Spacer()
            }
            HStack{
                VStack{
                    Text("Cuota")
                        .foregroundColor(.cyan)
                        .font(.footnote)
                    Text("1-0 (2023-1)")
                        .foregroundColor(.blue)
                        .font(.footnote)
                        .fixedSize()
                }.padding()
                Spacer()
                VStack{
                    Image(systemName: "bell.badge.fill")
                        .foregroundColor(.blue)
                        .scaledToFit()
                }
                VStack{
                    Text("CANCELADA EN BANCO")
                        .foregroundColor(.blue)
                        .font(.footnote)
                        .fixedSize()
                    Text("10/03/2023")
                        .foregroundColor(.cyan)
                        .font(.footnote)
                }
                VStack{
                    Text("S/ 8776.46")
                        .foregroundColor(.blue)
                        .font(.footnote)
                        .fixedSize()
                }
                Spacer()
                VStack{
                    Image(systemName: "chevron.forward")
                }.padding()
            }
            HStack{
                Text("Letras de Pago")
                    .font(.title2)
                    .foregroundColor(.orange)
                Spacer()
            }.padding()
            HStack{
                Text("Sin letras de pago")
                    .font(.footnote)
                Spacer()
            }.padding()
            Text("Actualizacion automática del pago de la cuota académica en bancos")
                    .font(.footnote)
                    .foregroundColor(.orange)
            Text("Los pagos realizados en cualquiera de los canales de recaudación de los bancos autorizados (plataforma web, APP, ventanillas y agentes) se actualizará de manera automática y en tiempo real en nuestros sistemas.")
                .font(.footnote)
                .padding()
                .foregroundColor(.blue)
            Text("De tener algunas consulta en relacion a su cuota académica, remitir un correo a tesoseria.alumnos@pucp.edu.pe")
                .font(.footnote)
                .foregroundColor(.blue)
                .padding(.leading)
            Spacer()
        }
    }
}

struct PagosView_Previews: PreviewProvider {
    static var previews: some View {
        PagosView()
    }
}
