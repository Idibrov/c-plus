#ifndef TIME_H
#define TIME_H

#include <string>
#include <iostream>

class InvalidTime {
public:
    InvalidTime(const std::string& msg) : message(msg) {}
    void printMessage() const;
private:
    std::string message;
};

class Time {
public:
    Time(); 
    Time(int h, int m, int s);  
    void setHours(int h);
    void setMinutes(int m);
    void setSeconds(int s);
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;
    void display() const;
    Time add(const Time& t2) const;

private:
    int hours;
    int minutes;
    int seconds;
    void validate() const;
    void normalize();
};

#endif 
