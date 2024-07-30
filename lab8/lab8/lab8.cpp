#include "Time.h"
#include <iostream>

int main() {
    Time t1(10, 45, 30);
    Time t2(5, 30, 45);  

    Time t3;

    t3 = t1.plus(t2);

    std::cout << "Результат сложения: ";
    t3.display();

    return 0;
}
