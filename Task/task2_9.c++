#include <iostream>
using namespace std;
int main()
{
    float ang1, ang2, ang3, sum;

    cout << "Enter Angle No. 1: ";
    cin >> ang1;

    cout << "Enter Angle No. 2: ";
    cin >> ang2;

    cout << "Enter Angle No. 3: ";
    cin >> ang3;

    sum = ang1 + ang2 + ang3;

    if (sum == 180)
    {
        cout << "Triangle is Valid!";

        if (ang1 == 90 && ang2 != ang3 || ang2 == 90 && ang1 != ang3 || ang3 == 90 && ang2 != ang1)
        {
            cout << "\nIt is a right angle triangle";
        }
        if (ang1 == 90 && ang2 == ang3 || ang2 == 90 && ang1 == ang3 || ang3 == 90 && ang2 == ang1)
        {
            cout << "\nIt is a right angle triangle";
        }
        if (ang1 == ang2 && ang2 != ang3 && ang1 != ang3 && ang1 != 90 && ang2 != 90 && ang3 != 90 || ang2 == ang3 && ang2 != ang1 && ang3 != ang1 && ang1 != 90 && ang2 != 90 && ang3 != 90 || ang1 == ang3 && ang1 != ang2 && ang3 != ang2 && ang1 != 90 && ang2 != 90 && ang3 != 90)
        {
            cout << "\nIt is an isoseceles triangle";
        }
        if (ang1 == ang2 && ang2 == ang3 && ang3 == ang1)
        {
            cout << "\nIt is an equiletral triangle";
        }
    }

    if (sum > 180 || sum < 180)
    {
        cout << "Triangle is Invalid! \nBeacuse the sum of the angles must be equal to 180 degree.";
    }

    return 0;
}