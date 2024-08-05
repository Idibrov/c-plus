#pragma once
#include <vector>
#include <memory>
#include <fstream>
#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Colleague.h"

class AddressBook {
public:
    void addPerson(std::shared_ptr<Person> person) {
        people.push_back(person);
    }

    void saveToFile(const std::string& filename) const {
        std::ofstream file(filename);
        for (const auto& person : people) {
            if (auto student = dynamic_cast<Student*>(person.get())) {
                file << "Student," << student->getName() << "," << student->getPhone() << "," << student->getMajor() << "\n";
            }
            else if (auto teacher = dynamic_cast<Teacher*>(person.get())) {
                file << "Teacher," << teacher->getName() << "," << teacher->getPhone() << "," << teacher->getDepartment() << "\n";
            }
            else if (auto colleague = dynamic_cast<Colleague*>(person.get())) {
                file << "Colleague," << colleague->getName() << "," << colleague->getPhone() << "," << colleague->getPosition() << "\n";
            }
        }
    }

    void loadFromFile(const std::string& filename) {
        std::ifstream file(filename);
        std::string type, name, phone, extra;
        while (getline(file, type, ',')) {
            getline(file, name, ',');
            getline(file, phone, ',');
            getline(file, extra);
            if (type == "Student") {
                addPerson(std::make_shared<Student>(name, phone, extra));
            }
            else if (type == "Teacher") {
                addPerson(std::make_shared<Teacher>(name, phone, extra));
            }
            else if (type == "Colleague") {
                addPerson(std::make_shared<Colleague>(name, phone, extra));
            }
        }
    }

    void printAll() const {
        for (const auto& person : people) {
            person->print();
        }
    }

private:
    std::vector<std::shared_ptr<Person>> people;
};
