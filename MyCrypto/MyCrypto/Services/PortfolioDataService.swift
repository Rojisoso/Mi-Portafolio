//
//  PortfolioDataService.swift
//  MyCrypto
//
//  Created by Luis Vienrich on 16/02/23.
//

import Foundation
import CoreData

class PortfolioDataService {
    
    private let container: NSPersistentContainer
    private let containerName: String = "PortfolioContainer"
    private let entityName: String = "PortfolioEntity"
    @Published var savedEntities: [PortfolioEntity] = []
    
    init() {
        container = NSPersistentContainer(name: containerName)
        container.loadPersistentStores { _, error  in
            if let error = error {
                print("Error loading Core Data \(error)")
            }
            self.GetPortfolio()
        }
    }
    
    //MARK: PUBLIC
    
    func UpdatePortfolio(coin: CoinModel, amount: Double) {
        
        if let entity = savedEntities.first(where: { $0.coinID == coin.id }) {
            
            if amount > 0 {
                Update(entity: entity, amount: amount)
            } else {
                Remove(entity: entity)
            }
        } else {
            Add(coin: coin, amount: amount)
        }
        
        
    }
    
    //MARK: PRIVATE
    
    private func GetPortfolio() {
        let request = NSFetchRequest<PortfolioEntity>(entityName: entityName)
        do {
            savedEntities = try container.viewContext.fetch(request)
        } catch let error {
            print("Error fetching portfolio entities \(error)")
        }
    }
    
    private func Add(coin: CoinModel, amount: Double) {
        let entity = PortfolioEntity(context: container.viewContext)
        entity.coinID = coin.id
        entity.amount = amount
        ApplyChanges()
    }
    
    private func Update(entity: PortfolioEntity, amount: Double) {
        entity.amount = amount
        ApplyChanges()
    }
    
    private func Remove(entity: PortfolioEntity) {
        container.viewContext.delete(entity)
        ApplyChanges()
    }
    
    private func Save() {
        do {
            try container.viewContext.save()
        } catch let error {
            print("Error saving to Core Data \(error)")
        }
    }
    
    private func ApplyChanges() {
        Save()
        GetPortfolio()
    }
}
