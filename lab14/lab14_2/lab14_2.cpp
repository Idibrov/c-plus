#include <iostream>
#include <vector>
#include <string>
#include "print.h"

int main() {
    std::vector<int> data = { 1, 2, 3 };
    Print(data, ", "); 

    std::vector<std::string> names = { "Alice", "Bob", "Charlie" };
    Print(names, " | ");

    return 0;
}
