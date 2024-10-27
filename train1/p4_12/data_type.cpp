#include <iostream>
#include <variant>

class DataType {
public:
    using DataVariant = std::variant<char, int, float>;

    DataType() : data(0) { 
        std::cout << "DataType initialized with int 0." << std::endl;
    }

    DataType(char value) : data(value) {
        std::cout << "Constructor called with char: " << value << std::endl;
    }

    DataType(int value) : data(value) {
        std::cout << "Constructor called with int: " << value << std::endl;
    }

    DataType(float value) : data(value) {
        std::cout << "Constructor called with float: " << value << std::endl;
    }

    DataType(const DataType &other) : data(other.data) {
        std::cout << "Copy constructor called." << std::endl;
    }

    DataVariant getValue() const {
        return data;
    }

    void printValue() const {
        std::visit([](auto&& arg) {
            std::cout << "Current value: " << arg << std::endl;
        }, data);
    }

private:
    DataVariant data;
};

int main() {
    DataType charData('A'); 
    charData.printValue();

    DataType intData(42); 
    intData.printValue();

    DataType floatData(3.14f);
    floatData.printValue();

    DataType defaultData;      
    defaultData.printValue();

    DataType copyData(intData); 
    copyData.printValue();

    return 0;
}
