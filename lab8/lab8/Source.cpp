#include "Time.h"
#include <iostream>
#include <iomanip>

Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
    normalize();
}

void Time::normalize() {
    if (seconds >= 60) {
        minutes += seconds / 60;
        seconds = seconds % 60;
    }
    if (minutes >= 60) {
        hours += minutes / 60;
        minutes = minutes % 60;
    }
    if (hours >= 24) {
        hours = hours % 24;
    }
}

void Time::display() const {
    std::cout << std::setfill('0') << std::setw(2) << hours << ":"
        << std::setfill('0') << std::setw(2) << minutes << ":"
        << std::setfill('0') << std::setw(2) << seconds << std::endl;
}

Time Time::plus(const Time& other) const {
    int total_seconds = (hours * 3600 + minutes * 60 + seconds) +
        (other.hours * 3600 + other.minutes * 60 + other.seconds);

    int new_hours = (total_seconds / 3600) % 24;
    int new_minutes = (total_seconds % 3600) / 60;
    int new_seconds = total_seconds % 60;

    return Time(new_hours, new_minutes, new_seconds);
}
