#pragma once
#include <iostream>
using namespace std;
class Student
{
private:
    char *firstName;
    char *lastName;
    char *course;
    double finalAverage;
    char *finalGrade;
    char *deepCopy(char *dst, const char *src) const;

public:
    Student(char *firstName = new char[25], char *lastName = new char[25], char *course = new char[25], double finalAverage = 0, char *finalGrade = new char[5]);
    Student(const Student &obj);
    virtual void computeGrade() = 0;
    virtual void printInfo() const;

    void setFirstName(const char *firstName);
    char *getFirstName() const;

    void setLastName(const char *lastName);
    char *getLastName() const;

    void setCourse(const char *course);
    char *getCourse() const;

    void setAverage(const double average);
    double getAverage() const;

    void setFinalGrade(const char *finalGrade);
    char *getFinalGrade() const;

    ~Student();
};