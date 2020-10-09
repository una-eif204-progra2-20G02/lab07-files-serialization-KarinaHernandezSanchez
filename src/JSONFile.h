//
// Created by Karina Hernandez on 05-oct.-20.
//

#ifndef LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_JSONFILE_H
#define LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_JSONFILE_H

#include "IFiles.h"
class JSONFile : public IFiles {
public:
    void save(PersonManager)override;
    json serializeObject(PersonManager,int);
    Person deserializeObject(json);

};


#endif //LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_JSONFILE_H
