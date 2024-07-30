#include "Triangle.h"
#include <iostream>

int main() {
    double side1, side2, side3;

    std::cout << "Введите три стороны треугольника: ";
    std::cin >> side1 >> side2 >> side3;

    try {
        Triangle triangle(side1, side2, side3);
        triangle.print();
    }
    catch (const InvalidTriangle& error) {
        error.printMessage();
        return 1;
    }

    return 0;
}
