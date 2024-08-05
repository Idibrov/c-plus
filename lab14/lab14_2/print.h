#pragma once
#include <iostream>
#include <iterator>
#include <string>

template <typename Container>
void Print(const Container& container, const std::string& separator) {
    bool first = true;

    for (const auto& item : container) {
        if (!first) {
            std::cout << separator;
        }
        std::cout << item;
        first = false;
    }

    std::cout << '\n';
}
