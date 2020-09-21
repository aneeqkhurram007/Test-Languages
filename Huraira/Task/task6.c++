#include <iostream>
using namespace std;
int main()
{
    int tutionfee;
    float gpa;
    cout << "\nEnter your gpa: ";
    cin >> gpa;
    cout << "\nEnter your Tution Fee:";
    cin >> tutionfee;
    if (gpa >= 3.95)
    {
        tutionfee = 0;
        cout << "\nYou need to pay Rs." << tutionfee << " only";
    }
    if (gpa < 3.95 && gpa >= 3.90)
    {
        tutionfee = 0.25 * tutionfee;
        cout << "\nYou need to pay Rs." << tutionfee << " only";
    }
    if (gpa < 3.90 && gpa >= 3.50)
    {
        tutionfee = 0.5 * tutionfee;
        cout << "\nYou need to pay Rs." << tutionfee << " only";
    }
    if (gpa < 3.50 && gpa >= 3.25)
    {
        tutionfee = 0.75 * tutionfee;
        cout << "\nYou need to pay Rs." << tutionfee << " only";
    }
    if (gpa < 3.25 && gpa >= 3.00)
    {
        tutionfee = 0.875 * tutionfee;
        cout << "\nYou need to pay Rs." << tutionfee << " only";
    }
    if (gpa < 3.00)
    {
        cout << "\nYou need to pay Rs." << tutionfee << " only";
    }
}