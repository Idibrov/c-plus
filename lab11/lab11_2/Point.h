#pragma once
#include <iostream>

class Point {
public:
    Point(double x = 0, double y = 0);

    double distanceToOrigin() const;

    bool operator<(const Point& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Point& point);

private:
    double x;
    double y;
};
