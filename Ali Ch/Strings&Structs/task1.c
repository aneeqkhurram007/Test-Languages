#include <stdio.h>
#include <string.h>

int main()
{
    struct student
    {
        char name[50];
        int rollNo;
        float cgpa;
    } typedef Sudent;

    Sudent s1[5] = {{"Johnny", 01, 3.5},
                    {"Javad", 02, 3.4},
                    {"Jamal", 03, 3.3},
                    {"Jameel", 04, 3.2},
                    {"Johnson", 05, 3.1}};

    printf("Name\tRollNo\tCGPA\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\t%3d\t%.2f\n", s1[i].name, s1[i].rollNo, s1[i].cgpa);
    }
}