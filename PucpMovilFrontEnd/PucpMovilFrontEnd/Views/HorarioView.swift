//
//  HorarioView.swift
//  PucpMovilFrontEnd
//
//  Created by Luis Vienrich on 23/03/23.
//

import SwiftUI

struct HorarioView: View {
    var body: some View {
        ScrollView{
            VStack{
                HStack{
                    Text("Jueves 23 de marzo del 2023")
                        .foregroundColor(.orange)
                        .padding(.leading)
                    Spacer()
                }
                Divider()
                HStack{
                    Text("IEE239")
                        .foregroundColor(.blue)
                        .font(.footnote)
                        .padding(EdgeInsets(top: 0, leading: 30, bottom: 0, trailing: 0))
                    Spacer()
                    Text("PROCESAMIENTO DE SEÑALES E IMÁGENES DIGITALES")
                        .foregroundColor(.blue)
                        .font(.footnote)
                        .padding(EdgeInsets(top: 0, leading: 10, bottom: 0, trailing: 10))
                    Spacer()
                    
                }
                HStack{
                    Image(systemName: "clock.fill")
                        .resizable()
                        .foregroundColor(.cyan)
                        .frame(width: 15, height: 15)
                        .padding(EdgeInsets(top: 0, leading: 30, bottom: 0, trailing: 0))
                    Text("9:00 - 12:00")
                        .font(.footnote)
                        .foregroundColor(.cyan)
                    Spacer()
                    Text("T Cla(H412)")
                        .font(.subheadline)
                        .foregroundColor(.cyan)
                        .padding(EdgeInsets(top: 0, leading: 0, bottom: 0, trailing: 70))
                }
            }
            VStack{
                HStack{
                    Text("Viernes 24 de marzo del 2023")
                        .foregroundColor(.orange)
                        .padding(.leading)
                    Spacer()
                }
                Divider()
                HStack{
                    Text("1MEC05")
                        .foregroundColor(.blue)
                        .font(.footnote)
                        .padding(EdgeInsets(top: 0, leading: 30, bottom: 0, trailing: 0))
                    Spacer()
                    Text("PROCESOS Y TECNOLOGÍAS DE FABRICACIÓN")
                        .foregroundColor(.blue)
                        .font(.footnote)
                        .padding(EdgeInsets(top: 0, leading: 10, bottom: 0, trailing: 10))
                    Spacer()
                    
                }
                HStack{
                    Image(systemName: "clock.fill")
                        .resizable()
                        .foregroundColor(.cyan)
                        .frame(width: 15, height: 15)
                        .padding(EdgeInsets(top: 0, leading: 30, bottom: 0, trailing: 0))
                    Text("8:00 - 10:00")
                        .font(.footnote)
                        .foregroundColor(.cyan)
                    Spacer()
                    Text("T Cla(A402)")
                        .font(.subheadline)
                        .foregroundColor(.cyan)
                        .padding(EdgeInsets(top: 0, leading: 0, bottom: 0, trailing: 70))
                }
            }
            VStack{
                HStack{
                    Text("Sábado 25 de marzo del 2023")
                        .foregroundColor(.orange)
                        .padding(.leading)
                    Spacer()
                }
                Divider()
                HStack{
                    Text("MTR218")
                        .foregroundColor(.blue)
                        .font(.footnote)
                        .padding(EdgeInsets(top: 0, leading: 30, bottom: 0, trailing: 0))
                    Spacer()
                    Text("HERRAMIENTAS DE SIMULACIÓN")
                        .foregroundColor(.blue)
                        .font(.footnote)
                        .padding(EdgeInsets(top: 0, leading: 10, bottom: 0, trailing: 10))
                    Spacer()
                    
                }
                HStack{
                    Image(systemName: "clock.fill")
                        .resizable()
                        .foregroundColor(.cyan)
                        .frame(width: 15, height: 15)
                        .padding(EdgeInsets(top: 0, leading: 30, bottom: 0, trailing: 0))
                    Text("11:00 - 13:00")
                        .font(.footnote)
                        .foregroundColor(.cyan)
                    Spacer()
                    Text("L Lab(H411)")
                        .font(.subheadline)
                        .foregroundColor(.cyan)
                        .padding(EdgeInsets(top: 0, leading: 0, bottom: 0, trailing: 70))
                }
            }
        }
    }
}

struct HorarioView_Previews: PreviewProvider {
    static var previews: some View {
        HorarioView()
    }
}
