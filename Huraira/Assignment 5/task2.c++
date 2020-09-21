#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ch1;
    char ch2[20];
    cout << "ENTER THE NAMES IF ANIMALS IN THE MAIN ARRAY: " << endl;
    getline(cin, ch1);
    int len = ch1.length();
    cout << "ENTER THE NAME OF ANIMAL YOU WANT TO FIND: " << endl;
    cin >> ch2;

    for (int i = 0; i < len; i++)
    {
        if (ch1[i] == ch2[i])
        {
            cout << "IT IS PRESENT IN THE MAIN ARRAY" << endl;
        }
        else
        {
            cout << "IT IS NOT PRESENT" << endl;
        }
    }
    return 0;
}