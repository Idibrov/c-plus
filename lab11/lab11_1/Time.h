#pragma once
#include <iostream>

class Time {
public:
    Time();
    Time(int hours, int minutes, int seconds);

    Time operator+(const Time& t2) const;
    Time operator-(const Time& t2) const;
    Time operator+(double seconds) const;
    friend Time operator+(double seconds, const Time& t);
    bool operator<(const Time& other) const;
    bool operator==(const Time& other) const;

    void display() const;

private:
    int hours;
    int minutes;
    int seconds;
    void normalTime();
};
