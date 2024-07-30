#include <iostream>
#include <cmath>
using namespace std;

string shootLevel(int points) {
    if (points >= 50) {
        return "Снайпер";
    }
    else if (points >= 30) {
        return "Опытный стрелок";
    }
    else if (points >= 10) {
        return "Новичок";
    }
    else {
        return "Начинающий";
    }
}

int main() {
    system("chcp 1251");
    const int score = 50;
    int totalPoints = 0;
    int shots = 0;

    while (totalPoints < score) {
        int x, y;
        cout << "Введите координаты x y: ";
        cin >> x >> y;
        double dist = sqrt(x * x + y * y);
        if (dist <= 1) {
            totalPoints += 10;
        }
        else if (dist <= 2) {
            totalPoints += 5;
        }
        shots++;
    }

    cout << "Набрано " << totalPoints << " очков за " << shots << " выстрелов" << endl;
    string level = shootLevel(totalPoints);
    cout << "Уровень: " << level << endl;
}
