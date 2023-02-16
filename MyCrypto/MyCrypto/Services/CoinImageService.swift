//
//  CoinImageService.swift
//  MyCrypto
//
//  Created by Luis Vienrich on 15/02/23.
//

import Foundation
import SwiftUI
import Combine

class CoinImageService {
    
    @Published var image: UIImage? = nil
    
    private let coin: CoinModel
    private var imageSub: AnyCancellable?
   // private let filemanager = LocalFileManager.instace
    private let folderName = "coin_images"
    private let imageName: String
    init(coin: CoinModel) {
        self.coin = coin
        self.imageName = coin.id
        GetCoinImage()
    }
    
    
    private func GetCoinImage(){
        
       // if let savedimage = filemanager.GetImage(imageName: imageName, folderName: folderName){
           // image = savedimage
        //}
        //else {
            DonwloadCoinImage()
        //}
    }
    
    private func DonwloadCoinImage(){
        
        guard let url = URL(string: coin.image) else { return }
        imageSub = NetManager.Download(url: url)
            .tryMap({ (data) -> UIImage? in
                return UIImage(data: data)
            })
            .sink(receiveCompletion: NetManager.HandleCompletion, receiveValue: { [weak self] returnedImage in
                guard
                    let asd = self,
                    let downloadedImage = returnedImage else {return}
                asd.image = downloadedImage
                asd.imageSub?.cancel()
               // asd.filemanager.SaveImages(image: downloadedImage, imageName: asd.imageName, folderName: asd.folderName)
            })
    }
}
