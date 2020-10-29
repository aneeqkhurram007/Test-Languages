#include <iostream>
using namespace std;

int main()
{

    char first[20], second[20];
    cout << "Enter a first name in lowercase: ";
    cin >> first;
    cout << "Enter a second name in lowercase: ";
    cin >> second;
    for (int i = 0; i < 20; i++)
    {
        if (first[i] >= 97 && first[i] <= 122)
        {

            first[i] = first[i] - 32;
        }
    }
    for (int i = 0; i < 20; i++)
    {
        if (second[i] >= 97 && second[i] <= 122)
        {

            second[i] = second[i] - 32;
        }
    }
    cout << "Entered character in uppercase: " << first << " " << second;
    return 0;
}