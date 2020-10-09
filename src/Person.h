//
// Created by Karina Hernandez on 04-oct.-20.
//

#ifndef LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_PERSON_H
#define LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_PERSON_H

#include <ostream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Person {
public:
    Person();
    Person(int id, int age, std::string name);
    const std::string &getName() const;
    void setName(const std::string &name);
    int getId() const;
    void setId(int id);
    int getAge() const;
    void setAge(int age);
    std::string toString();
    ~Person();

private:
    int id;
    int age;
    std::string name;
};


#endif //LAB07_FILES_SERIALIZATION_KARINAHERNANDEZSANCHEZ_PERSON_H
