//
// Created by Karina Hernandez on 05-oct.-20.
//
#include "IFiles.h"
#include "Person.h"
#include "BinaryFile.h"
#include "JSONFile.h"
#include "PersonManager.h"
#include "FileManager.h"

int main(){

    PersonManager personManager;
    FileManager fileManager;

    IFiles *binaryFile = new BinaryFile();
    IFiles *jsonFile = new JSONFile();

    Person person1(402280955, 25, "Karina");
    Person person2(435466464, 17, "Jotaro");
    Person person3(738456564, 15, "Giorno");

    personManager.addPerson(person1);
    personManager.addPerson(person1);
    personManager.addPerson(person1);


    //Binary File
    fileManager.serialize(binaryFile,personManager);
    fileManager.deserialize(binaryFile, personManager);

    //JSON File
    fileManager.serialize(jsonFile,personManager);


    delete binaryFile;
    delete jsonFile;

    return 0;
};