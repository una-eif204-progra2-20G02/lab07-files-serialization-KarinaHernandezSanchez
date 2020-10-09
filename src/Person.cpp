//
// Created by jeremy solis on 04-oct.-20.
//

#include "Person.h"

Person::Person(int id, int age, std::string name) : id(id), age(age), name(name) {}

int Person::getId() const {
    return id;
}

void Person::setId(int id) {
    Person::id = id;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

const std::string &Person::getName() const {
    return name;
}

void Person::setName(const std::string &name) {
    Person::name = name;
}

std::string Person::toString() {
    return "Name: " + getName() + "ID: " + getId() + "Age: " + getAge();
}

Person::Person() {

}
