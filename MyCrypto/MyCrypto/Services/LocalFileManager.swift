//
//  LocalFileManager.swift
//  MyCrypto
//
//  Created by Luis Vienrich on 15/02/23.
//

import Foundation
import SwiftUI

class LocalFileManager {

    static let instace = LocalFileManager()
    private init() { }

    func SaveImages(image: UIImage, imageName: String, folderName: String){

        //Create folder
        CreateFolderIfNeeded(folderName: folderName)

        //Get path for image
        guard
            let data = image.pngData(),
            let url = GetURLForImage(imageName: imageName, folderName: folderName)
            else { return }

        //Save Image
        do{
            try data.write(to: url)
        }catch let error{
            print("Error saving image. \(error)")
        }
    }

    func GetImage(imageName: String,folderName: String) -> UIImage? {

        guard
            let url = GetURLForImage(imageName: imageName, folderName: folderName),
            FileManager.default.fileExists(atPath: url.path) else {
            return nil
        }
        return UIImage(contentsOfFile: url.path)
    }


    private func CreateFolderIfNeeded(folderName: String){

        guard let url = GetURLForFolder(folderName: folderName) else { return }

        if !FileManager.default.fileExists(atPath: url.path){

            do {
                try FileManager.default.createDirectory(at: url, withIntermediateDirectories: true, attributes: nil)
            } catch let error {
                print("Error creating directory. \(error)")
            }
        }
    }

    private func GetURLForFolder(folderName: String) -> URL? {

        guard let url = FileManager.default.urls(for: .cachesDirectory, in: .userDomainMask).first else{
            return nil

        }
        return url.appendingPathComponent(folderName)

    }

    private func GetURLForImage(imageName: String,folderName: String) -> URL? {

        guard let folderURL = GetURLForFolder(folderName: folderName) else {
            return nil
        }
        return folderURL.appendingPathComponent(imageName + ".png")
    }
}
