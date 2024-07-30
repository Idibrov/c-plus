#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;

    void input() {
        cout << "Введите часы: ";
        cin >> hours;
        cout << "Введите минуты: ";
        cin >> minutes;
        cout << "Введите секунды: ";
        cin >> seconds;

        normalTime();
    }

    void displaySeconds() const {
        cout << "Время в секундах: " << (hours * 3600 + minutes * 60 + seconds) << " секунд" << endl;
    }

    void normalTime() {
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }
    }

    Time plus(const Time& t2) const {
        Time result;
        result.hours = hours + t2.hours;
        result.minutes = minutes + t2.minutes;
        result.seconds = seconds + t2.seconds;
        result.normalTime();
        return result;
    }

    Time subtract(const Time& t2) const {
        Time result;
        result.seconds = seconds - t2.seconds;
        result.minutes = minutes - t2.minutes;
        result.hours = hours - t2.hours;

        if (result.seconds < 0) {
            result.seconds += 60;
            result.minutes--;
        }
        if (result.minutes < 0) {
            result.minutes += 60;
            result.hours--;
        }

        return result;
    }
};

int main() {
    system("chcp 1251");
    Time time1, time2, result;

    cout << "Введите первое время:" << endl;
    time1.input();

    cout << "Введите второе время:" << endl;
    time2.input();

    cout << "Первое время: ";
    time1.displaySeconds();

    cout << "Второе время: ";
    time2.displaySeconds();

    result = time1.plus(time2);
    cout << "Результат сложения: ";
    result.displaySeconds();

    result = time1.subtract(time2);
    cout << "Результат вычитания: ";
    result.displaySeconds();

    return 0;
}
