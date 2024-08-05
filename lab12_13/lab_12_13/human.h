#pragma once
#include <string>
#include <sstream>
using namespace std;

class human {
public:
    human(string last_name, string name, string second_name) {
        this->last_name = last_name;
        this->name = name;
        this->second_name = second_name;
    }
    virtual string get_full_name() {
        ostringstream full_name;
        full_name << this->last_name << " " << this->name << " " << this->second_name;
        return full_name.str();
    }
    virtual ~human() {}

    virtual double get_average_score() {
        return -1;
    }

    virtual unsigned int get_work_time() {
        return 0;
    }

private:
    string name;
    string last_name;
    string second_name;
};