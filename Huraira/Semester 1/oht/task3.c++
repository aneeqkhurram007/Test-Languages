#include <iostream>
using namespace std;
int main()
{

    int age, fare;
    cout << "Please enter your age: ";
    cin >> age;
    cout << "Please enter your fare: ";
    cin >> fare;

    if (age < 3)
    {
        cout << "No Fare";
    }
    if ((age >= 3 && age <= 10) || age >= 65)
    {
        fare = 0.5 * fare;
        cout << "Your fare is:" << fare;
    }

    if (age > 10 && age < 65)
    {
        cout << "Your fare is:" << fare;
    }

}
