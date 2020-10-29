#include <iostream>
using namespace std;
int main()
{

    int i, number, flag = 0;
    cout << "\nEnter a number = ";
    cin >> number;
    if (number < 0)
    {

        flag = 1;
    }

    if (number == 1)
    {
        cout << "\nIt is not a prime number";
    }
    for (i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "\nIt is not a prime number";
    }
    else
    {
        cout << "\nIt is a prime number";
    }
}