//
//  NetManager.swift
//  MyCrypto
//
//  Created by Luis Vienrich on 15/02/23.
//

import Foundation
import Combine

class NetManager {
    
    enum NetError: LocalizedError{
        
        case badURLresponse(url: URL)
        case unknown
        
        var errorDescription: String?{
            switch self {
            case .badURLresponse(url: let url): return "Bad response from the URL. \(url)"
            case .unknown: return "Unknown error ocurred"
            }
        }
    }
    
    static func Download(url: URL) -> AnyPublisher<Data, any Error> {
        
       return URLSession.shared.dataTaskPublisher(for: url)
             .subscribe(on: DispatchQueue.global(qos: .default))
             .tryMap( {try HandleURLResponse(output: $0, url: url) })
             .receive(on: DispatchQueue.main)
             .eraseToAnyPublisher()
    }
    
    static func HandleURLResponse(output: URLSession.DataTaskPublisher.Output, url: URL) throws -> Data {
        guard let response = output.response as? HTTPURLResponse,
              response.statusCode >= 200 && response.statusCode < 300 else {
            throw NetError.badURLresponse(url: url)
        }
        return output.data
    }
    
    static func HandleCompletion(completion: Subscribers.Completion<Error>){
        switch completion {
        case .finished:
            break
        case .failure(let error):
            print(error.localizedDescription)
        }
    }
}
