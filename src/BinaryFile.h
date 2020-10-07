//
// Created by Karina Hernandez on 05-oct.-20.
//

#ifndef LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_BINARYFILE_H
#define LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_BINARYFILE_H

#include "IFiles.h"
#include "PersonManager.h"

class BinaryFile :public IFiles{
    BinaryFile();
    void save()override;
    void load()override;
    void read()override;
    void write()override;
};


#endif //LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_BINARYFILE_H
