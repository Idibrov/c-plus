#include <iostream>

using namespace std;

bool isSimp(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool isSupSimp(int n) {
    while (n > 0) {
        if (!isSimp(n)) return false;
        n /= 10;
    }
    return true;
}

int main() {
    system("chcp 1251");
    int num;
    cout << "Введите число: ";
    cin >> num;
    if (isSupSimp(num)) {
        cout << num << " суперпростое\n";
    }
    else {
        cout << num << " несуперпростое\n";
    }
}