#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <stdexcept> 
#include <cmath>     

class Triangle {
public:
    class InvalidTriangle : public std::invalid_argument {
    public:
        InvalidTriangle() : std::invalid_argument("Некорректные стороны треугольника") {}
    };

    Triangle(double side1, double side2, double side3);
    double area() const;

private:
    double a, b, c;

    bool is_valid(double a, double b, double c) const;
};

#endif 
