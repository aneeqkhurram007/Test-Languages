#include <iostream>
#pragma once
using namespace std;
class WorkingDays
{
private:
    int workingHours;

public:
    WorkingDays();
    WorkingDays(int hours = 0);
    WorkingDays(const WorkingDays &obj);
    void setWorkingHours(const int hours);
    int getWorkingHours() const;
    void convertor();
    void display();
    WorkingDays operator+(const WorkingDays &obj);
    WorkingDays operator=(const WorkingDays &obj);
    WorkingDays operator>(const WorkingDays &obj);
    ~WorkingDays();
};
