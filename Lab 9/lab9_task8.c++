#include <iostream>
using namespace std;
int main()
{

    int num, pos_num = 0, neg_num = 0, even = 0, odd = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter a number: ";
        cin >> num;
        if (num >= 0)
        {
            pos_num++;
        }
        if (num < 0)
        {
            neg_num++;
        }
        if (num % 2 == 0)
        {
            even++;
        }
        if (num % 2 != 0)
        {
            odd++;
        }
    }
    cout << "\nTotal numbers of positive numbers: " << pos_num;
    cout << "\nTotal numbers of negative numbers: " << neg_num;
    cout << "\nTotal numbers of even numbers: " << even;
    cout << "\nTotal numbers of odd numbers: " << odd;
}