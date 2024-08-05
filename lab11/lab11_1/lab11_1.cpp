#include "Time.h"
#include <iostream>

using namespace std;

int main() {
    system("chcp 1251");

    Time t1(10, 20, 30);
    Time t2(2, 40, 50);

    Time sum = t1 + t2;
    Time diff = t1 - t2;
    Time addSec = t1 + 90;
    Time addSeconds = 85 + t1;

    cout << "Время 1: ";
    t1.display();

    cout << "Время 2: ";
    t2.display();

    cout << "Сумма: ";
    sum.display();

    cout << "Разность: ";
    diff.display();

    cout << "Добавлено 90 секунд: ";
    addSec.display();

    cout << "Добавлено 85 секунд (дружественная функция): ";
    addSeconds.display();

    if (t1 < t2) {
        cout << "Время 1 меньше Время 2\n";
    }
    else if (t1 == t2) {
        cout << "Время 1 равно Время 2\n";
    }
    else {
        cout << "Время 1 больше Время 2\n";
    }

    return 0;
}
