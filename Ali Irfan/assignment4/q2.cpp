#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "1!, ";
    for (int i = 2; i <= num; i++)
    {
        cout << i << "!/(" << i << "^" << i << "), ";
    }
}