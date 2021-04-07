#include <iostream>
using namespace std;
int main()
{

    int top = -1;
    char *stack = new char(50);
    cout << "Enter a name: ";
    cin >> stack;
    int count = 0;
    for (int i = 0; stack[i] != '\0'; i++)
    {
        count++;
    }
    int flag = 0;
    for (int i = 0; i < count; i++)
    {
        if (stack[i] == stack[count - i - 1])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << stack << " is a palindrome" << endl;
    }
    else
    {
        cout << stack << " is not a palindrome" << endl;
    }

    return 0;
}