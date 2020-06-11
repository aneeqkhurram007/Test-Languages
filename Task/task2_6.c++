#include <iostream>
using namespace std;
int main()
{
    int num1, num2, choice;
    cout << "Enter no 1: ";
    cin >> num1;
    cout << "Enter no 2: ";
    cin >> num2;
    cout << "Enter no for choice 1 to 4: ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Sum of given numbers is: " << num1 + num2;
    }
    if (choice == 2)
    {
        cout << "Sub of given numbers is: " << num1 - num2;
    }
    if (choice == 3)
    {
        cout << "Mul of given numbers is: " << num1 * num2;
    }
    if (choice == 4)
    {
        cout << "Div of given numbers is: " << num1 / num2;
    }
    if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
    {
        cout << "invalid choice -try again";
    }
}