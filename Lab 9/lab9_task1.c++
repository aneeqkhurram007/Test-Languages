#include <iostream>
using namespace std;
int main()
{
    int num1, num2, count;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    if (num1 < num2)
    {
        for (count = num1 + 1; count < num2; count++)
        {
            cout << count << " ";
        }
    }
    else
    {
        cout << "2nd number must be greater than 1st number";
    }
}