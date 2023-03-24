//
//  NewsRowView.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 17/02/23.
//

import SwiftUI

struct NewsRowView: View {
    
    @State var isLiked: Bool = false
    
    let new: NewsModel
    var body: some View {
        
        VStack(){
            HStack{
                Text(new.title)
                    .font(.headline)
                    .padding()
            }
            
            VStack{
                Link(destination: URL(string: new.url ?? "")!) {
                    PhotoImageView(new: new)
                        .scaledToFit()
                }
                        
                Text(new.description ?? "")
                    .font(.caption)
                    .padding(.leading)
                    .padding(.trailing)
            }
            HStack{
                Button {
                    isLiked.toggle()
                } label: {
                    HStack{
                        Image(systemName: "hand.thumbsup")
                            .foregroundColor(isLiked ? .orange : .accentColor)
                        Text("Like")
                            .foregroundColor(isLiked ? .orange : .accentColor)
                    }
                        
                }
                .padding()
                Spacer()
                ShareLink("Share", item: new.url ?? "")
                    .padding()
            }
        }
    }
}

struct NewsRowView_Previews: PreviewProvider {
    static var previews: some View {
        NewsRowView(new: dev.info)
    }
}

extension NewsRowView {
    
   
}
