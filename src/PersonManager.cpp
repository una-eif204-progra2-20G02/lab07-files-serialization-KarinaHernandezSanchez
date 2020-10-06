//
// Created by jeremy solis on 05-oct.-20.
//

#include "PersonManager.h"

PersonManager::PersonManager() {

}

void PersonManager::addPerson(Person person) {
    personList.push_back(person);
}

void PersonManager::erasePerson() {
    personList.pop_back();
}

std::string PersonManager::toString() {
    for(int i = 0; i< personList.size() ;i++) {
        return personList[i].toString();
    }
}

Person PersonManager::getPerson(int) {
    return Person(0, 0, __cxx11::basic_string());
}
