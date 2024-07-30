#include <iostream>

using namespace std;

int sumLine(int n) {
    if (n == 1) {
        return 5;
    }
    return sumLine(n - 1) + 5 * n;
}

int main() {
    system("chcp 1251");
    int n;
    cout << "Введите значение n: ";
    cin >> n;
    if (n > 0) {
        int result = sumLine(n);
        cout << "Сумма ряда n = " << n << " равна " << result << endl;
    }
    else {
        cout << "Некорректное значение n" << endl;
    }
}
