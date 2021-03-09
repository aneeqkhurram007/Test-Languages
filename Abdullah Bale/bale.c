#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TAB '\t'
#define MAX 60
#define BLANK ' '

void push(int sym);
int pop();
int isEmpty();
void infxTopfx();
int priority(char sym);
long int eval();
int space(char);

int top;
char infx[MAX], pfx[MAX];
long int stack[MAX];

int main()
{
    int val;
    top = -1;
    printf("Enter infix : ");
    gets(infx);
    infxTopfx();
    printf("Postfix : %s\n", pfx);
    val = eval();
    printf("Value of expression : %ld\n", val);

    return 0;
}

void infxTopfx()
{
    unsigned int i, j = 0;
    char next;
    char sym;
    for (i = 0; i < strlen(infx); i++)
    {
        sym = infx[i];
        if (!space(sym))
        {
            switch (sym)
            {
            case '(':
                push(sym);
                break;
            case ')':
                while ((next = pop()) != '(')
                    pfx[j++] = next;
                break;
            case '+':
            case '-':
            case '*':
            case '/':
                while (!isEmpty() && priority(stack[top]) >= priority(sym))
                    pfx[j++] = pop();
                push(sym);
                break;
            default:
                pfx[j++] = sym;
            }
        }
    }
    while (!isEmpty())
        pfx[j++] = pop();
    pfx[j] = '\0';
}
int priority(char sym)
{
    switch (sym)
    {
    case '(':
        return 0;
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    default:
        return 0;
    }
}

void push(int sym)
{
    if (top > MAX)
    {
        printf("Stack has overflown\n");
        exit(1);
    }
    stack[++top] = sym;
}

int pop()
{
    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    return (stack[top--]);
}
int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int space(char sym)
{
    if (sym == BLANK || sym == TAB)
        return 1;
    else
        return 0;
}

long int eval()
{
    int a, b, temp, result;
    unsigned int i;

    for (i = 0; i < strlen(pfx); i++)
    {
        if (isdigit(pfx[i]))
            push(pfx[i] - '0');
        else
        {
            a = pop();
            b = pop();
            switch (pfx[i])
            {
            case '+':
                temp = b + a;
                break;
            case '-':
                temp = b - a;
                break;
            case '*':
                temp = b * a;
                break;
            case '/':
                temp = b / a;
                break;
            }
            push(temp);
        }
    }
    result = pop();
    return result;
}
