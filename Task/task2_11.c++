#include <iostream>
using namespace std;
int main()
{
    int gross_sal, basic_sal, hra, da;
    cout << "Please Enter your Basic Salary = ";
    cin >> basic_sal;
    if (basic_sal < 1500)
    {
        hra = basic_sal * 0.10;
        da = basic_sal * 0.90;
    }
    else
    {
        hra = 500;
        da = basic_sal * 0.98;
    }
    gross_sal = basic_sal + hra + da;
    cout << "Gross Salary is = " << gross_sal;
    return 0;
}