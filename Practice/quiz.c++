#include <iostream>
using namespace std;
int main()
{
    int sale1, sale2, sale3, i = 1;
    cout << "Enter today's sale for store 1: ";
    cin >> sale1;
    cout << "Enter today's sale for store 2: ";
    cin >> sale2;
    cout << "Enter today's sale for store 3: ";
    cin >> sale3;
    if (sale1 >= 0 && sale2 >= 0 && sale3 >= 0)
    {
        cout << "\tDaily Sales";
        cout << "\n\t(each * = $100)";
        cout << "\n";

        cout << "Store 1: ";
        sale1 = sale1 / 100;
        while (i <= sale1)
        {
            cout << "*";
            i++;
        }
        cout << "\n";
        cout << "Store 2: ";
        i = 1;
        sale2 = sale2 / 100;
        while (i <= sale2)
        {
            cout << "*";
            i++;
        }
        cout << "\n";

        cout << "Store 3: ";
        sale3 = sale3 / 100;
        i = 1;
        while (i <= sale3)
        {
            cout << "*";
            i++;
        }
    }
}