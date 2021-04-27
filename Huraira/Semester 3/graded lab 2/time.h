#include <iostream>
#pragma once
using namespace std;

class time
{
private:
    const int hour;
    const int minute;
    const int second;

public:
    time(int hr = 1, int min = 1, int sec = 1);
    time(const time &obj);
    int getHour();

    int getMinute();

    int getSecond();

    void display(const time &obj);

    time addTime(const time &obj1, const time &obj2);

    time subtractTime(const time &obj1, const time &obj2);
};
