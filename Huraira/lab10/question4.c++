#include <iostream>
using namespace std;
int main()
{
    int years;
    float ocean_level;
    cout << "Years\tOcean Level(millimeters)";
    cout << "\n----------------------";
    for (years = 1; years <= 25; years++)
    {
        ocean_level = years * 3.1;
        cout << "\n"
             << years << "\t" << ocean_level;
    }
}