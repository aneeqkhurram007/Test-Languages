#include <stdio.h>
#include <string.h>
#define MAX 100
int count = 0;
int display()
{
    int choice;
    printf("\n\t Student's record system.\n");
    printf("1. Add New Student\n");
    printf("2. Remove Existing Student\n");
    printf("3. Search Student (one OR more) by Department\n");
    printf("4. Search Student (one OR more) by City\n");
    printf("5. Search Student (one OR more) by Program (Using Array Sorting)\n");
    printf("6. Update Existing Student (Using Pointers)\n");
    printf("7. Find Total Number of Students of Specific Department\n");
    printf("8. Find Average Result of Specific Department\n");
    printf("9. Search Specific Student by Reg No. and Find whether He is Pass ‘OR’ Fail\n");
    printf("10. Find the grade each subject of the student by registration No.\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    return choice;
}

int main()
{
    int choice = display();
    char regNumber[MAX][50];
    char name[MAX][50];
    char dob[MAX][50];
    char depart[MAX][50];
    char prog[MAX][50];
    int subjects[MAX];
    int marks[MAX][5];
    char City[25];
    int j;
    int temp[MAX];
    char department[25];
    char program[25];
    int flag = 0;
    int c = 0;
    char dept[50];
    while (1)
    {

        switch (choice)
        {
        case 1:
            printf("\nEnter your regNumber: ");
            scanf("%s", regNumber[count]);
            printf("\nEnter your name: ");
            fflush(stdin);
            scanf("%s", name[count]);

            printf("\nEnter your dob: ");
            fflush(stdin);
            scanf("%s", dob[count]);

            printf("\nEnter your depart: ");
            fflush(stdin);
            scanf("%s", depart[count]);

            printf("\nEnter your prog: ");
            fflush(stdin);
            scanf("%s", prog[count]);

            printf("\nEnter your subjects: ");
            scanf("%d", &subjects[count]);
            printf("\nEnter your marks: ");
            for (int i = 0; i < subjects[count]; i++)
            {
                scanf("\n%d", &marks[count][i]);
            }
            count++;
            break;
        case 2:
            count--;

            break;
        case 3:

            printf("Enter department name: ");
            scanf("\n%s", department);
            for (int i = 0, j = 0; i < count; i++)
            {
                if (strcmp(department, depart[i]))
                {
                    temp[j] = i;
                    j++;
                }
            }
            for (int i = 0; i < j; i++)
            {
                printf("%s", name[temp[i]]);
            }

            break;
        case 4:

            printf("Enter city name: ");
            scanf("\n%s", City);
            for (int i = 0, j = 0; i < count; i++)
            {
                if (strcmp(City, "Lahore"))
                {
                    temp[j] = i;
                    j++;
                }
            }
            for (int i = 0; i < j; i++)
            {
                printf("%s", name[temp[i]]);
            }

            break;
        case 5:

            printf("Enter program name: ");
            scanf("\n%s", program);
            for (int i = 0, j = 0; i < count; i++)
            {
                if (strcmp(program, prog[i]))
                {
                    temp[j] = i;
                    j++;
                }
            }
            for (int i = 0; i < j; i++)
            {
                printf("%s", name[temp[i]]);
            }

            break;
        case 6:
            count--;
            printf("\nEnter your regNumber: ");
            scanf("%s", regNumber[count]);
            printf("\nEnter your name: ");
            fflush(stdin);
            scanf("%s", name[count]);

            printf("\nEnter your dob: ");
            fflush(stdin);
            scanf("%s", dob[count]);

            printf("\nEnter your depart: ");
            fflush(stdin);
            scanf("%s", depart[count]);

            printf("\nEnter your prog: ");
            fflush(stdin);
            scanf("%s", prog[count]);

            printf("\nEnter your subjects: ");
            scanf("%d", &subjects[count]);
            printf("\nEnter your marks: ");
            for (int i = 0; i < subjects[count]; i++)
            {
                scanf("\n%d", &marks[count][i]);
            }
            count++;
            break;
        case 7:
            printf("\nTotal number of students: %d", count);
            break;
        case 8:

            printf("enter department name");
            scanf("%s", &dept);
            for (int j = 0; j < count; j++)
            {
                if (depart[j] == dept)
                    for (int k = 0; k < count; k++)
                        flag += marks[count][k];
                c++;
            }
            printf("average marks :%d", flag / c);
            break;

        case 9:
            printf("enter reg no:");
            scanf("%d", &c);
            printf("there is no criteria for pass or fail");

            break;

        case 10:
            printf(" unable to understand how to give grade as there is no information to do that in the question");
            break;
        default:

            break;
        }
        choice = display();
    }
}