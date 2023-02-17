//
//  NewsRowView.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 17/02/23.
//

import SwiftUI

struct NewsRowView: View {
    var body: some View {
        
        VStack{
         
            HStack{
                Circle()
                    .frame(width: 30,height: 30)
                Text("Title")
                    .font(.headline)
                Spacer()
                Button {
                    
                } label: {
                    Image(systemName: "ellipsis")
                }
            }
            .padding()
            
            VStack{
                PhotoImageView()
                Text("Description: asdasdasdasdasd asdasd asd asd asdasdasd aasdasd asdas asdasd asd")
                    .font(.caption)
            }
            
            HStack(spacing: 10){
                Button {
                    
                } label: {
                    Image(systemName: "hand.thumbsup")
                    Text("Like")
                        
                }
                Spacer()
                Button {
                    
                } label: {
                    Image(systemName: "square.and.arrow.up")
                    Text("Share")
                }
            }
            .padding()
        }
    }
}

struct NewsRowView_Previews: PreviewProvider {
    static var previews: some View {
        NewsRowView()
    }
}
