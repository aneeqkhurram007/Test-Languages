#include <iostream>
using namespace std;
int main()
{
    int people;
    float bill, discount, nb;
    cout << "\nEnter the number of people: ";
    cin >> people;
    cout << "\nEnter your bill: ";
    cin >> bill;
    if (people >= 4 && people <= 6)
    {
        discount = bill * 12 / 100;
        nb = bill - discount;
        cout << "\n Your bill is: " << nb;
    }
    if (people > 6)
    {
        discount = bill * 16 / 100;
        nb = bill - discount;
        cout << "\n Your bill is: " << nb;
    }
    return 0;
}