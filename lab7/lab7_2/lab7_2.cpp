#include <iostream>
#include <cmath>
using namespace std;

struct Root {
    double root1;
    double root2;
    bool realRoots;
};

Root solveQuadratic(double a, double b, double c) {
    Root result;
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        result.root1 = (-b + sqrt(discriminant)) / (2 * a);
        result.root2 = (-b - sqrt(discriminant)) / (2 * a);
        result.realRoots = true;
    }
    else if (discriminant == 0) {
        result.root1 = result.root2 = -b / (2 * a);
        result.realRoots = true;
    }
    else {
        result.realRoots = false;
    }

    return result;
}

int main() {
    system("chcp 1251");

    double a, b, c;
    cout << "Введите коэффициенты для квадратного уравнения ax^2 + bx + c = 0" << endl;

    cout << "a: ";
    while (!(cin >> a) || a == 0) {
        cout << "Ошибка ввода. Коэффициент 'a' не может быть нулем. Попробуйте снова: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "b: ";
    while (!(cin >> b)) {
        cout << "Ошибка ввода. Попробуйте снова: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "c: ";
    while (!(cin >> c)) {
        cout << "Ошибка ввода. Попробуйте снова: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    Root roots = solveQuadratic(a, b, c);

    if (roots.realRoots) {
        cout << "Корни уравнения: ";
        if (roots.root1 == roots.root2) {
            cout << "x1 = x2 = " << roots.root1 << endl;
        }
        else {
            cout << "x1 = " << roots.root1 << ", x2 = " << roots.root2 << endl;
        }
    }
    else {
        cout << "Нет действительных корней" << endl;
    }

    return 0;
}
