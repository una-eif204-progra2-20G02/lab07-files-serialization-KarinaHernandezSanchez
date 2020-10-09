//
// Created by Karina Hernandez on 08-oct.-20.
//

#include "FileManager.h"

void FileManager::serialize(IFiles *typeFile, PersonManager personList) {
    typeFile->save(personList);
}

void FileManager::deserialize(IFiles *typeFile, PersonManager personList) {
    typeFile->load(personList);
}
