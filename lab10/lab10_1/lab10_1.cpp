#include "dot.h"
#include "triangle.h"
#include <iostream>

int main() {
    Triangle t1(0, 0, 3, 0, 3, 4);
    std::cout << "Triangle 1 (Composition):" << std::endl;
    t1.printSides();
    std::cout << "Perimeter: " << t1.perimeter() << std::endl;
    std::cout << "Area: " << t1.area() << std::endl;

    Dot d1(0, 0);
    Dot d2(3, 0);
    Dot d3(3, 4);
    Triangle t2(d1, d2, d3);
    std::cout << "Triangle 2 (Aggregation):" << std::endl;
    t2.printSides();
    std::cout << "Perimeter: " << t2.perimeter() << std::endl;
    std::cout << "Area: " << t2.area() << std::endl;

    return 0;
}
