#include <iostream>
using namespace std;
int main()
{
    int wage, hours, salary, time = 8;
    cout << "\nEnter Per Hour Wage:";
    cin >> wage;
    cout << "\nEnter number of hours worked: ";
    cin >> hours;
    if (hours <= 8)
    {

        salary = wage * hours;
        cout << "\nSalary is :" << salary;
    }
    else
    {
        int timeextra = hours - time;
        salary = wage * hours + wage * timeextra;
        cout << "\nSalary is :" << salary;
    }
}