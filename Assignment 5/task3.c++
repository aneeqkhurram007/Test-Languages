#include <iostream>
#include <string>
using namespace std;
int main()
{
    string char1, char2;
    char char3[100];
    cout << "Enter Elements in 1st Array: ";
    getline(cin, char1);
    int len = char1.length();

    cout << "Please enter Elements in 2nd Array: ";
    getline(cin, char2);
    int pen = char2.length();
    cout << endl;

    for (int i = 0; i < len; i++)
    {
        char3[i] = char1[i];
        char3[i + len] = char2[i];
    }
    for (int i = 0; i < len + pen; i++)
    {
        for (int j = i + 1; j < len + pen; j++)
        {
            if (char3[i] > char3[j])
            {

                char temp = char3[i];
                char3[i] = char3[j];
                char3[j] = temp;
            }
        }
    }
    cout << "\n sorting: " << char3 << " \n";

    return 0;
}