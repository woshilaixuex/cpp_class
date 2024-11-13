#include <iostream>
/*
 * @Author: lyr1cs
 * @Email: linyugang7295@gmail.com
 * @Description: 
 * @Date: 2024-11-12 21:29
 */

class Cat{
    public:
    Cat();
    int getNumOfCat();
    private:
    static int numOfCat;
};
int Cat::numOfCat = 0;
Cat::Cat(){
    this->numOfCat++;
}
int Cat::getNumOfCat(){
    return this->numOfCat;
}
int main(){
    Cat cat1; 
    Cat cat2; 

    std::cout << "Number of cats: " << cat1.getNumOfCat() << std::endl;
    return 0;
}