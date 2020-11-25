#include <iostream>
using namespace std;

float calculateCharge(float hours);
int main()
{

    int car1, car2, car3;
    float hours1, hours2, hours3, totalHours = 0;
    float totalCharge;
    cout << "Enter number of hours for car 1 : ";
    cin >> hours1;

    cout << "Enter number of hours for car 2 : ";
    cin >> hours2;

    cout << "Enter number of hours for car 3 : ";
    cin >> hours3;

    totalHours = hours1 + hours2 + hours3;
    totalCharge = calculateCharge(hours1) + calculateCharge(hours2) + calculateCharge(hours3);

    cout << "Car \tHours \tCharge" << endl;
    cout << " 1 \t" << hours1 << "\t" << calculateCharge(hours1) << endl;
    cout << " 2 \t" << hours2 << "\t" << calculateCharge(hours2) << endl;
    cout << " 3 \t" << hours3 << "\t" << calculateCharge(hours3) << endl;
    cout << "TOTAL \t" << totalHours << "\t" << totalCharge << endl;
}
float calculateCharge(float hours)
{
    if (hours <= 3)
    {
        return 20.0;
    }
    else if (hours > 3 && hours < 24)
    {
        int temp = hours - 3;
        return 20 + temp * 5;
    }
    else
    {
        return 50;
    }
}