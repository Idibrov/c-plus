#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <string>

class InvalidTriangle {
public:
    InvalidTriangle(const std::string& msg) : message(msg) {}
    void printMessage() const;
private:
    std::string message;
};

class Triangle {
public:
    Triangle(double side1, double side2, double side3);
    double area() const;
    void print() const;

private:
    double a, b, c;
    bool isValid(double side1, double side2, double side3) const;
    void validate() const;
};

#endif
