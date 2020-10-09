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

json JSONFile::serializeObject(PersonManager personList, int pos) {
    json jsonPerson;
    Person person1 = personList.getPerson(pos);
    jsonPerson["Identification"] = person1.getId();
    jsonPerson["Age"] = person1.getAge();
    jsonPerson["Name"] = person1.getName();

    return jsonPerson;
}


Person JSONFile::deserializeObject(json array) {
    Person person1;

    person1.setId(array["Identification"]);
    person1.setAge(array["Age"]);
    person1.setName(array["Name"]);

    return person1;
}
