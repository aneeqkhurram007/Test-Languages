#include <iostream>
using namespace std;
int main()
{

    int height, weight;
    float bmi;
    cout << "Input height in inches: ";
    cin >> height;
    cout << "Input weight in pounds: ";
    cin >> weight;
    bmi = 703 * weight / (height * height);
    if (float(bmi) < 18.5)
    {
        cout << "The calculated BMI is " << float(bmi) << " which categorize you under Under weight";
    }
    if (float(bmi) >= 18.5 && float(bmi) <= 24.9)
    {
        cout << "The calculated BMI is " << float(bmi) << " which categorize you under Normal weight";
    }
    if (float(bmi) >= 25.0 && float(bmi) <= 29.9)
    {
        cout << "The calculated BMI is " << float(bmi) << " which categorize you under Over weight";
    }
    if (float(bmi) >= 30.0)
    {
        cout << "The calculated BMI is " << float(bmi) << " which categorize you under Obese weight";
    }
}