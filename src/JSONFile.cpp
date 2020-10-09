//
// Created by Karina Hernandez on 05-oct.-20.
//

#include "JSONFile.h"

void JSONFile::save(PersonManager personList) {

    vector<json> listSerialize;

    listSerialize.reserve(personList.size());
    for (int i = 0; i < personList.size(); i++) {
        listSerialize.push_back(serializeObject(personList,i));
    }
    ofstream file;

    try { file.open("TextFile.json", ios::binary); }
    catch (ifstream::failure a) {
        exit(1);
    }
    file << listSerialize;
    file.close();
}

void JSONFile::load(PersonManager personList) {
    ifstream file;
    json vector;
    try { file.open("TextFile.json", ios::binary); }
    catch (ifstream::failure a) { exit(1);}

    file>>vector;
    personList = convertToObject(vector);
}

json JSONFile::serializeObject(PersonManager personList, int pos) {
    json jsonPerson;
    Person person1 = personList.getPerson(pos);
    jsonPerson["Identification"] = person1.getId();
    jsonPerson["Age"] = person1.getAge();
    jsonPerson["Name"] = person1.getName();

    return jsonPerson;
}

vector<Person> JSONFile::convertToObject(const json &array) {
    vector<Person> arrayAuxPerson;
    vector<json> arrayAuxJson = array;
    Person personAux;
    for(auto & i : arrayAuxJson){
        personAux = deserializeObject(i);
        arrayAuxPerson.push_back(personAux);
    }
    return arrayAuxPerson;
}

Person JSONFile::deserializeObject(json array) {
    Person person1;

    person1.setId(array["Identification"]);
    person1.setAge(array["Age"]);
    person1.setName(array["Name"]);

    return person1;
}
