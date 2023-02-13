//
//  Passwords.swift
//  PasswordGenerator
//
//  Created by Luis Vienrich on 20/01/23.
//

import Foundation
import CoreData

@objc(Passwords)
class Passwords : NSManagedObject, Identifiable{
    
    @NSManaged public var name: String
    @NSManaged public var password: String
    
}

extension Passwords {
    @nonobjc public class func fetchRequest() -> NSFetchRequest<Passwords> {
        return NSFetchRequest<Passwords>(entityName: "Passwords")
    }
}


