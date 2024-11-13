#include "student.h"
#include "teacher.h"
#include <iostream>
int main() {
    Student student;
    
    Teacher teacher;

    std::cout << "Enter student details:" << std::endl;
    student.input();
    std::cout << "\nEnter teacher details:" << std::endl;
    teacher.input();

    std::cout << "\nDisplaying student details:" << std::endl;
    student.display();

    std::cout << "\nDisplaying teacher details:" << std::endl;
    teacher.display();

    return 0;
}
