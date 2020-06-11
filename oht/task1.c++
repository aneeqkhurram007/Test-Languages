#include <iostream>
using namespace std;
int main()
{
    int car1, car2, car3, fastest, slowest;
    cout << "Speed of car1:";
    cin >> car1;
    cout << "Speed of car2:";
    cin >> car2;
    cout << "Speed of car3:";
    cin >> car3;

    if (car1 > car2 && car1 > car3)
    {
        cout << "Fast: car1 ";
        fastest = car1;
    }
    if (car2 > car3 && car2 > car1)
    {
        cout << "Fast: car2 ";
        fastest = car2;
    }
    if (car3 > car2 && car3 > car1)
    {
        cout << "Fast: car3 ";
        fastest = car3;
    }

    if (car1 < car2 && car1 < car3)
    {
        cout << "Slow: car1 ";
        slowest = car1;
    }
    if (car2 < car3 && car2 < car1)
    {
        cout << "Slow: car2 ";
        slowest = car2;
    }
    if (car3 < car2 && car3 < car1)
    {
        cout << "Slow: car3 ";
        ;
        slowest = car3;
    }

    if (car1 > slowest && car1 < fastest)
    {
        cout << "Average: car1 ";
    }
    if (car2 > slowest && car2 < fastest)
    {
        cout << "Average: Car2 ";
    }
    if (car3 > slowest && car3 < fastest)
    {
        cout << "Average: Car3 ";
    }
}