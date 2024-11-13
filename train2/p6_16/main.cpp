#include <iostream>

int main(){
    int a = 0;
    int *p = &a;
    int &r = a;
    *p = 10;
    std::cout << a << std::endl;
    r = 5;
    std::cout << a << std::endl;
}