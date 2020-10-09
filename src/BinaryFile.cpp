//
// Created by Karina on 05-oct.-20.
//

#include "BinaryFile.h"

void BinaryFile::save(PersonManager personList) {
    ofstream file;

    try { file.open("BinaryFile.dat", ios::app | ios::binary); }

    catch (std::ifstream::failure a) { cout << "cannot open the file"; }
    for(int i = 0; i < personList.size(); i++) {
        auto person = personList.getPerson(i);

    file.write((char *) &person, sizeof(Person));
    }
    file.close();
}

void BinaryFile::load(PersonManager personList) {
    ifstream file;

    try { file.open("BinaryFile.dat", ios::in | ios::binary); }

    catch (std::ifstream::failure a) {
        cout << "cannot open the file";
        exit(1);
    }

    file.read((char *) &personList, sizeof(personList));

    file.close();
}

void BinaryFile::read() {

}

void BinaryFile::write() {

}