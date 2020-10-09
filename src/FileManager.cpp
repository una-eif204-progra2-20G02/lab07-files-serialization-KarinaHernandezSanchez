//
// Created by Karina Hernandez on 08-oct.-20.
//

#include "FileManager.h"

void FileManager::serialize(IFiles *typeFile) {
    return typeFile->save();
}

void FileManager::deserialize(IFiles *typeFile) {
    return typeFile->load();
}
