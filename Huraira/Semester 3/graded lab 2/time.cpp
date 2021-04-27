#include "time.h"
time::time(int hr, int min, int sec) : hour(hr >= 1 && hr <= 24 ? hr : hr - 24),
                                       minute(
                                           min >= 1 && min <= 60 ? min : min - 60

                                           ),
                                       second(sec >= 1 && sec <= 60 ? sec : sec - 60)
{
}
time::time(const time &obj) : hour(obj.hour), minute(obj.minute), second(obj.second)
{
}
int time::getHour()
{
    return this->hour;
}

int time::getMinute()
{
    return this->minute;
}

int time::getSecond()
{
    return this->second;
}
void time::display(const time &obj)
{
    cout << "\nTime: " << getHour() << " : " << getMinute() << " : " << getSecond() << endl;
}
time time::addTime(const time &obj1, const time &obj2)
{
    int hour = obj1.hour + obj2.hour;
    int sec = obj1.second + obj2.second;
    int min = obj1.minute + obj2.minute;
    if (hour > 24)
    {
        hour = hour - 24;
    }
    else if (min > 60)
    {
        min = min - 60;
    }
    else if (sec > 60)
    {
        sec = sec - 60;
    }

    cout << "\nTime: " << hour << " : " << min << " : " << sec << endl;
}

time time::subtractTime(const time &obj1, const time &obj2)
{
    int hour = obj1.hour - obj2.hour;
    int sec = obj1.second - obj2.second;
    int min = obj1.minute - obj2.minute;
    if (hour < 1)
    {
        hour = hour + 24;
    }
    else if (min < 1)
    {
        min = min + 60;
    }
    else if (sec < 60)
    {
        sec = sec + 60;
    }

    cout << "\nTime: " << obj1.hour - obj2.hour << " : " << obj1.minute - obj2.minute << " : " << obj1.second - obj2.second << endl;
}
