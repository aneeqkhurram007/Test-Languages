#include <stdio.h>
#include <math.h>

void percentage(int score, int total);

int main()
{
    char c;
    char lastName, uniName;
    int score, total;

    do
    {

        do
        {
            lastName = getchar();
            putchar(lastName);
        } while (lastName != ' ');

        scanf("%d", &score);
        scanf("%d", &total);
        if ((c = getchar()) == EOF)
        {
            break;
        }

        percentage(score, total);
        c = getchar();
        putchar(c);
    } while ((c = getchar()) != EOF && putchar(c));

    return 0;
}

void percentage(int score, int total)
{

    double percentage;
    int finalPercentage;

    percentage = (double)score / total;
    finalPercentage = percentage * 100;
    printf("%d%%", finalPercentage);
    printf(" %.5lf", percentage);
    if (finalPercentage >= 90)
    {
        printf(" WELL DONE ");
    }
    else if (finalPercentage >= 80)
    {
        printf(" OUTSTANDING ");
    }
    else if (finalPercentage >= 70)
    {
        printf(" GOOD ");
    }
    else if (finalPercentage >= 60)
    {
        printf(" AVERAGE ");
    }
    else if (finalPercentage >= 50)
    {
        printf(" NEED IMPROVEMENT ");
    }
    else
    {
        printf(" FAIL ");
    }
}