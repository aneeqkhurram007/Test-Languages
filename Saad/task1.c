#include <stdio.h>
//Q2-i
void Fun(unsigned int i)
{
    if (i == 0)
    {
        printf("%d ", i);
    }

    else
    {
        printf("%d ", i);
        Fun(--i);
    }
}
int main()
{
    /*//Q1
    int marks[5][5] = {{2, 3, 4, 4, 1}, {3, 1, 2, 1, 1}, {2, 3, 0, 2}, {1, 2, 3, 4, 5}, {9, 2, 3, 4, 9}};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", marks[i][i]);
        sum = sum + marks[i][i];
    }
    printf("\nSum is: %d\n", sum);
    //Q2-ii
    Fun(5);
    //Q3
    int arr[] = {9, 2, 3, 4, 16};
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            max = arr[i];
            for (int j = 0; j < 5; j++)
            {
                if (arr[j] % 2 == 0 && max < arr[j])
                {
                    max = arr[j];
                }
            }
            break;
        }
    }

    printf("\nMax is %d", max);
    //Q4
    /*
    int student[4][4] = {{1, 0, 5}, {2, 4, 9}, {4, 5, 3}};
    int *a, *b, i;
    a = student[1];
    b = student[2];
    for (int i = 0; i < 3; i++)
    {
        printf("%d %d \n", a[i], b[i]);
    }*/

    /* return 0;
    //Q5
    struct FOO
    {
        int x[3];
        char string[20];
    };
    struct FOO *var;

    for (int i = 0; i < 3; i++)
    {
        printf("%d %s\n", var->x, var->string);
    }
    //Q6
    int X[] = {15, 34, 25, 1, 17, 11, 21, 35, -11, 3};
    int i = 0, temp;
    for (i = 0; i < 10; i++)
    {
        if (X[i] % 7 == 0)
        {
            printf("%d", X[i]);
        }
    }*/
    //Q7
    /*char str[50] = "Aneeq";
    char *token = strtok(str, "+ ");
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, "+");
    }*/
    //Q8
    printf("\nQ8");
    int arr1[] = {8, 2, 1, 4, 3, 10, 7};
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (arr1[i] < arr1[j])
            {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
            printf("%d ", arr1[j]);
        }
    }
    char gender[50];
    printf("Enter a gender: ");
    scanf("%s", gender);
    struct task1
    {
        char name[20];
        int marks[3];
    };
    struct task1 var;
    printf("\nEnter a value ");
    scanf("%d", var.marks);
    printf("%d", var.marks);
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, i, j;

    for (j = 0; j < 3; j++)
    {
        arr[j][j] += arr[0][j];
    }
    i = 1;
    j = 1;
    printf("%d%d%d", arr[i++][j], arr[i][j++], arr[i][j]);
    // printf("%d", sizeof(x.a));
    // printf("%d", sizeof(x.ch));
    // printf("%d", sizeof(marks));
    // printf("%d", sizeof(d));

    struct Foo
    {
        int x;
        float y;
    } x;
    x str;
    funStr(struct Foo x);
}
struct funStr(struct Foo x)
{
    printf("%d", x.x);
    printf("%d", x.y);
    return x;
}
void func(int arr[][])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            // sum += arr[i][j];
        }
    }
    printf("\nSum is = ", sum);
}