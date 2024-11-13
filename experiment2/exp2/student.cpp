#include "student.h"
#include <iostream>

Student::Student(int id, std::string name, std::string className, float grade)
    : Person(id, name), className(className), grade(grade) {}

void Student::input() {
    Person::input();
    std::cout << "Enter Class: ";
    std::cin.ignore();
    std::getline(std::cin, className);
    std::cout << "Enter Grade: ";
    std::cin >> grade;
}

void Student::display() const {
    Person::display();
    std::cout << "Class: " << className << "\nGrade: " << grade << std::endl;
}
