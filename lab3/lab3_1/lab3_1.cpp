#include <iostream>
#include <string>
using namespace std;

bool isValid(string snils) {
    string cleanSnils;
    for (char a : snils) {
        if (a == ' ' || a == '-') {
            continue;
        }
        if (!isdigit(a)) {
            return false;
        }
        cleanSnils += a;
    }
    if (cleanSnils.length() != 11) {
        return false;
    }

    int controlNum = stoi(cleanSnils.substr(9, 2));
    int sum = 0;
    int position = 9;

    for (char a : cleanSnils.substr(0, 9)) {
        int dig = a - '0';
        sum += dig * position;
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
    string snils;
    cout << "Введите СНИЛС: ";
    getline(cin, snils);

    if (isValid(snils)) {
        cout << "СНИЛС корректен." << endl;
    }
    else {
        cout << "СНИЛС некорректен." << endl;
    }
}
