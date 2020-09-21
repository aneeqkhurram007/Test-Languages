#include <iostream>
using namespace std;
int main()
{
    char sent[60], occur;
    int i, count = 0;
    cout << "Enter your secntence : ";
    cin >> sent;
    cout << "\nInput character to count occurences: ";
    cin >> occur;
    for (i = 0; i < 60; i++)
    {
        if (sent[i] == occur)
        {
            count++;
        }
    }
    cout << occur << " occurs " << count << " times.";
}