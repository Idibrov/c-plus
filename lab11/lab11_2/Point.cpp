#include "Point.h"
#include <cmath>

Point::Point(double x, double y) : x(x), y(y) {}

double Point::distanceToOrigin() const {
    return std::sqrt(x * x + y * y);
}

bool Point::operator<(const Point& other) const {
    return this->distanceToOrigin() < other.distanceToOrigin();
}

std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "Point(" << point.x << ", " << point.y << ")";
    return os;
}
