#include <iostream>

using namespace std;

int main()
{
    int i, array1[5], array2[5], sum[6], temp = 0, carry = 0;
    cout << "\tFirst number";
    for (i = 0; i < 5; i++)
    {
        cout << "\nEnter the " << i + 1 << " digit of your 1st number: ";
        cin >> array1[i];
    }
    cout << "\n\tSecond Number";
    for (i = 0; i < 5; i++)
    {
        cout << "\nEnter the " << i + 1 << " digit of your 2nd number: ";
        cin >> array2[i];
    }
    for (i = 4; i >= 0; i--)
    {
        sum[i] = array1[i] + array2[i];
        if (sum[i] >= 10)
        {

            carry = sum[i];
            sum[i] = sum[i] % 10 + temp;
            temp = carry / 10;
            sum[i + 1] = sum[i + 1] + temp;
        }
    }
    cout << "\nSum is: ";
    for (i = 0; i < 5; i++)
    {
        cout << sum[i];
    }
}