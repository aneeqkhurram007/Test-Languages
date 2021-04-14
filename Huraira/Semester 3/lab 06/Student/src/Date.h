#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;

public:
    Date(int day = 1, int month = 1, int year = 1);
    ~Date();
    int getDay();
    void setDay(int day);
    int getMonth();
    void setMonth(int month);
    int getYear();
    void setYear(int year);
    void display();
};
