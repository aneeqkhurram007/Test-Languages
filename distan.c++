#include <iostream>
using namespace std;

int main()
{
    float centi, dista;
    cout << "\n\n Convert centimeter into meter and kilometer :\n";
    cout << "--------------------------------------------------\n";
    cout << "Enter a number :";
    cin >> dista;
    centi = (dista * 100);

    cout << " The distance in meter is: " << dista << endl;
    cout << " The distance in centimeter is: " << centi << endl;
    cout << endl;
    return 0;
}