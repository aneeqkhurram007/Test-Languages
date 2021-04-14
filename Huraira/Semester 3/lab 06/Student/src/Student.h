#include <iostream>
#include "Date.h"
#include "helperFunctions.h"
#pragma once
using namespace std;

class Student
{
    char *name;
    char *registerationNumber;
    double CGPA;
    Date date;

public:
    Student(const char *name = new char[25]{'\0'}, const char *registerationNumber = new char[25]{'\0'},
            double CGPA = 0.0, Date date = Date());
    Student(const Student &obj);
    ~Student();
    char *getName();
    void setName(const char *name);

    char *getRegisterationNumber();
    void setRegisterationNumber(const char *registerationNumber);

    double getCGPA();
    void setCGPA(double CGPA);

    Date getDate();
    void setDate(Date date);

    void display();
};
