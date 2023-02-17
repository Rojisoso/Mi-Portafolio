//
//  ProfileImageView.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 16/02/23.
//

import SwiftUI


struct ProfileImageView: View {
    
    
    var body: some View {
        
        Image(systemName: "heart.fill")
            .resizable()
            .scaledToFit()
    }
}

struct ProfileImageView_Previews: PreviewProvider {
    static var previews: some View {
        ProfileImageView()
            .previewLayout(.sizeThatFits)
    }
}
