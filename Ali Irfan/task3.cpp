#include <iostream>
using namespace std;
int main()
{
    int num;
    int count = 0;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0)
    {
        for (int i = 1; i < num; i++)
        {

            if (num % i == 0)
            {
                count += i;
            }
        }
        if (count == num)
        {
            cout << num << " is a happy number" << endl;
        }
        else
        {
            cout << num << " is not a happy number" << endl;
        }
    }
    else
    {
        cout << "Please enter a positive integer." << endl;
    }
}