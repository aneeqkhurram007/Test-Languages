#include <iostream>
using namespace std;
int main()
{
    char area;
    int speed, fine = 0;
    cout << "Enter your area type: ";
    cin >> area;
    cout << "Enter your speed: ";
    cin >> speed;
    if (area == 'R' || area == 'r')
    {
        if (speed >= 50 && speed <= 65)
        {
            fine = 700;
        }
        else if (speed > 65 && speed <= 75)
        {
            fine = 1000;
        }
        else if (speed > 75)
        {
            fine = 1500;
        }
    }
    else if (area == 'C' || area == 'c')
    {

        {
            if (speed >= 50 && speed <= 65)
            {
                fine = 700;
            }
            else if (speed > 65 && speed <= 75)
            {
                fine = 1000;
            }
            else if (speed > 75)
            {
                fine = 1500;
            }
        }
    }
    else
    {
        cout << "Wrong area type" << endl;
    }
    cout << "Fine is = " << fine << endl;
}
