#include <iostream>
#include <numeric> 

/*
 * @Author: lyr1cs
 * @Email: linyugang7295@gmail.com
 * @Description: 分数运算
 * @Date: 2024-11-14 18:57
 */

class Fraction {
private:
    int numerator;
    int denominator;

    void simplify() {
        int gcd = std::gcd(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

public:
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {
        if (denom == 0) {
            throw std::invalid_argument("Denominator cannot be zero.");
        }
        simplify();
    }

    Fraction& operator=(const Fraction& other) {
        if (this != &other) {
            numerator = other.numerator;
            denominator = other.denominator;
        }
        return *this;
    }

    Fraction operator+(const Fraction& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    Fraction operator-(const Fraction& other) const {
        int num = numerator * other.denominator - other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    friend Fraction operator*(const Fraction& lhs, const Fraction& rhs) {
        return Fraction(lhs.numerator * rhs.numerator, lhs.denominator * rhs.denominator);
    }

    friend Fraction operator/(const Fraction& lhs, const Fraction& rhs) {
        if (rhs.numerator == 0) {
            throw std::invalid_argument("Division by zero.");
        }
        return Fraction(lhs.numerator * rhs.denominator, lhs.denominator * rhs.numerator);
    }

    friend std::ostream& operator<<(std::ostream& os, const Fraction& frac) {
        if (frac.denominator == 1) {
            os << frac.numerator;
        } else if (std::abs(frac.numerator) > frac.denominator) {
            int wholePart = frac.numerator / frac.denominator;
            int remainder = std::abs(frac.numerator % frac.denominator);
            os << wholePart << " " << remainder << "/" << frac.denominator;
        } else {
            os << frac.numerator << "/" << frac.denominator;
        }
        return os;
    }
};

int main() {
    Fraction f1(3, 4);
    Fraction f2(2, 5);
    
    Fraction sum = f1 + f2;
    Fraction diff = f1 - f2;
    Fraction prod = f1 * f2;
    Fraction quot = f1 / f2;
    
    std::cout << "f1: " << f1 << "\n";
    std::cout << "f2: " << f2 << "\n";
    std::cout << "Sum: " << sum << "\n";
    std::cout << "Difference: " << diff << "\n";
    std::cout << "Product: " << prod << "\n";
    std::cout << "Quotient: " << quot << "\n";
    return 0;
}
