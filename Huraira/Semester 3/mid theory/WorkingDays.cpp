#include "WorkingDays.h"
WorkingDays ::WorkingDays()
{
}
WorkingDays ::WorkingDays(int hours)
{
    if (hours < 0)
    {
        cout << "Number of hours cannot be less than 0. Try Again" << endl;
    }
    else if (hours >= 24)
    {
        hours = hours - 24;
        this->workingHours = hours;
    }
    else
    {
        this->workingHours = hours;
    }
}
WorkingDays::WorkingDays(const WorkingDays &obj)
{
    this->workingHours = obj.workingHours;
}
void WorkingDays::setWorkingHours(const int hours)
{
    if (hours < 0)
    {
        cout << "Number of hours cannot be less than 0. Try Again" << endl;
    }
    else if (hours >= 24)
    {
        this->workingHours = hours - 24;
    }
    else
    {
        this->workingHours = hours;
    }
}
int WorkingDays::getWorkingHours() const
{
    return this->workingHours;
}
void WorkingDays::convertor() {}
void WorkingDays::display() {}
WorkingDays ::WorkingDays operator+(const WorkingDays &obj) {}
WorkingDays ::WorkingDays operator=(const WorkingDays &obj) {}
WorkingDays ::WorkingDays operator>(const WorkingDays &obj) {}
