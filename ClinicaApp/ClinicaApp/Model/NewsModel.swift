//
//  NewsModel.swift
//  ClinicaApp
//
//  Created by Luis Vienrich on 17/02/23.
//

import Foundation


/*
 
 http://api.mediastack.com/v1/news
     ? access_key = YOUR_ACCESS_KEY
     & keywords = tennis
     & countries = us, gb, de
 
 {
     "pagination": {
         "limit": 100,
         "offset": 0,
         "count": 100,
         "total": 293
     },
     "data": [
         {
             "author": "TMZ Staff",
             "title": "Rafael Nadal Pulls Out Of U.S. Open Over COVID-19 Concerns",
             "description": "Rafael Nadal is officially OUT of the U.S. Open ... the tennis legend said Tuesday it's just too damn unsafe for him to travel to America during the COVID-19 pandemic. \"The situation is very complicated worldwide,\" Nadal wrote in a statement. \"The…",
             "url": "https://www.tmz.com/2020/08/04/rafael-nadal-us-open-tennis-covid-19-concerns/",
             "source": "TMZ.com",
             "image": "https://imagez.tmz.com/image/fa/4by3/2020/08/04/fad55ee236fc4033ba324e941bb8c8b7_md.jpg",
             "category": "general",
             "language": "en",
             "country": "us",
             "published_at": "2020-08-05T05:47:24+00:00"
         },
         [...]
     ]
 }
 
 
 
 
 */

struct NewsModel: Identifiable, Codable {
   
    var id = UUID().uuidString
    let data: [Data]?
    
    
}


struct Data: Codable {
    let author, title, description: String?
    let url: String?
    let source: String?
    let image: String?
    let category, language, country: String?
    let publishedAt: Date?
    
    enum CodingKeys: String, CodingKey {
        case author
        case title
        case description
        case url
        case source
        case image
        case category
        case language
        case country
        case publishedAt = "published_at"
    }
}




