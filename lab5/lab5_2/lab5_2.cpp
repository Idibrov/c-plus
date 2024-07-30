﻿#include <iostream>
using namespace std;

int* max_vect(int size, int* a, int* b) {
    int* c = new int[size];
    for (int i = 0; i < size; ++i) {
        if (a[i] > b[i]) {
            c[i] = a[i];
        }
        else {
            c[i] = b[i];
        }
    }
    return c;
}

int main() {
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 2 };
    int b[] = { 7, 6, 5, 4, 3, 2, 1, 3 };
    int kc = sizeof(a) / sizeof(a[0]);
    int* c = max_vect(kc, a, b);

    for (int i = 0; i < kc; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    delete[] c;
}
