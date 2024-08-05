#include <iostream>
#include <stdexcept>
#include "average.h"
using namespace std;

int main() {
    try {
        int int_array[] = { 1, 2, 3, 4, 5 };
        long long_array[] = { 100000L, 200000L, 300000L, 400000L, 500000L };
        double double_array[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
        char char_array[] = { 65, 66, 67, 68, 69 };

        int int_size = sizeof(int_array) / sizeof(int_array[0]);
        int long_size = sizeof(long_array) / sizeof(long_array[0]);
        int double_size = sizeof(double_array) / sizeof(double_array[0]);
        int char_size = sizeof(char_array) / sizeof(char_array[0]);

        cout << "Среднее значение массива int: " << calculate_average(int_array, int_size) << endl;
        cout << "Среднее значение массива long: " << calculate_average(long_array, long_size) << endl;
        cout << "Среднее значение массива double: " << calculate_average(double_array, double_size) << endl;
        cout << "Среднее значение массива char: " << calculate_average(char_array, char_size) << endl;
    }
    catch (const invalid_argument& e) {
        cerr << "Ошибка: " << e.what() << endl;
    }

    return 0;
}
