#include "Triangle.h"
#include <iostream>
#include <cmath>
#include <stdexcept>

void InvalidTriangle::printMessage() const {
    std::cerr << "Ошибка: " << message << std::endl;
}

Triangle::Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {
    validate();
}

bool Triangle::isValid(double side1, double side2, double side3) const {
    return (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1);
}

void Triangle::validate() const {
    if (!isValid(a, b, c)) {
        throw InvalidTriangle("Одна из сторон длиннее суммы двух других сторон");
    }
}

double Triangle::area() const {
    double s = (a + b + c) / 2.0;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

void Triangle::print() const {
    std::cout << "Стороны треугольника: " << a << ", " << b << ", " << c << std::endl;
    std::cout << "Область: " << area() << std::endl;
}
