#include <iostream>
#include <cmath>
using namespace std;

double calcArea(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, double x5, double y5) {
    double area = 0.0;
    area += x1 * y2 - y1 * x2;
    area += x2 * y3 - y2 * x3;
    area += x3 * y4 - y3 * x4;
    area += x4 * y5 - y4 * x5;
    area += x5 * y1 - y5 * x1;
    return fabs(area) / 2.0;
}

int main() {
    system("chcp 1251");
    double x1, y1;
    double x2, y2;
    double x3, y3;
    double x4, y4;
    double x5, y5;
    cout << "Введите координаты вершин" << endl;
    cout << "Вершина 1: ";
    cin >> x1 >> y1;
    cout << "Вершина 2: ";
    cin >> x2 >> y2;
    cout << "Вершина 3: ";
    cin >> x3 >> y3;
    cout << "Вершина 4: ";
    cin >> x4 >> y4;
    cout << "Вершина 5: ";
    cin >> x5 >> y5;
    double area = calcArea(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5);
    cout << "Площадь: " << area << endl;
}
