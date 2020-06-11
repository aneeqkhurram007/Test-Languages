#include <iostream>
using namespace std;
int main()
{

    int i = 1;
    while (i <= 6)
    {
        cout << "1";
        int z = 6;
        while (z >= i)
        {

            cout << "0";
            z--;
        }
        cout << "\n";

        i++;
    }
}