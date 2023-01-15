//
//  UIButtonExtension.swift
//  iOS-Calculator
//
//  Created by Luis Vienrich on 13/01/23.
//

import UIKit

private let orange = UIColor.orange

class UIButtonExtension: NSObject {

    
    
}
extension UIButton {
    
    // Borde redondo
    func round() {
        layer.cornerRadius = bounds.height / 2
        clipsToBounds = true
    }
    
    // Brilla
    func shine() {
        UIView.animate(withDuration: 0.1, animations: {
            self.alpha = 0.5
        }) { (completion) in
            UIView.animate(withDuration: 0.1, animations: {
                self.alpha = 1
            })
        }
    }
    
    func selectOperation(_ selected: Bool) {
            backgroundColor = selected ? .white : orange
            setTitleColor(selected ? orange : .white, for: .normal)
        }
    
}
