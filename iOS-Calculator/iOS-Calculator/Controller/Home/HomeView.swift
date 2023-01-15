//
//  HomeView.swift
//  iOS-Calculator
//
//  Created by Luis Vienrich on 13/01/23.
//

import UIKit

class HomeView: UIViewController {
    
    
    private var total :Double = 0
    private var temp :Double = 0
    private var operating = false
    private var decimal = false
    private var operation: OperationType = .none
    
    
    private let kdecimalseparator = Locale.current.decimalSeparator!
    private let kMaxLenght = 9
    private let kTotal = "total"
    
    private enum OperationType {
        case none, suma, resta, multiplicacion, division, percent
    }
    
    // Formateo de valores auxiliares
    private let auxFormatter: NumberFormatter = {
        let formatter = NumberFormatter()
        let locale = Locale.current
        formatter.groupingSeparator = ""
        formatter.decimalSeparator = locale.decimalSeparator
        formatter.numberStyle = .decimal
        formatter.maximumIntegerDigits = 100
        formatter.minimumFractionDigits = 0
        formatter.maximumFractionDigits = 100
        return formatter
    }()
    
    // Formateo de valores auxiliares totales
    private let auxTotalFormatter: NumberFormatter = {
        let formatter = NumberFormatter()
        formatter.groupingSeparator = ""
        formatter.decimalSeparator = ""
        formatter.numberStyle = .decimal
        formatter.maximumIntegerDigits = 100
        formatter.minimumFractionDigits = 0
        formatter.maximumFractionDigits = 100
        return formatter
    }()
    
    private let printFormatter: NumberFormatter = {
            let formatter = NumberFormatter()
            let locale = Locale.current
            formatter.groupingSeparator = locale.groupingSeparator
            formatter.decimalSeparator = locale.decimalSeparator
            formatter.numberStyle = .decimal
            formatter.maximumIntegerDigits = 9
            formatter.minimumFractionDigits = 0
            formatter.maximumFractionDigits = 8
            return formatter
        }()
        
        // Formateo de valores por pantalla en formato científico
        private let printScientificFormatter: NumberFormatter = {
            let formatter = NumberFormatter()
            formatter.numberStyle = .scientific
            formatter.maximumFractionDigits = 3
            formatter.exponentSymbol = "e"
            return formatter
        }()
    
    
    
    
    @IBOutlet weak var Result: UILabel!
    @IBOutlet weak var btnAC: UIButton!
    @IBOutlet weak var btnPlusMinus: UIButton!
    @IBOutlet weak var btnPorcentage: UIButton!
    
    @IBOutlet weak var btnDividir: UIButton!
    @IBOutlet weak var btnMultiplicar: UIButton!
    @IBOutlet weak var btnResta: UIButton!
    @IBOutlet weak var btnSuma: UIButton!
    @IBOutlet weak var btnIgual: UIButton!
    
    
    @IBOutlet weak var btn0: UIButton!
    @IBOutlet weak var btn1: UIButton!
    @IBOutlet weak var btn2: UIButton!
    @IBOutlet weak var btn3: UIButton!
    @IBOutlet weak var btn4: UIButton!
    @IBOutlet weak var btn5: UIButton!
    @IBOutlet weak var btn6: UIButton!
    @IBOutlet weak var btn7: UIButton!
    @IBOutlet weak var btn8: UIButton!
    @IBOutlet weak var btn9: UIButton!
    @IBOutlet weak var btnDot: UIButton!
    
    
    
    init() {
        super.init(nibName: nil, bundle: nil)
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    //MARK - LifeCycle
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
       
        
        
        
        
        btnDot.setTitle(kdecimalseparator, for: .normal)
        
        total = UserDefaults.standard.double(forKey: kTotal)
        
        result()
        
        
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        btn0.round()
        btn1.round()
        btn2.round()
        btn3.round()
        btn4.round()
        btn5.round()
        btn6.round()
        btn7.round()
        btn8.round()
        btn9.round()
        btnDot.round()
        btnAC.round()
        btnPlusMinus.round()
        btnPorcentage.round()
        btnDividir.round()
        btnMultiplicar.round()
        btnSuma.round()
        btnResta.round()
        btnIgual.round()
    }
    
    //Actions
    
    
    @IBAction func ACAction(_ sender: UIButton) {
        
        Clear()
        sender.shine()
    }
    
    @IBAction func PlusMinusAction(_ sender: UIButton) {
        temp = temp * (-1)
        Result.text = printFormatter.string(from: NSNumber(value: temp))
        sender.shine()
    }
    
    @IBAction func PorcentageAction(_ sender: UIButton) {
        
        if operation != .percent{
            result()
        }
        operating = true
        operation = .percent
        result()
        
        sender.shine()
    }
    
