#include "Employee.h"
Functions function;
Employee::Employee(const char *name, const char *employeeCode, Date date)
{
    setName(name);
    setEmployeeCode(employeeCode);
    setDate(date);
}
Employee::Employee(const Employee &obj)
{
    setName(obj.name);
    setEmployeeCode(obj.employeeCode);
    setDate(obj.date);
}
Employee::~Employee()
{
    delete this->name;
    this->name = NULL;

    delete this->employeeCode;
    this->employeeCode = NULL;
}
char *Employee::getName()
{
    return this->name;
}
void Employee::setName(const char *name)
{
    this->name = new char[25]{'\0'};
    this->name = function.deepCopy(name);
}

char *Employee::getEmployeeCode()
{
    return this->employeeCode;
}
void Employee::setEmployeeCode(const char *employeeCode)
{
    this->employeeCode = new char[25]{'\0'};
    this->employeeCode = function.deepCopy(employeeCode);
}

Date Employee::getDate()
{
    return this->date;
}
void Employee::setDate(Date date)
{
    this->date = date;
}
void Employee::display()
{
    cout << "\nName: " << getName() << endl;
    cout << "Employee Code: " << getEmployeeCode() << endl;
    getDate().display();
    numberOfDays();
}
void Employee::numberOfDays()
{
    int numberOfDays;
    int rotations = this->currentDate.getYear() - this->getDate().getYear();
    int numOfMonth = rotations * 12 - this->currentDate.getMonth();
    numberOfDays = numOfMonth * 30;
    cout << "Number of Days = " << numberOfDays << endl;
}