#ifndef TEACHER_H
#define TEACHER_H

#include "person.h"

class Teacher : public Person {
private:
    std::string title;
    std::string department;
public:
    Teacher(int id = 0, std::string name = "", std::string title = "", std::string department = "");
    void input() override;
    void display() const override;
};

#endif // TEACHER_H
