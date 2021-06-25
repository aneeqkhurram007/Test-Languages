#include <stdio.h>
#include <math.h>
void computeRoots(int a, int b, int c, int *x1, int *x2)
{
    int det;
    det = (b * b) - (4 * a * c);
    *x1 = (-b + sqrt(det)) / (2 * a);
    *x2 = (-b - sqrt(det)) / (2 * a);
}
int main()
{

    int x1 = 0, x2 = 0, a, b, c;
    printf("\nEnter value for a: ");
    scanf("%d", &a);

    printf("\nEnter value for b: ");
    scanf("%d", &b);

    printf("\nEnter value for c: ");
    scanf("%d", &c);

    computeRoots(a, b, c, &x1, &x2);
    printf("\nX1: %d", x1);
    printf("\nX2: %d", x2);
}