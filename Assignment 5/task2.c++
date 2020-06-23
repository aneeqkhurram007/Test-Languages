#include <iostream>
#include <string>
using namespace std;
int main()
{
    string char1, char2;
    cout << "Enter the names: " << endl;
    getline(cin, char1);
    int len = char1.length();
    cout << "Animal you want to find: " << endl;
    getline(cin, char2);
    int pen = char2.length();
    for (int i = 0; i < len; i++)
    {
        if (char1[i] == char2[i])
        {
            cout << "It is present in the array" << endl;
            break;
        }
        else
        {
            cout << "It is not pressent in the arrat" << endl;
            break;
        }
    }
    return 0;
}