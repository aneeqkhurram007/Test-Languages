#include <iostream>
#include <string>
using namespace std;
int main()
{
    char string[20];
    cout << "Enter a string : " << endl;
    gets(string);
    int strSize = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        strSize++;
    }

    char space;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
        {
            space = i;
        }
    }
    for (int i = space + 1; string[i] != '\0'; i++)
    {
        cout << string[i];
    }
    char space2;
    for (int i = 0; i < space; i++)
    {
        if (string[i] == ' ')
        {
            space2 = i;
        }
    }
    for (int i = space2; i <= space; i++)
    {
        cout << string[i];
    }
    for (int i = 0; i < space2; i++)
    {
        cout << string[i];
    }
}