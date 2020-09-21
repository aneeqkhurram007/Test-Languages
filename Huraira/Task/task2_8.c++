#include <iostream>
using namespace std;
int main()
{
    int age1, age2, age3;
    cout << "\nEnter age of 1st cousin: ";
    cin >> age1;
    age2 = age1 - 4;
    age3 = age2 / 2;
    cout << "\nAge of 2nd cousin is: " << age2;
    cout << "\nAge of 2nd cousin is: " << age3;
}