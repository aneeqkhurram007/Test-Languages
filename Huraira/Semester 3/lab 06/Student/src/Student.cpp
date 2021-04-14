#include "Student.h"

Functions function;
Student::Student(const char *name, const char *registerationNumber, double CGPA, Date date)
{
    setName(name);
    setRegisterationNumber(registerationNumber);
    setCGPA(CGPA);
    setDate(date);
}

Student::~Student()
{
    delete this->name;
    this->name = NULL;

    delete this->registerationNumber;
    this->registerationNumber = NULL;
}
char *Student::getName()
{
    return this->name;
}
void Student::setName(const char *name)
{
    this->name = new char[25]{'\0'};
    this->name = function.deepCopy(name);
}

char *Student::getRegisterationNumber()
{
    return this->registerationNumber;
}
void Student::setRegisterationNumber(const char *registerationNumber)
{
    this->registerationNumber = new char[25]{'\0'};
    this->registerationNumber = function.deepCopy(registerationNumber);
}

double Student::getCGPA()
{
    return this->CGPA;
}
void Student::setCGPA(double CGPA)
{
    this->CGPA = CGPA;
}

Date Student::getDate()
{
    return this->date;
}
void Student::setDate(Date date)
{

    this->date = date;
}
void Student::display()
{
    cout << "Name: " << getName() << endl;
    cout << "Registeration Number: " << getRegisterationNumber() << endl;
    cout << "CGPA: " << getCGPA() << endl;
    getDate().display();
}