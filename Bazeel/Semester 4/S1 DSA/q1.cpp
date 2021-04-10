#include <iostream>
using namespace std;
int SIZE = 50;
int top = -1;

char *pop(char *stack, char element)
{
    top--;
    char *temp = new char[SIZE];
    for (int i = 0, j = 0; i < top; i++)
    {
        if (stack[i] != element)
        {
            temp[j] = stack[i];
            j++;
        }
    }
    delete[] stack;
    return temp;
}
char *push(char *stack, char element)
{
    top++;
    int i;
    char *temp = new char[SIZE];
    for (i = 0; i < top - 1; i++)
    {

        temp[i] = stack[i];
    }
    temp[top - 1] = element;
    delete[] stack;
    return temp;
}
bool isEmpty()
{
    return top == -1;
}
bool isFull()
{
    return top == SIZE;
}

int main()
{
    int top = -1;
    char *stack = new char(50);
    char option;
    do
    {
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
        cout << "Do you want to continue: ";
        cin >> option;

    } while (option == 'y');
    cout << "Thanks for choosing our emulator: " << endl;

    return 0;
}