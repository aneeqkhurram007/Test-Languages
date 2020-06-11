#include <iostream>
using namespace std;
int main()
{

    float calories;
    int time;
    cout << "Time\tCalories Burnt";
    cout << "\n----------------------";
    for (time = 10; time <= 30; time += 5)
    {
        calories = time * 3.9;
        cout << "\n"
             << time << "\t" << calories;
    }
}