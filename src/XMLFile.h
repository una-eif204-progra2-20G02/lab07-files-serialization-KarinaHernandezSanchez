//
// Created by Karina Hernandez on 05-oct.-20.
//

#ifndef LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_XMLFILE_H
#define LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_XMLFILE_H

#include "IFiles.h"
class XMLFile :public IFiles{
public:
    void save(PersonManager)override;
    void load(PersonManager)override;
    void write();
    void read();
};


#endif //LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_XMLFILE_H
