#include <iostream>
#include <cmath>
using namespace std;

int root(double a, double b, double c, double& x1, double& x2) {
    double D = b * b - 4 * a * c;
    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        return 1;
    }
    else if (D == 0) {
        x1 = x2 = -b / (2 * a);
        return 0;
    }
    else {
        return -1;
    }
}

int main() {
    system("chcp 1251");

    double a, b, c;
    double x1, x2;
    cout << "Введите a, b, c: ";
    cin >> a >> b >> c;
    int result = root(a, b, c, x1, x2);
    if (result == 1) {
        cout << "Корни уравнения: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (result == 0) {
        cout << "Корень уравнения один: x1 = x2 = " << x1 << endl;
    }
    else {
        cout << "Корней уравнения нет" << endl;
    }

    return 0;
}
