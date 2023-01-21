//
//  ContentView.swift
//  PasswordGenerator
//
//  Created by Luis Vienrich on 20/01/23.
//

import SwiftUI
import CoreData

struct ContentView: View {
    
    @State private var value = 8
    @State private var Mayus = true
    @State private var simb = true
    @State private var num = true
    @State private var password = ""
    @State private var name = ""
    @State private var path = NavigationPath()
    
    @Environment(\.managedObjectContext) var datos
    
    var body: some View {
        NavigationStack(path: $path){
            VStack {
                
                Text("Generador de contraseñas")
                    .font(.title)
                    .multilineTextAlignment(.center)
                    .padding(.top,10)
                
                Spacer()
                
                Button("Ver mis contraseñas guardadas") {
                    path.append("PasswordView")
                }
                
                
                
                Stepper(value: $value, in: 8...32) {
                    Text("Cantidad de dígitos: \(value)")
                }.padding(15)
                
                Toggle(isOn: $Mayus) {
                    Text("¿Uso de mayusculas?")
                }.padding(15)
                
                Toggle(isOn: $simb) {
                    Text("¿Uso de símbolos?")
                }.padding(15)
                
                Toggle(isOn: $num) {
                    Text("¿Uso de números?")
                }.padding(15)
                
                Button("Generar contraseña") {
                    
                    password = GenerarContra(longitud: value, numeros: num, minusculas: true, mayusculas: Mayus, simbols: simb)
                }.padding(.top, 40).padding(.bottom,40)
                
                
                Text("La contraseña generada es: \(password)")
                    .padding(.bottom,30).lineLimit(2).multilineTextAlignment(.center)
                
                VStack{
                    Text("¿Para qué servicio lo utilizarás?")
                        .multilineTextAlignment(.center)
                    TextField("Por ejemplo: Facebook", text: $name).multilineTextAlignment(.center)
                    Button("Guardar contraseña") {
                        // UserDefaults.standard.set(password, forKey: ID)
                        
                        let nuevodato = Passwords(context: self.datos)
                        nuevodato.name = self.name
                        nuevodato.password = self.password
                        
                        do{
                            try self.datos.save()
                        }catch let verificarerror as NSError{
                            print("Existe un problema al almacenar datos",verificarerror.localizedDescription)
                        }
                        
                        name = ""
                        password = ""
                        value = 8
                        
                    }
                    
                }.padding(.bottom,40).padding(.top,40)
                
            }.padding()
            
                .navigationDestination(for: String.self) { View in
                    if View == "PasswordView"{
                        PasswordView()
                    }
                }
            }
        
    }
        
}


struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