    @IBAction func DividirAction(_ sender: UIButton) {
        if operation != .none{
            result()
        }
        operating = true
        operation = .division
        sender.selectOperation(true)
        sender.shine()
    }
    
    @IBAction func MultiplicarAction(_ sender: UIButton) {
        if operation != .none{
            result()
        }
        operating = true
        operation = .multiplicacion
        sender.selectOperation(true)
        sender.shine()
    }
    
    @IBAction func RestarAction(_ sender: UIButton) {
        if operation != .none{
            result()
        }
        operating = true
        operation = .resta
        sender.selectOperation(true)
        sender.shine()
    }
    
    
    @IBAction func SumarAction(_ sender: UIButton) {
        
        if operation != .none{
            result()
        }
        
        operating = true
        operation = .suma
        sender.selectOperation(true)
        sender.shine()
    }
    
    @IBAction func IgualAction(_ sender: UIButton) {
        result()
        sender.shine()
    }
    
    @IBAction func DotAction(_ sender: UIButton) {
        
        let currentTemp = auxTotalFormatter.string(from: NSNumber(value: temp))!
                if Result.text?.contains(kdecimalseparator) ?? false || (!operating && currentTemp.count >= kMaxLenght) {
                    return
                }
        
        Result.text = Result.text! + kdecimalseparator
        decimal = true
        selectVisualOperation()
        sender.shine()
    }
    
    @IBAction func NumberAction(_ sender: UIButton) {
        
       
        btnAC.setTitle("C", for: .normal)
        var currentTemp = auxTotalFormatter.string(from: NSNumber(value: temp))!
        if !operating && currentTemp.count >= kMaxLenght{
                return
        }
        
        currentTemp = auxFormatter.string(from: NSNumber(value: temp))!
        
        
        if operating {
            total = total == 0 ? temp: total
            Result.text = ""
            currentTemp = ""
            operating = false
            
        }
        if decimal{
            currentTemp = "\(currentTemp)\(kdecimalseparator)"
            decimal = false
        }
        
        let number = sender.tag
        temp = Double(currentTemp + String(number))!
        Result.text = printFormatter.string(from: NSNumber(value: temp))
        selectVisualOperation()
        sender.shine()
    }
    
    //Limpia valores
    private func Clear(){
        operation = .none
        btnAC.setTitle("AC", for: .normal)
        if temp != 0 {
            temp = 0
            Result.text = "0"
        }
        else{
            total = 0
            result()
        }
    }
    
    private func result(){
        
        switch operation{
            
        case .none:
            
            break
        case .suma:
            total = total + temp
            break
        case .resta:
            total = total - temp
            break
        case .multiplicacion:
            total = total * temp
            break
        case .division:
            total = total / temp
            break
        case .percent:
            temp = temp / 100
            total = temp
            break
        }
        
        //Formateo en pantalla
        
        if let currentTotal = auxTotalFormatter.string(from: NSNumber(value: total)), currentTotal.count > kMaxLenght {
                   Result.text = printScientificFormatter.string(from: NSNumber(value: total))
               } else {
                   Result.text = printFormatter.string(from: NSNumber(value: total))
               }
        operation = .none
        
        UserDefaults.standard.set(total, forKey: kTotal)
        
        selectVisualOperation()
        print ("TOTAL: \(total)")
    }
    
    private func selectVisualOperation(){
        
        if !operating {
            
            btnSuma.selectOperation(false)
            btnResta.selectOperation(false)
            btnMultiplicar.selectOperation(false)
            btnDividir.selectOperation(false)
            
            switch operation{
                
            case .none:
                btnSuma.selectOperation(false)
                btnResta.selectOperation(false)
                btnMultiplicar.selectOperation(false)
                btnDividir.selectOperation(false)
                break
            case .suma:
                btnSuma.selectOperation(true)
                btnResta.selectOperation(false)
                btnMultiplicar.selectOperation(false)
                btnDividir.selectOperation(false)
                break
            case .resta:
                btnSuma.selectOperation(false)
                btnResta.selectOperation(true)
                btnMultiplicar.selectOperation(false)
                btnDividir.selectOperation(false)
                
                break
            case .multiplicacion:
                btnSuma.selectOperation(false)
                btnResta.selectOperation(false)
                btnMultiplicar.selectOperation(true)
                btnDividir.selectOperation(false)
                
                break
            case .division:
                btnSuma.selectOperation(false)
                btnResta.selectOperation(false)
                btnMultiplicar.selectOperation(false)
                btnDividir.selectOperation(true)
                
                break
            case .percent:
                btnSuma.selectOperation(false)
                btnResta.selectOperation(false)
                btnMultiplicar.selectOperation(false)
                btnDividir.selectOperation(false)
                break
            }
        }
        else{
            
        }
    }
    
    
    
    
    
    
    
    
    
    
    
}
