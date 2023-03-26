//
//  LaunchScreenView.swift
//  PucpMovilFrontEnd
//
//  Created by Luis Vienrich on 26/03/23.
//

import SwiftUI

struct LaunchScreenView: View {
    
    @EnvironmentObject private var launchScreenState: LaunchScreenStateManager

    @ViewBuilder
    private var image: some View {
        Image("PUCPLogo")
                .resizable()
                .scaledToFit()
        }
    
    @ViewBuilder
        private var backgroundColor: some View {
            Color.theme.LaunchScreenBackgroundColor.ignoresSafeArea()
        }
    
    var body: some View {
        ZStack {
                    backgroundColor
                    image
                }
            }
    
}

struct LaunchScreenView_Previews: PreviewProvider {
    static var previews: some View {
        LaunchScreenView()
            .environmentObject(LaunchScreenStateManager())
    }
}

