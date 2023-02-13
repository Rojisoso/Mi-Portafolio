//
//  Persistence.swift
//  PasswordGenerator
//
//  Created by Luis Vienrich on 20/01/23.
//

import Foundation
import CoreData

struct PersistenceController {
    static let shared = PersistenceController()

    let container: NSPersistentContainer

    static var preview: PersistenceController = {
            let controller = PersistenceController(inMemory: true)
        for _ in 0..<10 {
                   let language = Passwords(context: controller.container.viewContext)
                   language.name = "Example 1"
                language.password = "Example 2"
               }
        return controller
            }()
    
    init(inMemory: Bool = false) {
            // If you didn't name your model Main you'll need
            // to change this name below.
            container = NSPersistentContainer(name: "PasswordGenerator")

            if inMemory {
                container.persistentStoreDescriptions.first?.url = URL(fileURLWithPath: "/dev/null")
            }

            container.loadPersistentStores { description, error in
                if let error = error {
                    fatalError("Error: \(error.localizedDescription)")
                }
            }
        }
    
    func save() {
        let context = container.viewContext

        if context.hasChanges {
            do {
                try context.save()
            } catch {
                // Show some error here
            }
        }
    }
    
}


