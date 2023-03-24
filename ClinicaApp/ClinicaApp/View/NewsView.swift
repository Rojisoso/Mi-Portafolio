//
//  NewsView.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 17/02/23.
//

import SwiftUI

struct NewsView: View {
    
    @EnvironmentObject var vm: HomeViewModel
        
    var body: some View {
        
        NavigationStack{
            ScrollView{
                LazyVStack{
                    ForEach(vm.allNews,id: \.self){ new in
                        NewsRowView(new: new)
                    }
                }
            }
            .refreshable {
                ReloadData()
            }
            .listStyle(.plain)
            .navigationTitle("NEWS")
        }
    }
}

struct NewsView_Previews: PreviewProvider {
    static var previews: some View {
        NewsView()
            .environmentObject(dev.homeVM)
    }
}

extension NewsView {
    
    func ReloadData(){
        vm.ReloadData()
        
    }
}
