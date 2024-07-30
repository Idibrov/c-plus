#ifndef TIME_H
#define TIME_H

class Time {
public:
    Time();

    Time(int h, int m, int s);

    void display() const;

    Time plus(const Time& other) const;

private:
    int hours;
    int minutes;
    int seconds;

    void normalize();
};

#endif 
