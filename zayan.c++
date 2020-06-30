#include <iostream>
using namespace std;
int main()
{
    int choice, array1[15], array2[15], sum[15], c, n, sub[15], totalSum = 0, carry = 0, i;

    cout << "Enter the number of elements in the array ";
    cin >> n;

    cout << "Enter elements of first array" << endl;

    for (c = 0; c < n; c++)
        cin >> array1[c];

    cout << "Enter elements of second array" << endl;

    for (c = 0; c < n; c++)
        cin >> array2[c];
    cout << "Enter your choice: ";
    cout << "\n1 for Addition\n2 for Subtraction \n3for Multiplication";
    cin >> choice;
    if (choice == 1)
    {

        cout << "Sum of elements of the arrays:" << endl;
        i = (n - 1);
        while (i >= 0)
        {

            totalSum += (array1[i] + array2[i]);
            if (totalSum >= 10)
            {
                while (totalSum >= 10)
                {
                    carry++;
                    totalSum -= 10;
                }
            }
            if ((i + 1) == n)
            {
                sum[i + 1] = totalSum;
            }
            else
            {
                sum[i + 1] += totalSum;
            }
            sum[i] = carry;
            i--;
        }
        i = 0;
        while (i <= n)
        {
            if (sum[i] == 0)
            {
                continue;
            }
            cout << sum[i];
            i++;
        }
    }

    else if (choice == 2)
    {

        int array[15] = {0};
        int array2[15] = {0};
        int array3[15] = {0};
        int i = 0, a;
        int j = 0;
        cout << "enter values of first array";
        for (i = 0; i <= 14; i++)
        {
            cin >> array[i];
        }
        cout << "enter values of second array";
        for (i = 0; i <= 14; i++)
        {
            cin >> array2[i];
        }

        for (i = 14; i >= 0; i--)
        {
            if (j != 0)
            {
                array[i] = array[i] - 1;
                j = 0;
            }

            if (array[i] >= array2[i])
                array3[i] = array[i] - array2[i];
            if (array[i] < array2[i])
            {
                array[i] = array[i] + 10;
                j++;
                array3[i] = array[i] - array2[i];
            }
        }
        for (i = 0; i <= 14; i++)
        {
            cout << array3[i];
        }
    }

    else if (choice == 3)
    {

        int array1[15], array2[15], mul[30], c, n, i;
        cout << "Enter the number of elements in the array ";
        cin >> n;

        cout << "Enter elements of first array" << endl;

        for (c = 0; c < n; c++)
            cin >> array1[c];

        cout << "Enter elements of second array" << endl;

        for (c = 0; c < n; c++)
            cin >> array2[c];

        cout << "Product of elements of the given two arrays:" << endl;

        int position = 29;
        for (int i = 0; i <= position; i++)
        {
            mul[i] = 0;
        }

        int count = 0;
        for (int x = (n - 1); x >= 0; x--)
        {
            int check = 0;
            int flag = 0;
            int temp = position;
            int fix = array2[x];
            count++;
            int i = (n - 1);
            while (i >= 0)
            {
                int totalSum = 0;
                int carry = 0;
                totalSum += (array1[i] * fix);
                if (totalSum >= 10)
                {
                    while (totalSum >= 10)
                    {
                        carry++;
                        totalSum -= 10;
                    }
                }

                int xten = 0;
                int xtenth = 0;
                int olds = sum[temp];
                olds += totalSum;
                if (olds >= 10)
                {
                    while (olds >= 10)
                    {
                        xten++;
                        olds -= 10;
                    }
                }
                mul[temp] = olds;

                temp--;
                carry += xten;
                int ext = sum[temp];
                ext += carry;
                if (ext >= 10)
                {
                    while (ext >= 10)
                    {
                        xtenth++;
                        ext -= 10;
                    }
                    sum[(temp - 1)] += xtenth;
                }
                sum[temp] = ext;
                i--;
            }
            position--;
        }

        int flag = 0;
        i = 0;
        while (i < 30)
        {

            if (sum[i] == 0 && flag == 0)
            {
                continue;
            }
            cout << sum[i];
            flag = 1;
            i++;
        }
    }
    else
    {
        cout << "\nYou entered Wrong Choice";
    }
}
