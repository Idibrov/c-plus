#include "Triangle.h"

Triangle::Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {
    if (!is_valid(a, b, c)) {
        throw InvalidTriangle();
    }
}

bool Triangle::is_valid(double a, double b, double c) const {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

double Triangle::area() const {
    double s = (a + b + c) / 2; 
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}
