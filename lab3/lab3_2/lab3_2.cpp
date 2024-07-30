#include <iostream>
#include <cmath>

using namespace std;

double cubPow(double a) {
    return pow(a, 1.0 / 3.0);
}

double cubIter(double a) {
    double xStart = a;
    double eps = 1e-3;
    double xNext;
    while (true) {
        xNext = (1.0 / 3.0) * ((a / (xStart * xStart)) + 2 * xStart);
        if (abs(xNext - xStart) < eps) {
            break;
        }
        xStart = xNext;
    }
    return xNext;
}

int main() {
    system("chcp 1251");
    double a;
    cout << "Введите число: ";
    cin >> a;
    double num1 = cubPow(a);
    cout << "Стандартная функция: " << num1 << endl;
    double num2 = cubIter(a);
    cout << "Итерационный метод: " << num2 << endl;
}
