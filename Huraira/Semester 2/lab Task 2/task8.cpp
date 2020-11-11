#include <iostream>
#include <string>
using namespace std;

int calcSum(int a, int b)
{
    return a + b;
}
int check(string name)
{
    int count = 0;
    for (int j = 0; j < name.length(); j++)
    {

        char vowel = name[j];
        switch (vowel)
        {
        case 'a':
        case 'A':
            cout << j << " ";
            count = calcSum(count, 1);
            break;
        case 'e':
        case 'E':
            cout << j << " ";
            count = calcSum(count, 1);

            break;
        case 'i':
        case 'I':
            cout << j << " ";
            count = calcSum(count, 1);

            break;
        case 'o':
        case 'O':
            cout << j << " ";
            count = calcSum(count, 1);

            break;
        case 'u':
        case 'U':
            cout << j << " ";
            count = calcSum(count, 1);

            break;

        default:
            break;
        }
    }
    return count;
}
int main()
{
    string name;
    cout << "Enter your full name : ";
    getline(cin, name);

    cout << "Vowel is at index" << endl;
    int total = check(name);
    cout << "\nTotal vowels are: " << total << endl;
}