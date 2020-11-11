#include <iostream>
#include <string>
using namespace std;
void changeCase(char name[])
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] += 32;
            cout << name[i];
        }
        else if (name[i] >= 97 && name[i] <= 122)
        {
            name[i] -= 32;
            cout << name[i];
        }
        if (name[i] == ' ')
        {
            cout << name[i];
        }
    }
}
int main()
{
    char name[50];
    cout << "\nEnter your full name: ";
    cin.get(name, 25);

    changeCase(name);
}