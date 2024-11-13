#include <iostream>
/*
 * @Author: lyr1cs
 * @Email: linyugang7295@gmail.com
 * @Description:
 * @Date: 2024-11-12 21:03
 */

class Engin{
    friend class Fuel;
    public:
    Engin(int hp, int fuel) : horsepower(hp), fuelLevel(fuel) {}
    protected:
        int horsepower = 100;

    private:
        int fuelLevel = 50;
};

class Fuel{
    public:
        void checkFuelLevel(const Engin& engin) {
            std::cout << "Fuel level: " << engin.fuelLevel << std::endl;
        }

        void increaseHorsepower(Engin& engin, int increment) {
            engin.horsepower += increment;
            std::cout << "Horsepower increased to: " << engin.horsepower << std::endl;
        }
};

int main(){
    Engin engin(120, 75);
    Fuel fuel;
    fuel.checkFuelLevel(engin);
    fuel.increaseHorsepower(engin, 20);
    return 0;
}