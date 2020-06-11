
#include <iostream>

using namespace std;

int main()
{
    int i, n, m;

    cout << "Enter a number: ";
    cin >> n;
    while (n != -1)
    {
        i = 0;
        m = 0;
        while (m < n)
        {
            i = i + 1;
            m = i * i;
        }
        if (m == n)
        {

            cout << n << " is a complete sqaure of ";
        }
        else
        {
            cout << n << " is not a complete square";
        }
        cout << "\nEnter a number: ";
        cin >> n;
    }

    return 0;
}