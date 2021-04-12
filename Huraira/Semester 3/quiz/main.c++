#include <iostream>
#include <string>
#include "employee.h"
using namespace std;
int main()
{
    employee emp1("John", 2000);
    employee emp2 = emp1;
    emp2.setName("Dave");
    emp2.setSalary(30000);
    emp1.display();
    emp2.display();
}
