#include<stdio.h>
int main()
{

    int a[50]={ 1, 2, 2, 2, 1, 88, 2, 1, 1, 1, 7, 22, 22 };
    int count=0, count1=0, flag=0;

    for (int i = 0; i < 50; i++)
    {
        flag=0;


        for (int k = i; k > 0; k--)
        {



            if (a[i]==a[k-1])
            {
                flag=1;
                break;
            }

        }

        if (flag==1)
        {
            continue;
        }





        for (int j = 0; j < 50; j++)
        {
            if (a[i]==a[j])
            {
                count++;
            }

        }


        printf("\n%d appears %d times in the array.", a[i], count);


        count=0;


    }




}
