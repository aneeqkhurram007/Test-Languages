#include <iostream>
using namespace std;
int main()
{

    int i, a, b, c;
    for (b = 1; b <= 4; b++)
    {
        for (a = 4; a >= b; a--)
        {
            cout << " ";
        }
        for (i = 1; i <= 1; i++)
        {
            cout << "#";
        }

        for (int c = 2; c <= b; c++)
        {

            if (c == b)
            {
                for (int d = 1; d < c; d++)
                {
                    cout << " ";
                }

                cout << "#";
            }
            else
            {
                cout << " ";
            }
        }

        cout << "\n";
    }
    for (b = 3; b >= 1; b--)
    {
        for (a = 4; a >= b; a--)
        {
            cout << " ";
        }
        for (i = 1; i <= 1; i++)
        {
            cout << "#";
        }

        for (int c = 2; c <= b; c++)
        {

            if (c == b)
            {
                for (int d = 1; d < c; d++)
                {
                    cout << " ";
                }

                cout << "#";
            }
            else
            {
                cout << " ";
            }
        }

        cout << "\n";
    }
}