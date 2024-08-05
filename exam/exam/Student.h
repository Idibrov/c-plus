#pragma once
#include "Person.h"

class Student : public Person {
public:
    Student(const std::string& name, const std::string& phone, const std::string& major)
        : Person(name, phone), major(major) {}

    void print() const override {
        std::cout << "Student: " << name << ", Phone: " << phone << ", Major: " << major << std::endl;
    }

    std::string getMajor() const { return major; }

private:
    std::string major;
};
