#include <iostream>
using namespace std;

bool isValid(long long snils) {
    int controlNum = snils % 100;
    long long num = snils / 100;
    if (snils < 10000000000 || snils > 99999999999) {
        return false;
    }
    int sum = 0;
    int position = 9;

    while (num > 0) {
        int dig = num % 10;
        sum += dig * position;
        num /= 10;
        position--;
    }

    int calcContrNum;
    if (sum < 100) {
        calcContrNum = sum;
    }
    else if (sum == 100 || sum == 101) {
        calcContrNum = 0;
    }
    else {
        calcContrNum = sum % 101;
        if (calcContrNum == 100 || calcContrNum == 101) {
            calcContrNum = 0;
        }
    }

    return controlNum == calcContrNum;
}

int main() {
    system("chcp 1251");
    long long snils;
    cout << "Введите СНИЛС: ";
    cin >> snils;
    if (isValid(snils)) {
        cout << "СНИЛС корректен." << endl;
    }
    else {
        cout << "СНИЛС некорректен." << endl;
    }
}
