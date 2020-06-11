#include <iostream>
using namespace std;
int main()
{

    int fare, age;
    cout << "\nEnter the fare: ";
    cin >> fare;
    cout << "\nEnter the age:";
    cin >> age;
    if (age < 3)
    {
        fare = 0;
        cout << "\nYour fare is :" << fare;
    }
    if (age >= 3 && age <= 10 || age >= 65)
    {
        fare = fare * 0.5;
        cout << "\nYour fare is :" << fare;
    }
    if (age > 10 && age < 65)
    {
        cout << "\nYour fare is :" << fare;
    }
}