#include "Time.h"
#include <cmath>
#include <cstdio>

Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
    normalTime();
}

void Time::normalTime() {
    if (seconds < 0) {
        minutes += seconds / 60 - 1;
        seconds = 60 - abs(seconds) % 60;
    }
    if (seconds >= 60) {
        minutes += seconds / 60;
        seconds %= 60;
    }
    if (minutes < 0) {
        hours += minutes / 60 - 1;
        minutes = 60 - abs(minutes) % 60;
    }
    if (minutes >= 60) {
        hours += minutes / 60;
        minutes %= 60;
    }
    if (hours < 0) {
        hours = 24 - abs(hours) % 24;
    }
    if (hours >= 24) {
        hours %= 24;
    }
}

void Time::display() const {
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);
}

Time Time::operator+(const Time& t2) const {
    Time result(hours + t2.hours, minutes + t2.minutes, seconds + t2.seconds);
    result.normalTime();
    return result;
}

Time Time::operator-(const Time& t2) const {
    Time result(hours - t2.hours, minutes - t2.minutes, seconds - t2.seconds);
    result.normalTime();
    return result;
}

Time Time::operator+(double sec) const {
    Time result(hours, minutes, seconds + static_cast<int>(sec));
    result.normalTime();
    return result;
}

Time operator+(double sec, const Time& t) {
    return t + sec;
}

bool Time::operator<(const Time& other) const {
    if (hours < other.hours) return true;
    if (hours > other.hours) return false;
    if (minutes < other.minutes) return true;
    if (minutes > other.minutes) return false;
    return seconds < other.seconds;
}

bool Time::operator==(const Time& other) const {
    return hours == other.hours && minutes == other.minutes && seconds == other.seconds;
}
