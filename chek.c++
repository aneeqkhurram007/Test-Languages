#include <iostream>
using namespace std;

int main()

{
    int first[15], second[15], product[15], c, n, i;
    cout << "Enter the number of elements in the array ";
    cin >> n;

    cout << "Enter elements of first array" << endl;

    for (c = 0; c < n; c++)
        cin >> first[c];

    cout << "Enter elements of second array" << endl;

    for (c = 0; c < n; c++)
        cin >> second[c];

    cout << "Product of elements of the given two arrays:" << endl;

    for (i = 0; i < n; i++)
    {
        product[i] = first[i] + first[i];
    }
    for (i = 0; i < 7; i++)
    {
        cout << first[i] << " * " << second[i] << " = " << product[i] << '\n';
    }
    return 0;
}