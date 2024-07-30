#include <iostream>

using namespace std;

bool input(int& a, int& b) {
    if (!(cin >> a >> b)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
    return true;
}

int main() {
    system("chcp 1251");
    int a, b;
    cout << "Введите два целых числа: ";
    if (!input(a, b)) {
        cerr << "Некорректные данные" << endl;
        return 1;
    }
    int s = a + b;
    cout << "Сумма: " << s << endl;
    return 0;
}
