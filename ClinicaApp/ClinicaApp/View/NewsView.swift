//
//  NewsView.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 17/02/23.
//

import SwiftUI

struct NewsView: View {
    var body: some View {
        NavigationView{
            List{
                NewsRowView()
            }
            .refreshable {
                
            }
            .listStyle(.plain)
            .navigationTitle("NEWS")
        }
        
    }
}

struct NewsView_Previews: PreviewProvider {
    static var previews: some View {
        NewsView()
    }
}
