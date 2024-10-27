#include <iostream>
#include <cassert>

class Dog {
public:
    Dog(int age, int weight) : age(age), weight(weight) {}
    void setAge(int age) {
        this->age = age;
    }
    void setWeight(int weight) {
        this->weight = weight;
    }
    int getAge() const {
        return this->age;
    }
    int getWeight() const {
        return this->weight;
    }
    int nextYears() const {
        return this->age + 1;
    }
    friend std::ostream& operator<<(std::ostream &out, const Dog &dog) {
        out << "Dog(Age: " << dog.age << ", Weight: " << dog.weight << ")";
        return out;
    }
private:
    int age, weight;
};

int main() {
    Dog dog(2, 12);
    assert(dog.getAge() == 2);
    assert(dog.getWeight() == 12);

    dog.setAge(3);
    assert(dog.getAge() == 3);

    dog.setWeight(15);
    assert(dog.getWeight() == 15);

    assert(dog.nextYears() == 4);

    std::cout << "Dog information: " << dog << std::endl;

    return 0;
}
