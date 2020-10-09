//
// Created by Karina Hernandez on 08-oct.-20.
//

#include "FileManager.h"

void FileManager::serialize(IFiles *typeFile, PersonManager personList) {
    return typeFile->save(personList);
}

void FileManager::deserialize(IFiles *typeFile, PersonManager personList) {
    return typeFile->load(personList);
}
