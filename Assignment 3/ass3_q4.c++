#include <iostream>
using namespace std;
int main()
{

    int num, limit, x = 1;
    cout << "\nPlease Enter a number : ";
    cin >> num;
    limit = num * 2;
    while (x <= limit)
    {
        int y = x;
        if (x % 2 == 0)
        {
            cout << num;
            num = num - 3;
        }
        else
        {
            cout << y;
            y = y + 2;
        }
        x++;
    }
}