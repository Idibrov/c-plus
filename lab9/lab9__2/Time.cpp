#include "Time.h"
#include <stdexcept>
#include <iomanip> 
#include <sstream>

void InvalidTime::printMessage() const {
    std::cerr << "Error: " << message << std::endl;
}

Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
    normalize();
    validate();
}

void Time::setHours(int h) {
    hours = h;
    normalize();
    validate();
}

void Time::setMinutes(int m) {
    minutes = m;
    normalize();
    validate();
}

void Time::setSeconds(int s) {
    seconds = s;
    normalize();
    validate();
}

int Time::getHours() const {
    return hours;
}

int Time::getMinutes() const {
    return minutes;
}

int Time::getSeconds() const {
    return seconds;
}

void Time::display() const {
    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << hours << ":"
        << std::setw(2) << std::setfill('0') << minutes << ":"
        << std::setw(2) << std::setfill('0') << seconds;
    std::cout << oss.str() << std::endl;
}

Time Time::add(const Time& t2) const {
    Time result;
    result.seconds = seconds + t2.seconds;
    result.minutes = minutes + t2.minutes + result.seconds / 60;
    result.hours = hours + t2.hours + result.minutes / 60;
    result.normalize();
    return result;
}

void Time::validate() const {
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59 || seconds < 0 || seconds > 59) {
        throw InvalidTime("Недопустимое значение времени");
    }
}

void Time::normalize() {
    if (seconds >= 60) {
        minutes += seconds / 60;
        seconds %= 60;
    }
    if (minutes >= 60) {
        hours += minutes / 60;
        minutes %= 60;
    }
    if (hours >= 24) {
        hours %= 24;
    }
}
