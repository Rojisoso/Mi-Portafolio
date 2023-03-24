//
//  BookAppoinmentView.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 18/02/23.
//

import SwiftUI
import FirebaseCore
import Firebase

struct BookAppoinmentView: View {
    
    @State var currentDate: Date = Date()
    @State var currentSpecialist : String = "cardiologist"
    @State var currentDoctor : String = ""
    @EnvironmentObject var bavm: BookAppoinmentViewModel
    
    var body: some View {

            NavigationStack{
                VStack(spacing: 10){
                    Form {
                        Picker(selection: $currentSpecialist, label: Text("select a specialty:")) {
                            ForEach(bavm.specialist, id: \.self){ special in
                                Text(special)
                            }
                        }
                        DoctorPicker
                        DatePicker(selection: $currentDate, in: Date()...){
                            Text("select a date:")
                        }
                        
                        HStack{
                            Text("price:")
                            Spacer()
                            if isSelectedDoctor(){
                                PriceView
                            } else {
                                Text("Choose a doctor first.")
                            }
                        }
                    }
                    
                    Spacer()
                    Button {
                        GoToPay()
                    } label: {
                        Text("Go to pay")
                            .padding()
                    }
                }
                .navigationTitle("New Appoinment")
            }
    }
}

struct BookAppoinmentView_Previews: PreviewProvider {
    static var previews: some View {
        BookAppoinmentView()
            .environmentObject(dev.BookVM)
    }
}

extension BookAppoinmentView {
    
     func isSelectedDoctor() -> Bool {
        for doctor in bavm.doctors{
            if doctor.id == currentDoctor{
                return true
            }
        }
        return false
    }
     func selectedDoctor() -> Int{
        for doctor in bavm.doctors{
            if doctor.id == currentDoctor{
                return doctor.pricePerBook
            }
        }
        return 0
    }
    
     var PriceView : some View {
        
            Text("S/. \(selectedDoctor())")

    }
 
     func isDoctor() -> Bool {
        
        for doctor in bavm.doctors{
            if doctor.specialization == currentSpecialist{
                return true
            }
        }
        return false
    }
    
     var DoctorPicker : some View {
        Picker(selection: $currentDoctor, label: Text("select a doctor:")) {
            if isDoctor() {
                ForEach(bavm.doctors) { doctor in
                    if doctor.specialization == currentSpecialist{
                        Text("\(doctor.name) \(doctor.lastName)")
                    }
                }
            } else {
                Text("No doctors found")
            }
        }
        .onChange(of: currentSpecialist) { newValue in
            currentDoctor = newValue
        }
    }
    
     func GoToPay() {
       // let date = currentDate.ISO8601Format()
        //let newBook = BookAppoinmentModel(date: date, specialization: currentSpecialist, price: selectedDoctor(), pacient: <#T##UserModel#>, doctor: bavm.doctors.first{ $0.id == currentDoctor }!)
    }
    
}
