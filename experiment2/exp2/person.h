#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    int id;
    std::string name;
public:
    Person(int id = 0, std::string name = "");
    virtual void input();
    virtual void display() const;
};

#endif // PERSON_H
