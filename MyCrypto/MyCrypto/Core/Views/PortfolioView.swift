//
//  PorfolioView.swift
//  MyCrypto
//
//  Created by Luis Vienrich on 16/02/23.
//

import SwiftUI

struct PortfolioView: View {
    
    @Environment(\.dismiss) var presentationMode
    @EnvironmentObject private var vm: HomeViewModel
    @State private var selectedCoin: CoinModel? = nil
    @State private var quantity: String = ""
    var body: some View {
        NavigationView {
            ScrollView{
                VStack(alignment: .leading, spacing: 0){
                    SearchBarView(searchText: $vm.searchText)
                        .padding(.bottom,10)
                    
                    CoinSelectView
                    
                    if selectedCoin != nil {
                        portfolioInputSection
                    }
                }
            }
            .navigationTitle("Edit Portfolio")
            .toolbar{
                ToolbarItem(placement: .navigationBarLeading) {
                leadingnavBarButton
                }
                ToolbarItem(placement: .navigationBarTrailing) {
                    trailingBarButton
                }
            }
        }
        
    }
}

struct PortfolioView_Previews: PreviewProvider {
    static var previews: some View {
        PortfolioView()
            .environmentObject(dev.homeVM)
    }
}

extension PortfolioView{
    
    private var CoinSelectView: some View{
        ScrollView(.horizontal,showsIndicators: true){
            LazyHStack(spacing: 10){
                ForEach(vm.allCoins) { coin in
                    CoinLogoView(coin: coin)
                        .frame(width: 75)
                        .onTapGesture {
                            withAnimation(.easeIn){
                                selectedCoin = coin
                            }
                        }
                        .background(
                            RoundedRectangle(cornerRadius: 10)
                                .stroke(selectedCoin?.id == coin.id ?  Color.theme.green : Color.clear,lineWidth: 1)
                        )
                }
            }
            .padding()
        }
    }
    
    private func GetCurrentValue()->Double{
        
        if let quantity = Double(quantity){
            return quantity * (selectedCoin?.currentPrice ?? 0)
        }
        return 0
    }
    
    private var portfolioInputSection: some View{
        VStack(spacing: 20){
        HStack{
            Text("current price of \(selectedCoin?.symbol.uppercased() ?? ""): ")
            Spacer()
            Text(selectedCoin?.currentPrice.asCurrencyWith6Decimals() ?? "")
        }
        Divider()
        HStack{
            Text("Amount holding:")
            Spacer()
            TextField("Ex. 2.3",text: $quantity)
                .multilineTextAlignment(.trailing)
                .keyboardType(.decimalPad)
        }
        Divider()
        HStack{
            Text("Current value:")
            Spacer()
            Text(GetCurrentValue().asCurrencyWith6Decimals())
        }
    }
    .padding()
    .font(.headline)
    }
    
    private var leadingnavBarButton: some View {
        
            Button {
                presentationMode.callAsFunction()
            } label: {
                Image(systemName: "xmark")
                    .font(.headline)
            }
        }
    
    private var trailingBarButton: some View{
        Button {
            SaveButtonPressed()
        } label: {
            Text("SAVE")
        }
        .opacity(
             (selectedCoin != nil && quantity == "") ? 0.0 : 1.0
        )
    }
    
    private func SaveButtonPressed() {
        guard let _ = selectedCoin else { return }
        //SAVE TO PORTFOLIO
        
        RemoveSelectedCoin()
        UIApplication.shared.EndEditing()
    }
    
    private func RemoveSelectedCoin() {
        selectedCoin = nil
        vm.searchText = ""
    }
}
