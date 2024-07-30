#include "Time.h"
#include <iostream>

int main() {
    try {
        Time t1(10, 45, 50);
        Time t2(5, 30, 20);
        Time t3;

        t1.display();
        t2.display();

        t3 = t1.add(t2);
        t3.display();
    }
    catch (const InvalidTime& e) {
        e.printMessage();
        return 1;
    }

    return 0;
}
