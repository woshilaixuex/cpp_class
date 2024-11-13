#include <iostream>
#include <cmath>
#include <Windows.h>
// 基类：圆
class Circle {
public:
    Circle(double radius) : radius(radius) {}

protected:
    double radius;
};

// 派生类：球
class Globe : public Circle {
public:
    Globe(double radius) : Circle(radius) {}

    double SurfaceArea() {
        return 4 * M_PI * radius * radius;
    }

    double Volume() {
        return (4.0 / 3) * M_PI * pow(radius, 3);
    }

    void Display() {
        std::cout << "球的表面积: " << SurfaceArea() << std::endl;
        std::cout << "球的体积: " << Volume() << std::endl;
    }
};

// 派生类：圆柱
class Cylinder : public Circle {
public:
    Cylinder(double radius, double height) : Circle(radius), height(height) {}

    double SurfaceArea() {
        return 2 * M_PI * radius * (radius + height);
    }

    double Volume() {
        return M_PI * radius * radius * height;
    }

    void Display() {
        std::cout << "圆柱的表面积: " << SurfaceArea() << std::endl;
        std::cout << "圆柱的体积: " << Volume() << std::endl;
    }

private:
    double height;
};

// 派生类：圆锥
class Cone : public Circle {
public:
    Cone(double radius, double height) : Circle(radius), height(height) {}

    double SurfaceArea() {
        double slantHeight = sqrt(radius * radius + height * height);
        return M_PI * radius * (radius + slantHeight);
    }

    double Volume() {
        return (1.0 / 3) * M_PI * radius * radius * height;
    }

    void Display() {
        std::cout << "圆锥的表面积: " << SurfaceArea() << std::endl;
        std::cout << "圆锥的体积: " << Volume() << std::endl;
    }

private:
    double height;
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double radius, height;
    std::cout << "请输入球的半径: ";
    std::cin >> radius;
    Globe globe(radius);
    globe.Display();

    std::cout << "\n请输入圆柱的半径和高度: ";
    std::cin >> radius >> height;
    Cylinder cylinder(radius, height);
    cylinder.Display();

    std::cout << "\n请输入圆锥的半径和高度: ";
    std::cin >> radius >> height;
    Cone cone(radius, height);
    cone.Display();
    return 0;
}