//
// Created by Karina Hernandez on 05-oct.-20.
//

#ifndef LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_PERSONMANAGER_H
#define LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_PERSONMANAGER_H

#include "Person.h"
#include <vector>

class PersonManager {
    PersonManager();
    void addPerson(Person);
    Person getPerson(int);
    void erasePerson();
    std::string toString();
private:
    std::vector<Person> personList;
};


#endif //LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_PERSONMANAGER_H
