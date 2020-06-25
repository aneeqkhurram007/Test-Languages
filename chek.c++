#include <iostream>
using namespace std;
int main()
{
    int ch1[5], ch2[5], ch3[5], carry = 0, base = 10, prod, rem, size = 72;
    cout << "ENTER THE FIRST ARRAY ENTRIES: " << endl;
    for (int i = 0; ch1[i] != '\0'; i++)
    {
        cin >> ch1[i];
    }
    cout << "ENTER THE SECOND ARRAY ENTRIES: " << endl;
    for (int i = 0; ch2[i] != '\0'; i++)
    {
        cin >> ch2[i];
    }

    for (int i = size - 1; i > -1; i--)
    {
        for (int j = size - 1; j > -1; j--)
        {
            prod = ch1[i] * ch2[j];
            prod += carry;

            if (prod >= base)
            {
                carry = (prod / base);
                prod -= (carry * base);
            }

            else
            {
                carry = 0;
                ch3[i + j] += prod;

                if (ch3[i + j] >= base)
                {
                    rem = (ch3[i + j] / base);
                    ch3[i + j] -= rem * base;
                    carry += rem;
                    cout << ch3[i + j];
                }
                if (ch3[i + j] >= base)
                {
                    ch3[i + j - 1] += (ch3[i + j] / base);
                    ch3[i + j] = ch3[i + j] % base;
                    cout << ch3[i + j];
                }
            }
        }
    }
}