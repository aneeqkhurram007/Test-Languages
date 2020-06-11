#include <iostream>
using namespace std;
int main()
{

    float gpa;
    cout << "\nEnter your gpa: ";
    cin >> gpa;
    if (gpa >= 3.95)
    {
        cout << "\nYou'll get 100% scholarship";
    }
    if (gpa < 3.95 && gpa >= 3.90)
    {
        cout << "\nYou'll get 75% scholarship";
    }
    if (gpa < 3.90 && gpa >= 3.50)
    {
        cout << "\nYou'll get 50% scholarship";
    }
    if (gpa < 3.50 && gpa >= 3.25)
    {
        cout << "\nYou'll get 25% scholarship";
    }
    if (gpa < 3.25 && gpa >= 3.00)
    {
        cout << "\nYou'll get 12.5% scholarship";
    }
    if (gpa < 3.00)
    {
        cout << "\nYou'll get 0% scholarship";
    }
}