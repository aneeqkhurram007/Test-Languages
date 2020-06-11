#include <iostream>
using namespace std;
int main()
{
    int length_of_number, positive_integet, reverse = 0, numberBreak;
    cout << "\nEnter a length of number, must be greater than 5 : ";
    cin >> length_of_number;
    if (length_of_number > 5)
    {

        cout << "\nEnter a positive integer : ";
        cin >> positive_integet;
        cout << "\n Original Number : " << positive_integet;
        while (positive_integet != 0)
        {
            numberBreak = positive_integet % 10;
            reverse = reverse * 10 + numberBreak;
            positive_integet /= 10;
        }
        cout << "\nReverse Number : " << reverse;
    }
    else
    {
        cout << "\nLength is not greater than 5";
    }
}