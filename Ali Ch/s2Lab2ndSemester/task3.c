#include <stdio.h>
#include <strings.h>
int main()
{
    int a = 6;
    int b = 7;
    int c = 8;

    int *ptr1;
    int *ptr2;
    int *ptr3;

    ptr1 = &a;
    ptr2 = &b;
    ptr3 = &c;

    printf("%d\n", &c);
    printf("%d\n", ptr1);
    printf("%d\n", &ptr2);
    printf("%d\n", b);
    printf("%d%d%d\n", b, c, a);
}