#include "person.h"
#include <iostream>

Person::Person(int id, std::string name) : id(id), name(name) {}

void Person::input() {
    std::cout << "Enter ID: ";
    std::cin >> id;
    std::cout << "Enter Name: ";
    std::cin.ignore();
    std::getline(std::cin, name);
}

void Person::display() const {
    std::cout << "ID: " << id << "\nName: " << name << std::endl;
}
