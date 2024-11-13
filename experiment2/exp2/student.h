#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class Student : public Person {
private:
    std::string className;
    float grade;
public:
    Student(int id = 0, std::string name = "", std::string className = "", float grade = 0.0);
    void input() override;
    void display() const override;
};

#endif // STUDENT_H
