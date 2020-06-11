#include <iostream>
using namespace std;
int main()
{
    int num, i = 1, sum = 0, avg = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num != -1)
    {
        sum = sum + num;
        avg = sum / i;
        cout << "Enter a number: ";
        cin >> num;
        i++;
    }

    cout << "Sum is: " << sum << " and Average is: " << avg;
}