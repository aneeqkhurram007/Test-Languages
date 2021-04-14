#include "Date.h"
Date::Date(int day, int month, int year)
{
    setDay(day);
    setMonth(month);
    setYear(year);
}

Date::~Date()
{
}

int Date::getDay()
{
    return this->day;
}
void Date::setDay(int day)
{
    if (day >= 1 && day <= 31)
    {
        this->day = day;
    }
}

int Date::getMonth()
{
    return this->month;
}
void Date::setMonth(int month)
{
    if (month >= 1 && month <= 12)
    {
        this->month = month;
    }
}

int Date::getYear()
{
    return this->year;
}
void Date::setYear(int year)
{
    if (year >= 1)
    {
        this->year = year;
    }
}
void Date::display()
{
    cout << "Date: " << getDay() << "-" << getMonth() << "-" << getYear() << endl;
}