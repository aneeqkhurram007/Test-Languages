#include <iostream>
using namespace std;
int main()
{
    char array1[20], array2[20];
    cout << "ENTER THE 20 numbers first: ";
    for (int i = 0; i < 20; i++)
    {
        cin >> array1[i];
    }
    cout << "Search the word you want to find: ";
    for (int i = 0; array2[i] != '\0'; i++)
    {
        cin >> array2[i];
    }
    for (int i = 0; i < 20; i++)
    {
        if (array1[i] == array2[i])
        {
            cout << "IT IS PRESENT IN THE  ARRAY";
            break;
        }
        else
        {
            cout << "IT IS NOT PRESENT" << endl;
            break;
        }
    }
    return 0;
}