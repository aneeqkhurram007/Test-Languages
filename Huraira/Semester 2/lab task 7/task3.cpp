#include <iostream>
#include <string>
using namespace std;

bool isVowel(char);

int main()
{
    char line[25];
    string name;
    int count = 0;

    cout << "Enter a sequence of cahracters: ";
    cin.getline(line, 25);
    for (int i = 0; line[i] != '\0'; i++)
    {
        cout << line[i] << " " << isVowel(line[i]) << endl;
        if (isVowel(line[i]) == true)
        {
            ++count;
        }
    }
    cout << "Number of vowels is " << count << endl;
}

bool isVowel(char ch)
{
    switch (ch)
    {
    case 'a':
    case 'A':
        return true;
        break;
    case 'e':
    case 'E':
        return true;
        break;
    case 'i':
    case 'I':
        return true;
        break;
    case 'o':
    case 'O':
        return true;
        break;
    case 'u':
    case 'U':
        return true;
        break;
    default:
        return false;
        break;
    }
}