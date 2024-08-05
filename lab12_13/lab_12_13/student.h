#pragma once
#include "human.h"
#include <vector>
using namespace std;

class student : public human {
public:
    student(string last_name, string name, string second_name, vector<int> scores)
        : human(last_name, name, second_name), scores(scores) {}
    double get_average_score() override {
        int sum = 0;
        for (int score : scores) {
            sum += score;
        }
        return static_cast<double>(sum) / scores.size();
    }
    string get_full_name() override {
        ostringstream full_name;
        full_name << human::get_full_name() << " (student)";
        return full_name.str();
    }

private:
    vector<int> scores;
};