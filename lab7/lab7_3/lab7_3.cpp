#include <iostream>
#include <tuple>
#include <cmath>

using namespace std;

tuple<double, double, bool> solveQuadratic(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    double root1 = 0;
    double root2 = 0;
    bool hasRealRoots = false;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        hasRealRoots = true;
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        hasRealRoots = true;
    }

    return make_tuple(root1, root2, hasRealRoots);
}

int main() {
    system("chcp 1251");

    double a, b, c;

    cout << "Введите коэффициенты квадратного уравнения (ax^2 + bx + c = 0)" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    tuple<double, double, bool> result = solveQuadratic(a, b, c);
    double root1 = get<0>(result);
    double root2 = get<1>(result);
    bool hasRealRoots = get<2>(result);

    if (hasRealRoots) {
        cout << "Корни уравнения:" << endl;
        if (root1 == root2) {
            cout << "Единственный корень: x = " << root1 << endl;
        }
        else {
            cout << "Корень 1: x1 = " << root1 << endl;
            cout << "Корень 2: x2 = " << root2 << endl;
        }
    }
    else {
        cout << "Нет действительных корней" << endl;
    }

    return 0;
}
