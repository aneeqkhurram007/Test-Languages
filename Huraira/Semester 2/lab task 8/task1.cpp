#include <iostream>
#include <string>
void Freq(char *ptr, char *subPtr);
using namespace std;
char str[100];
char subStr[25];

int main()
{
    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter a substring: ";
    cin.getline(subStr, 25);
    Freq(str, subStr);
}
void Freq(char *ptr, char *subPtr)
{
    ptr = str;
    subPtr = subStr;

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

    int frequency = 0;

    for (int i = 0; i < Strlen; i++)
    {
        if (*(subPtr + 0) == *(ptr + i))
        {
            for (int k = 0; k < subStrlen && (*(subPtr + k) == *(ptr + i + k)); k++)
            {

                if (k == (subStrlen - 1))
                {
                    cout << "Start Index = " << (i) << endl;
                    cout << "End Index = " << (i + k) << endl;
                    frequency++;
                }
            }
        }
    }
    cout << "Frequency : " << frequency << endl;
}
