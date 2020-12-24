#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    char subStr[25];
    cout << "Enter a substring: ";
    cin.getline(subStr, 25);

    int subStrlen = 0;

    while (subStr[subStrlen] != '\0')
    {
        subStrlen++;
    }
    int Strlen = 0;
    while (str[Strlen])
    {
        Strlen++;
    }

    for (int i = 0; i < Strlen; i++)
    {
        if (subStr[0] == str[i])
        {
            for (int k = 0; k < subStrlen && (subStr[k] == str[i + k]); k++)
            {

                if (k == (subStrlen - 1))
                {
                    cout << "Start Index = " << (i + 1) << endl;
                    cout << "End Index = " << (i + k + 1) << endl;
                }
            }
        }
    }
}