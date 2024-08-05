#include "triangle.h"
#include <iostream>

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
    : a(x1, y1), b(x2, y2), c(x3, y3) {}

Triangle::Triangle(const Dot& a, const Dot& b, const Dot& c) : a(a), b(b), c(c) {}

double Triangle::sideLength(const Dot& p1, const Dot& p2) const {
    return p1.distanceTo(p2);
}

void Triangle::printSides() const {
    std::cout << "Side lengths: "
        << sideLength(a, b) << ", "
        << sideLength(b, c) << ", "
        << sideLength(c, a) << std::endl;
}

double Triangle::perimeter() const {
    return sideLength(a, b) + sideLength(b, c) + sideLength(c, a);
}

double Triangle::area() const {
    double s = perimeter() / 2;
    double ab = sideLength(a, b);
    double bc = sideLength(b, c);
    double ca = sideLength(c, a);
    return sqrt(s * (s - ab) * (s - bc) * (s - ca));
}
