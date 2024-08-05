#pragma once
#include "Person.h"

class Colleague : public Person {
public:
    Colleague(const std::string& name, const std::string& phone, const std::string& position)
        : Person(name, phone), position(position) {}

    void print() const override {
        std::cout << "Colleague: " << name << ", Phone: " << phone << ", Position: " << position << std::endl;
    }

    std::string getPosition() const { return position; }

private:
    std::string position;
};
