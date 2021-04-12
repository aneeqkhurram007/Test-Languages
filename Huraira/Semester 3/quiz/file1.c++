#include <iostream>
#include <string>
#include "employee.h"
using namespace std;
int main()
{
    char *name = new char(25);
    name = "John";
    employee emp1(name, 2000, 0027, "18A");
    employee emp2 = emp1;
    name = "Dave";
    emp2.setName(name);
    emp2.setSalary(30000);
    emp2.setRollNumber(28);
    emp2.setRank("19B");
    emp1.display();
    emp2.display();
}
