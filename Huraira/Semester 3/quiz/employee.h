#include <iostream>

#pragma once
using namespace std;
class employee
{
private:
    int rollNumber;
    char *name = new char(25);
    double salary;
    char *rank = new char(25);

public:
    employee(char *name, double salary)
    {

        cout << "Constructor Called" << endl;
        this->name = name;
        this->salary = salary;
    }
    employee(employee &employee)
    {
        this->name = employee.name;
        this->salary = employee.salary;
    }

    char *getName()
    {
        return this->name;
    }
    void setName(char *name)
    {
        this->name = name;
    }

    char *getRank()
    {
        return this->rank;
    }
    void setRank(char *rank)
    {
        this->rank = rank;
    }

    double getSalary()
    {
        return this->salary;
    }
    void setSalary(double salary)
    {
        this->salary = salary;
    }

    int getRollNumber()
    {
        return this->rollNumber;
    }
    void setRollNumber(int rollNumber)
    {
        this->rollNumber = rollNumber;
    }

    double bonusCalculator()
    {
        int bonus = 0;
        if (salary >= 2000 && salary <= 10000)
        {
            bonus = salary + (salary * 0.05);
        }
        else if (salary > 10000 && salary <= 50000)
        {
            bonus = salary + (salary * 0.02);
        }
        else
        {
            bonus = salary + (salary * 0.005);
        }
        return bonus;
    }

    void display()
    {
        cout << "\n\tEmployee " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Rank: " << rank << endl;
        cout << "Salary after bonus: " << bonusCalculator();
    }
};
