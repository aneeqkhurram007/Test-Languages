#include <stdio.h>
int testPointers(int *ptrParam)
{
    int x_func = 20;
    int temp = *ptrParam;
    ptrParam = &x_func;
    *ptrParam = 2 * temp + x_func;
    return *ptrParam;
}
int main()
{
    int ptr;
    printf("Enter a number: ");
    scanf("%d", &ptr);
    ptr = testPointers(&ptr);
    printf("\nOutput: %d", ptr);
    return 0;
}
//a Output is correct. Hence, there is no confusion in this program.
//b.i with const we cannot modify ptrParam value. It must be modifiable.
//b.ii with const we cannot modify *ptrParam value. It must be modifiable.
//b.iii with const we cannot modify *ptrParam and ptrParam value. It must be modifiable.