#pragma once
#include "human.h"

using namespace std;

class teacher : public human {
public:

    teacher(string last_name, string name, string second_name, unsigned int work_time)
        : human(last_name, name, second_name), work_time(work_time) {}

    string get_full_name() override {
        return "Teacher: " + human::get_full_name();
    }

    unsigned int get_work_time() override {
        return work_time;
    }

private:
    unsigned int work_time;
};