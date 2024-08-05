#pragma once

template <typename T>
double calculate_average(T* array, int size) {
    if (size == 0) {
        throw std::invalid_argument("–азмер массива должен быть больше нул€.");
    }

    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return static_cast<double>(sum) / size;
}
