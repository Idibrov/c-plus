#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "dot.h"

class Triangle {
private:
    Dot a, b, c;
public:
    Triangle(double x1, double y1, double x2, double y2, double x3, double y3);

    Triangle(const Dot& a, const Dot& b, const Dot& c);

    double sideLength(const Dot& p1, const Dot& p2) const;
    void printSides() const;
    double perimeter() const;
    double area() const;
};

#endif 
