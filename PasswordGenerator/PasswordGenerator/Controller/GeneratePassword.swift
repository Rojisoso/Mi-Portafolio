//
//  GeneratePassword.swift
//  PasswordGenerator
//
//  Created by Luis Vienrich on 20/01/23.
//

import Foundation
import UIKit


func GenerarContra(longitud: Int,numeros: Bool,minusculas: Bool,mayusculas: Bool,simbols: Bool) -> String{
    
    let MyNumbers = ["0","1","2","3","4","5","6","7","8","9"]
    let MyLowerCase = ["q","w","e","r","t","y","u","i","o","p","a","s","d","f","g","h","j","k","l","ñ","z","x","c","v","b","n","m"]
    let MyUpperCase = ["Q","W","E","R","T","Y","U","I","O","P","A","S","D","F","G","H","J","K","L","Ñ","Z","X","C","V","B","N","M"]
    let MySimbols = ["!","#","$","%","&","/","@",".",":",",",";","-","_","}","{","[","]","*","+","?","¿","¡","=","(",")"]

    var contraseña = ""
    var MyArray = [""]
    
    if longitud>7 && longitud<33{
        
        if numeros{
            MyArray = MyArray + MyNumbers
        }
        if minusculas{
            MyArray = MyArray + MyLowerCase
        }
        if mayusculas{
            MyArray = MyArray + MyUpperCase
        }
        if simbols{
            MyArray = MyArray + MySimbols
        }
        
        for _ in 0..<longitud{
            
            let temp = Int.random(in: 0..<MyArray.count)
            contraseña = contraseña + MyArray[temp]
        }
        return contraseña
    }
    else{
        return ""
    }
}


