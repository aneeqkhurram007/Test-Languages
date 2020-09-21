#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Please Enter your age: ";
    cin >> age;
    if (age < 18)
    {
        cout << "Your are not eligible for CNIC";
    }
    else
    {
        cout << "You are eligible for CNIC";
    }
}