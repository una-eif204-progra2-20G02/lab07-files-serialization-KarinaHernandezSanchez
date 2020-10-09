//
// Created by Karina Hernandez on 05-oct.-20.
//

#ifndef LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_IFILES_H
#define LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_IFILES_H

#include "PersonManager.h"
#include <../lib/nlohmann/json.hpp>
#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <sstream>
#include "XMLSerialization.h"

using json = nlohmann::json;
using namespace xmls;
using namespace std;

class IFiles {

public:
    virtual void save(PersonManager)=0;
    virtual void load(PersonManager)=0;
    virtual void write()=0;
    virtual void read()=0;
    virtual ~IFiles();

};


#endif //LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_IFILES_H
