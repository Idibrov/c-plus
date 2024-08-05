#pragma once
#include "Person.h"

class Teacher : public Person {
public:
    Teacher(const std::string& name, const std::string& phone, const std::string& department)
        : Person(name, phone), department(department) {}

    void print() const override {
        std::cout << "Teacher: " << name << ", Phone: " << phone << ", Department: " << department << std::endl;
    }

    std::string getDepartment() const { return department; }

private:
    std::string department;
};
