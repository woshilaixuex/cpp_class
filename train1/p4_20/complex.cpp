
#include <iostream>
using namespace std;

class Complex {
public:
    Complex(double r, double i) : real(r), imag(i) {}

    Complex(double r) : real(r), imag(0) {}

    void add(const Complex &c) {
        real += c.real;
        imag += c.imag;
    }

    void show() const {
        cout << real << " + " << imag << "i" << endl;
    }

private:
    double real; 
    double imag;
};

int main() {
    Complex c1(3, 5);     
    Complex c2 = 4.5;     
    c1.add(c2);          
    c1.show();       
    return 0;
}
