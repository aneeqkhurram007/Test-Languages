#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;
    int total = 0;
    for (int i = 1; i <= num; i++)
    {
        total += (i * i);
    }
    cout << "Total is = " << total;
}