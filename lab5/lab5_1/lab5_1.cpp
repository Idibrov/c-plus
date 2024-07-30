#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fillArr(vector<int>& arr, int size) {
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < size; i++) {
        int value;
        cout << "mas[" << i << "] = ";
        cin >> value;
        arr.push_back(value);
    }
}

int sumArr(const vector<int>& arr) {
    int sum = 0;
    for (int value : arr) {
        sum += value;
    }
    return sum;
}

double averageArr(const vector<int>& arr) {
    int sum = sumArr(arr);
    return (sum * 1.0) / arr.size();
}

int sumNeg(const vector<int>& arr) {
    int sum = 0;
    for (int value : arr) {
        if (value < 0) sum += value;
    }
    return sum;
}

int sumPos(const vector<int>& arr) {
    int sum = 0;
    for (int value : arr) {
        if (value > 0) sum += value;
    }
    return sum;
}

int sumOdd(const vector<int>& arr) {
    int sum = 0;
    for (size_t i = 1; i < arr.size(); i += 2) {
        sum += arr[i];
    }
    return sum;
}

int sumEven(const vector<int>& arr) {
    int sum = 0;
    for (size_t i = 0; i < arr.size(); i += 2) {
        sum += arr[i];
    }
    return sum;
}

void findMax(const vector<int>& arr, int& maxElement, int& maxIndex) {
    maxElement = arr[0];
    maxIndex = 0;
    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }
}

void findMin(const vector<int>& arr, int& minElement, int& minIndex) {
    minElement = arr[0];
    minIndex = 0;
    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
            minIndex = i;
        }
    }
}

int betweenMaxMin(const vector<int>& arr, int maxIndex, int minIndex) {
    if (maxIndex == minIndex) return 0;
    int start = min(maxIndex, minIndex);
    int end = max(maxIndex, minIndex);
    int res = 1;

    for (int i = start + 1; i < end; i++) {
        res *= arr[i];
    }
    return res;
}

void sortArr(vector<int>& arr) {
    sort(arr.begin(), arr.end());
}

int main() {
    system("chcp 1251");
    int size;
    cout << "Введите количество элементов: ";
    cin >> size;

    if (size <= 0) {
        cerr << "Некорректное количество элементов" << endl;
        return 1;
    }

    vector<int> arr;
    fillArr(arr, size);

    cout << "Сумма элементов: " << sumArr(arr) << endl;
    cout << "Среднее значение: " << averageArr(arr) << endl;
    cout << "Сумма отрицательных: " << sumNeg(arr) << endl;
    cout << "Сумма положительных: " << sumPos(arr) << endl;
    cout << "Сумма элементов с нечётными индексами: " << sumOdd(arr) << endl;
    cout << "Сумма элементов с чётными индексами: " << sumEven(arr) << endl;

    int maxElement, maxIndex, minElement, minIndex;
    findMax(arr, maxElement, maxIndex);
    findMin(arr, minElement, minIndex);

    cout << "Максимальный элемент: " << maxElement << " с индексом " << maxIndex << endl;
    cout << "Минимальный элемент: " << minElement << " с индексом " << minIndex << endl;

    if (maxIndex != minIndex) {
        cout << "Произведение между максимальным и минимальным: " << betweenMaxMin(arr, maxIndex, minIndex) << endl;
    }

    sortArr(arr);
    cout << "Отсортированный массив: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
