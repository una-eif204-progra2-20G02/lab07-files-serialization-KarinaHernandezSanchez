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
    stringstream list;
    for(int i = 0; i< personList.size() ;i++) {
        list<<personList[i].toString();
    }
    return list.str();
}

Person PersonManager::getPerson(int pos) {
    return personList[pos];
}

int PersonManager::size() {
    return personList.size();
}

PersonManager::PersonManager(std::vector<Person> vector) {

}
