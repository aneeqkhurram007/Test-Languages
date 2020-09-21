#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            cout << " ";
        }
        for (k = i * 2 - 1; k >= 1; k--)
        {
            cout << k;
        }
        cout << "\n";
    }

    return 0;
}