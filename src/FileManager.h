//
// Created by Karina Hernandez on 08-oct.-20.
//

#ifndef LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_FILEMANAGER_H
#define LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_FILEMANAGER_H

#include "IFiles.h"

class FileManager {
public:
    void serialize(IFiles*, PersonManager);
    void deserialize(IFiles*, PersonManager);
};


#endif //LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_FILEMANAGER_H
