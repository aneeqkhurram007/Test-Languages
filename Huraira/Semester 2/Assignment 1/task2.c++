#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    string fullName;

    cout << "Enter a string: ";
    getline(cin, fullName);

    cout << "Length is: " << fullName.length();
    cout << "\nString is: ";
    if (fullName.length() % 2 == 0)
    {
        for (int i = fullName.length() - 1; i >= 0; i--)
        {
            cout << fullName[i];
        }
    }
    else
    {
        for (int i = 0; i < fullName.length(); i++)
        {
            for (int j = i + 1; j < fullName.length(); j++)
            {
                if (fullName[i] > fullName[j])
                {
                    char temp = fullName[i];
                    fullName[i] = fullName[j];
                    fullName[j] = temp;
                }
            }
            cout << fullName[i];
        }
    }
}