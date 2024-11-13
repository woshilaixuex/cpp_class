#include "teacher.h"
#include <iostream>

Teacher::Teacher(int id, std::string name, std::string title, std::string department)
    : Person(id, name), title(title), department(department) {}

void Teacher::input() {
    Person::input();
    std::cout << "Enter Title: ";
    std::cin.ignore();
    std::getline(std::cin, title);
    std::cout << "Enter Department: ";
    std::getline(std::cin, department);
}

void Teacher::display() const {
    Person::display();
    std::cout << "Title: " << title << "\nDepartment: " << department << std::endl;
}
