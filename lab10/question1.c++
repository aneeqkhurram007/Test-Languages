#include <iostream>
using namespace std;
int main()
{

    int distance, speed, time, i;

    cout << "\nWhat is the speed of the vehicle in mph: ";
    cin >> speed;
    cout << "How many hours has it travelled: ";
    cin >> time;

    if (speed >= 0 && time > 0)
    {
        cout << "Hour\tDistance Traveled";
        cout << "\n--------------------------";
        for (i = 1; i <= time; i++)
        {
            distance = speed * i;
            cout << "\n"
                 << i << "\t" << distance;
        }
    }
    else
    {
        cout << "\nInputs are not valid";
    }
}