//
//  HomeView.swift
//  PucpMovilFrontEnd
//
//  Created by Luis Vienrich on 23/03/23.
//

import SwiftUI

struct HomeView: View {
    
    @EnvironmentObject private var launchScreenState: LaunchScreenStateManager
    
    @State var showName: Int = 1
    @State var titleName: String = "HORARIOS"
    
    var body: some View {
            VStack{
                //HEADER
                    HStack{
                        VStack{
                            Text( showName == 1 ? "HORARIOS" : showName == 2 ? "CURSOS" : showName == 3 ? "PAGOS" : showName == 4 ? "PERFIL" : "MÁS")
                                .font(.title)
                                .foregroundColor(.blue)
                                .padding(.leading)
                            Text(showName == 1 ? "Actualizado: 23/03/23 - 10:18pm" : "")
                                .font(.footnote)
                                .foregroundColor(.yellow)
                                .padding(EdgeInsets(top: 0, leading: 10, bottom: 0, trailing: 0))
                        }
                        Spacer()
                        Image(systemName: "calendar")
                            .resizable()
                            .frame(width: 40,height: 40)
                            .foregroundColor(.blue)
                            .opacity(showName == 1 ? 1 : 0)
                        Image(systemName: "goforward")
                            .resizable()
                            .frame(width: 40,height: 40)
                            .foregroundColor(.blue)
                            .opacity(showName == 1 ? 1 : showName == 2 ? 1 : 0)
                }.frame(height: 60)
                    Divider()
                //BODY
                TabView(selection: $showName) {
                    HorarioView()
                        .tabItem {
                            Image(systemName: "square.fill.text.grid.1x2")
                            Text(showName == 1 ? "HORARIOS" : "")
                            
                        }.tag(1)
                        .toolbar(.visible,for: .tabBar)
                        //.toolbarBackground(Color.blue, for: .tabBar)
                    CursosView()
                        .tabItem {
                            Image(systemName: "books.vertical.fill")
                            Text(showName == 2 ? "CURSOS" : "")
                        }.tag(2)
                    PagosView()
                        .tabItem {
                            Image(systemName: "creditcard.fill")
                            Text(showName == 3 ? "PAGOS" : "")
                        }.tag(3)
                    PerfilView()
                        .tabItem {
                            Image(systemName: "person.crop.rectangle.fill")
                            Text(showName == 4 ? "PERFIL" : "")
                        }.tag(4)
                    ConfigView()
                        .tabItem {
                            Image(systemName: "ellipsis")
                            Text(showName == 5 ? "MÁS" : "")
                        }.tag(5)
                        
                }
            }.task {
                try? await Task.sleep(for: Duration.seconds(1))
                self.launchScreenState.dismiss()
            }
    }
}

struct HomeView_Previews: PreviewProvider {
    static var previews: some View {
        HomeView()
            .environmentObject(LaunchScreenStateManager())
    }
}

