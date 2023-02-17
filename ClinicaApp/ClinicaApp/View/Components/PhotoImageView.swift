//
//  PhotoImageView.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 17/02/23.
//

import SwiftUI

struct PhotoImageView: View {
    var body: some View {
        Image(systemName: "photo")
            .resizable()
            .scaledToFit()
    }
}

struct PhotoImageView_Previews: PreviewProvider {
    static var previews: some View {
        PhotoImageView()
    }
}
