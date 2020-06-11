#include <iostream>
using namespace std;
int main()
{
    int years;
    float membership;
    cout << "Years\tMembership)";
    cout << "\n----------------------";
    membership = 2500;
    for (years = 1; years <= 6; years++)
    {

        cout << "\n"
             << years << "\t" << membership;
        membership = membership * 104 / 100;
    }
}