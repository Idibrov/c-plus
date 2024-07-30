#include <iostream>
#include <fstream>
#include <algorithm> 
#include <string>    
using namespace std;

int* max_vect(int size, int* a, int* b) {
    int* c = new int[size];
    for (int i = 0; i < size; ++i) {
        c[i] = (a[i] > b[i]) ? a[i] : b[i];
    }
    return c;
}

void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void arrayToFile(ofstream& file, const string& name, int* arr, int size) {
    file << name << ": ";
    for (int i = 0; i < size; ++i) {
        file << arr[i] << " ";
    }
    file << endl;
}

int main() {
    system("chcp 65001");

    int a[] = { 1, 2, 3, 4, 5, 6, 7, 2 };
    int b[] = { 7, 6, 5, 4, 3, 2, 1, 3 };
    int size = sizeof(a) / sizeof(a[0]);

    int* maxArray = max_vect(size, a, b);

    ofstream file("arrays.txt");
    if (!file) {
        cerr << "Ошибка открытия файла" << endl;
        delete[] maxArray;
        return 1;
    }

    cout << "Запись исходного массива в файл..." << endl;
    arrayToFile(file, "Исходный массив", maxArray, size);

    int* sortedArray = new int[size];
    copy(maxArray, maxArray + size, sortedArray);
    sortArray(sortedArray, size);

    cout << "Запись отсортированного массива в файл..." << endl;
    arrayToFile(file, "Отсортированный массив", sortedArray, size);

    delete[] sortedArray;
    delete[] maxArray;

    file.close();

    cout << "Файл arrays.txt создан и заполнен успешно." << endl;

    ifstream fileCheck("arrays.txt");
    if (fileCheck) {
        cout << "Содержимое файла arrays.txt:\n";
        string line;
        while (getline(fileCheck, line)) {
            cout << line << endl;
        }
        fileCheck.close();
    }
    else {
        cerr << "Ошибка открытия файла для проверки" << endl;
    }

    return 0;
}
