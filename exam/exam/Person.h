#pragma once
#include <string>

class Person {
public:
    Person(const std::string& name, const std::string& phone)
        : name(name), phone(phone) {}

    virtual ~Person() = default;

    virtual void print() const = 0;

    std::string getName() const { return name; }
    std::string getPhone() const { return phone; }

protected:
    std::string name;
    std::string phone;
};
