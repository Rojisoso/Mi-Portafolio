//
//  NewsDataService.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 17/02/23.
//

import Foundation
import Combine

class NewsDataSevice {
    
    @Published var allNews: [NewsModel] = []
    
    var NewsSub: AnyCancellable?
    
    init() {
        GetNews()
    }
    
      func GetNews() {
        
        guard let url = URL(string: "https://newsapi.org/v2/top-headlines?country=us&category=health&apiKey=6ddb73032a774faaa067e3aceacaa645") else { return }
        
         NewsSub = NetManager.Download(url: url)
            .decode(type: GlobalData.self, decoder: JSONDecoder())
            .sink(receiveCompletion: NetManager.HandleCompletion, receiveValue: { [weak self] returnedGlobalData in
                self?.allNews = returnedGlobalData.articles ?? []
                self?.NewsSub?.cancel()
            })
                
            

    }
}
