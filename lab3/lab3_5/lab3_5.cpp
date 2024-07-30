#include <iostream>
#include <string>
using namespace std;

string fromDecToBin(int num) {
    if (num == 0)
        return "";
    string binary = fromDecToBin(num / 2);
    return binary + to_string(num % 2);
}

int main() {
    system("chcp 1251");
    int num;
    cout << "Введите число: ";
    cin >> num;
    if (num == 0) {
        cout << "Двоичный результат 0" << endl;
    }
    else {
        cout << "Двоичный результат " << fromDecToBin(num) << endl;
    }
}
