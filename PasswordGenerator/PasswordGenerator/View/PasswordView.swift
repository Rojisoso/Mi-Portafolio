//
//  PasswordView.swift
//  PasswordGenerator
//
//  Created by Luis Vienrich on 20/01/23.
//

import SwiftUI
import CoreData
import FirebaseCore
import FirebaseAuth
import GoogleSignIn
import Firebase

struct PasswordView: View {
    
    //private let email:String
    private let db = Firestore.firestore()
    @State var docData: [String: String] = [:]
    
    
    @Environment(\.managedObjectContext) var datos
    
    @State var nombre:String = ""
    let defaults = UserDefaults.standard
    
    
    @State var contra: String = "asd"
    
    
    
    @FetchRequest(sortDescriptors: [
        SortDescriptor(\.name)
    ]) var conexiondatos: FetchedResults<Passwords>
    
    var body: some View {
        
        
        NavigationView{
            VStack{
                
                HStack{
                    Text("Logged in as:")
                    Text(nombre).onAppear{
                        if let email = defaults.value(forKey: "email") as? String{
                            self.nombre = email
                        }
                    }
                }
                Text("Tap to edit")
                List{
                    ForEach(self.conexiondatos){ infodatos in
                        
                        NavigationLink{
                            PassInfoView(name: infodatos.name,pass: $contra)
                        } label: {
                            PasswordRowView(name: infodatos.name, pass: infodatos.password)
                        }.onAppear{
                            contra = infodatos.password
                        }
                        
                    }.onDelete(perform: removePass)
                }
                
                //GUARDAR DATOS EN FIREBASE
                Button("Save passwords"){
                    
                    for item in self.conexiondatos {
                        docData.updateValue(item.password, forKey: item.name)
                    }
                    print(docData)
                    db.collection("passwords").document(nombre).setData(docData) { err in
                        if let err = err {
                            print("Error writing document: \(err)")
                        } else {
                            print("Document successfully written!")
                        }
                    }
                    
                    
                }.padding(.top, 25)
                
                //CARGAR DATOS DE FIREBASE
                Button("Load passwords"){
                    
                    let docRef = db.collection("passwords").document(nombre)

                    docRef.getDocument { (document, error) in
                        if let document = document, document.exists {
                            let dataDescription = document.data().map(String.init(describing:)) ?? "nil"
                            print("Document data: \(dataDescription)")
                            
                            for item in document.data()! {
                                let nuevodato = Passwords(context: self.datos)
                                nuevodato.name = item.key
                                nuevodato.password = item.value as! String
                                
                                do{
                                    try self.datos.save()
                                }catch let verificarerror as NSError{
                                    print("Existe un problema al almacenar datos",verificarerror.localizedDescription)
                                }
                            }
                        } else {
                            print("Document does not exist")
                        }
                    }
                    
                }.padding(.top, 10)
                
                // CERRAR SESION
                Button("Log out"){
                    let firebaseAuth = Auth.auth()
                    do {
                      try firebaseAuth.signOut()
                    } catch let signOutError as NSError {
                      print("Error signing out: %@", signOutError)
                    }
                    defaults.removeObject(forKey: "email")
                    nombre = ""
                    defaults.synchronize()
                    
                    
                }.padding(.top,10)
            }
            .navigationTitle("Passwords")
            
        }
        .toolbar{
            //INICIAR SESION CON GOOGLE
            Button("Log in"){
                 
                guard let clientID = FirebaseApp.app()?.options.clientID else { return }

                // Create Google Sign In configuration object.
                let config = GIDConfiguration(clientID: clientID)

                // Start the sign in flow!
                GIDSignIn.sharedInstance.signIn(with: config, presenting: getRootViewController()) {  user, error in

                    if error != nil {
                    // ...
                    return
                  }

                  guard
                    let authentication = user?.authentication,
                    let idToken = authentication.idToken
                  else {
                    return
                  }

                  let credential = GoogleAuthProvider.credential(withIDToken: idToken,
                                                                 accessToken: authentication.accessToken)

                  // AUTENTICACION CON FIREBASE
                    Auth.auth().signIn(with: credential) { authResult, error in
                        nombre = (authResult?.user.email!)!
                        
                        defaults.set(authResult?.user.email!,forKey: "email")
                        defaults.synchronize()
                        
                    }
                }
                
            }
        }
    }
    
    func removePass(at offsets: IndexSet) {
        for index in offsets {
            let language = conexiondatos[index]
            self.datos.delete(language)
        }
        do {
            try self.datos.save()
        } catch {
            // handle the Core Data error
        }
    }
    
}

struct PasswordView_Previews: PreviewProvider {
    static var previews: some View {
        PasswordView(nombre: "",contra: "")
    }
}


