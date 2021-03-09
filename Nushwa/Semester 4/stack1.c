#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 50

int top = -1;
char stack[SIZE] = {0};

int isFull();
int isEmpty();
int push(char ele);
int pop();
int isOperand(char ch);
int isOperator(char ch);

int main()
{
    char infx[SIZE] = "(A+B)*C", pfx[SIZE];
    int sym;
    char x;
    int i = 0, j = 0, count = 0;

    printf("Infix Expression: \n");

    for (i = 0; infx[i] != '\0'; i++)
    {
        printf("%c", infx[i]);
    }
    printf("\n");
    for (sym = 0; infx[sym] != '\0'; sym++)
    {
        // if (isOperand(infx[sym]) || isalpha(infx[sym]))
        // {
        //     // pfx[j] = infx[sym];
        //     // printf("%c\n", pfx[j]);
        //     // j++;
        //     // count++;
        // }
        // else
        if (infx[sym] == '(')
        {
            push(infx[sym]);
        }
        else if (infx[sym] == ')')
        {
            while (top != -1)
            {
                int temp = pop();
                if (isOperator(temp))
                {
                    pfx[j] = temp;
                    j++;
                }
            }
        }

        else if (isOperator(infx[sym]))
        {
            while (stack[top] == -1)
            {
                pfx[j] = x;
                x = pop();
                j++;
            }
            push(infx[sym]);
            count++;
        }
        else
        {
            pfx[j] = infx[sym];
            printf("%c\n", pfx[j]);
            j++;
            count++;
        }
    }

    x = pop();
    pfx[j] = x;
    printf("%c", pfx[j]);
    // j++;

    printf("\nPostfix Expression: \n");

    for (i = 0; i < count; i++)
    {
        printf("%c", pfx[i]);
    }

    return 0;
}

int isFull()
{
    if (top >= SIZE)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int push(char ele)
{
    if (!isFull())
    {
        top++;
        stack[top] = ele;
        printf("The element %c pushed into the stack.\n", stack[top]);
    }
    else
        printf("Stack Overflow");
}

int pop()
{

    char ele;
    if (!isEmpty())
    {
        ele = stack[top];
        top--;
        printf("The element %c popped out of the stack.\n", stack[top]);
    }
    return ele;
}

int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int isOperator(char ch)
{
    if (ch == '*' || ch == '/' || ch == '+' || ch == '-' || ch == '%')
        return 1;

    else
        return 0;
}
