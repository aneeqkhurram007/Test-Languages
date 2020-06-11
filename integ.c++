#include <iostream>
using namespace std;
int main()
{

    int num1, num2;
    cout << "\nEnter first number : ";
    cin >> num1;
    cout << "\nEnter second number : ";
    cin >> num2;

    if (num1 % num2 == 0)
    {
        cout << "\n"
             << num1 << " is multiple of " << num2 << endl;
    }
    else
    {
        cout << "\nNot multiple";
    }
}