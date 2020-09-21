#include <bits/stdc++.h>
using namespace std;
int calSumUtil(int a[], int b[], int n, int m)
{

    int sum[n];

    int i = n - 1, j = m - 1, k = n - 1;

    int carry = 0, s = 0;

    while (j >= 0)
    {

        s = a[i] + b[j] + carry;
        sum[k] = (s % 10);

        carry = s / 10;

        k--;
        i--;
        j--;
    }

    while (i >= 0)
    {

        s = a[i] + carry;
        sum[k] = (s % 10);
        carry = s / 10;

        i--;
        k--;
    }

    int ans = 0;

    if (carry)
        ans = 10;

    for (int i = 0; i <= n - 1; i++)
    {
        ans += sum[i];
        ans *= 10;
    }

    return ans / 10;
}

int calSum(int a[], int b[], int n, int m)
{

    if (n >= m)
        return calSumUtil(a, b, n, m);

    else
        return calSumUtil(b, a, m, n);
}

int main()
{
    int a[5];
    int b[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        cout << "\nEnter the " << i + 1 << " digit of your 1st number: ";
        cin >> a[i];
    }
    cout << "\n\tSecond Number";
    for (i = 0; i < 5; i++)
    {
        cout << "\nEnter the " << i + 1 << " digit of your 2nd number: ";
        cin >> b[i];
    }
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    cout << calSum(a, b, n, m) << endl;

    return 0;
}
