#include <stdio.h>
#include <string.h>
#define MAX 60

void push(int ch);
int pop();
int isEmpty();
void InfixConversion();
int priority(char ch);
int Result();

int top;
char infix[MAX], post[MAX];
int stack[MAX];

int main()
{
    int val;
    top = -1;
    printf("Enter infix Expression : ");
    gets(infix);
    InfixConversion();
    printf("Postfix : %s\n", post);
    val = Result();
    printf("After Conversion Expression : %d\n", val);

    return 0;
}

void InfixConversion()
{
    int i, j = 0;
    char s;
    char ch;
    for (i = 0; i < strlen(infix); i++)
    {
        ch = infix[i];
        if (ch != ' ')
        {

            if (ch == '(')
            {
                push(ch);
            }
            else if (ch == ')')
            {
                while ((s = pop()) != '(')
                    post[j++] = s;
            }
            else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {
                while (!isEmpty() && priority(stack[top]) >= priority(ch))
                    post[j++] = pop();
                push(ch);
            }
            else
            {
                post[j++] = ch;
            }
        }
    }
    while (!isEmpty())
        post[j++] = pop();
    post[j] = '\0';
}
int priority(char ch)
{
    switch (ch)
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

void push(int ch)
{

    stack[++top] = ch;
}

int pop()
{
    return (stack[top--]);
}
int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int Result()
{
    int a, b, temp, result;
    unsigned int i;

    for (i = 0; i < strlen(post); i++)
    {
        if (post[i] >= '0' && post[i] <= '9')
            push(post[i] - '0');
        else
        {
            a = pop();
            b = pop();
            switch (post[i])
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
