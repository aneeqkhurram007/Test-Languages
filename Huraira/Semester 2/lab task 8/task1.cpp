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

    char *ptr = str;
    char *subPtr = subStr;

    int subStrlen = 0;
    while (*(subPtr + subStrlen) != '\0')
    {
        subStrlen++;
    }
    int Strlen = 0;
    while (*(str + Strlen) != '\0')
    {
        Strlen++;
    }
    for (int i = 0; i < Strlen; i++)
    {
        if (*(subPtr + 0) == *(ptr + i))
        {
            for (int k = 0; k < subStrlen && (*(subPtr + k) == *(ptr + i + k)); k++)
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