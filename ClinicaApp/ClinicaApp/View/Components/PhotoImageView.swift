//
//  PhotoImageView.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 17/02/23.
//

import SwiftUI

struct PhotoImageView: View {
    
    @StateObject var vm: NewImageViewModel
    
    init(new: NewsModel){
        _vm = StateObject(wrappedValue: NewImageViewModel(new: new))
    }
    
    var body: some View {
        
        if let image = vm.image{
            Image(uiImage: image)
                .resizable()
                .scaledToFit()
        } else if vm.isLoading {
            ProgressView()
        } else {
            Image(systemName: "questionmark")
                .resizable()
                .scaledToFit()
        }
    }
}

struct PhotoImageView_Previews: PreviewProvider {
    static var previews: some View {
        PhotoImageView(new: dev.info)
    }
}
