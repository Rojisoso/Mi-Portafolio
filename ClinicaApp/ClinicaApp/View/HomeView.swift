//
//  HomeView.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 16/02/23.
//

import SwiftUI

struct HomeView: View {
    var body: some View {
        
        TabView {
            NewsView()
                .tabItem {
                    HStack {
                        Text("News")
                        Image(systemName: "newspaper.fill")
                    }
                }
            Text("CITA")
                .tabItem {
                    Text("Book appointment")
                    Image(systemName: "list.bullet.clipboard.fill")
                }
            ProfileView()
                .tabItem {
                    Text("Profile")
                    Image(systemName: "person.circle.fill")
                }
        }
    }
}

struct HomeView_Previews: PreviewProvider {
    static var previews: some View {
        HomeView()
    }
}
