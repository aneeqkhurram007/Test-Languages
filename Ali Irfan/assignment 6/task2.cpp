#include <iostream>
#include <string>
using namespace std;
int main()
{
    char string[40];
    char sorted[26];
    cout << "Enter a string: ";
    cin.getline(string, 40);
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = string[i] - 32;
        }
    }
    cout << "Unique Characters are: ";
    for (int i = 0, k = 0; string[i] != '\0'; i++)
    {

        for (int j = i + 1; string[j] != '\0'; j++)
        {

            if (string[i] == string[j])
            {
                string[j] = ' ';
            }
        }
        if (string[i] != ' ')
        {

            sorted[k] = string[i];
            cout << sorted[k] << " ";
            k++;
        }
    }
    cout << "\nSorted: ";
    for (int i = 0; sorted[i] != '\0'; i++)
    {

        for (int j = i + 1; sorted[j] != '\0'; j++)
        {
            if (sorted[i] > sorted[j])
            {
                char temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
        cout << sorted[i] << " ";
        }
}