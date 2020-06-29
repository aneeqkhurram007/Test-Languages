#include <iostream>
using namespace std;
int main()
{
    char op;
    cout << "\nEnter operator(+,-,*,/) for operation: ";
    cin >> op;
    switch (op)
    {

        cout << "Enter the Operation you want to perform" << endl;
    case '+':

    {
        int first[15], second[15], sum[15], c, n;

        cout << "Enter the number of elements in the array ";
        cin >> n;

        cout << "Enter elements of first array" << endl;

        for (c = 0; c < n; c++)
            cin >> first[c];

        cout << "Enter elements of second array" << endl;

        for (c = 0; c < n; c++)
            cin >> second[c];

        cout << "Sum of elements of the arrays:" << endl;

        for (int i = (n - 1); i >= 0; i--)
        {
            int total = 0;
            int tenth = 0;
            total += (first[i] + second[i]);
            if (total >= 10)
            {
                while (total >= 10)
                {
                    tenth++;
                    total -= 10;
                }
            }
            if ((i + 1) == n)
            {
                sum[i + 1] = total;
            }
            else
            {
                sum[i + 1] += total;
            }
            sum[i] = tenth;
        }

        for (int i = 0; i <= n; i++)
        {
            if (sum[i] == 0)
            {
                continue;
            }
            cout << sum[i];
        }

        break;

    case '-':
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

        break;
    }

    case '*':
    {
        int first[15], second[15], sum[30], c, n, i;
        cout << "Enter the number of elements in the array ";
        cin >> n;

        cout << "Enter elements of first array" << endl;

        for (c = 0; c < n; c++)
            cin >> first[c];

        cout << "Enter elements of second array" << endl;

        for (c = 0; c < n; c++)
            cin >> second[c];

        cout << "Product of elements of the given two arrays:" << endl;

        int sindex = 29;
        for (int i = 0; i <= sindex; i++)
        {
            sum[i] = 0;
        }

        int count = 0;
        for (int x = (n - 1); x >= 0; x--)
        {
            int chk = 0;
            int flag = 0;
            int st = sindex;
            int fix = second[x];
            count++;

            for (int i = (n - 1); i >= 0; i--)
            {
                int total = 0;
                int tenth = 0;
                total += (first[i] * fix);
                if (total >= 10)
                {
                    while (total >= 10)
                    {
                        tenth++;
                        total -= 10;
                    }
                }

                int xten = 0;
                int xtenth = 0;
                int olds = sum[st];
                olds += total;
                if (olds >= 10)
                {
                    while (olds >= 10)
                    {
                        xten++;
                        olds -= 10;
                    }
                }
                sum[st] = olds;

                st--;
                tenth += xten;
                int ext = sum[st];
                ext += tenth;
                if (ext >= 10)
                {
                    while (ext >= 10)
                    {
                        xtenth++;
                        ext -= 10;
                    }
                    sum[(st - 1)] += xtenth;
                }
                sum[st] = ext;
            }
            sindex--;
        }

        int flag = 0;
        for (i = 0; i < 30; i++)
        {

            if (sum[i] == 0 && flag == 0)
            {
                continue;
            }
            cout << sum[i];
            flag = 1;
        }
    }
    break;

    case '/':
    {
        int number1 = 0, number2, arraySize = 0, counter = 0;

        cout << "\nEnter ArraySize: ";
        cin >> arraySize;
        int array1[arraySize];
        int array2[arraySize];
        cout << "\nArray1 elements: \n";
        do
        {
            cin >> number1;

            array1[counter] = number1;

            counter++;
        } while (counter < arraySize);
        counter = 0;
        cout << "\nArray2 elements: \n";

        do
        {
            cin >> number2;
            array2[counter] = number2;

            counter++;
        } while (counter < arraySize);

        int final[arraySize];
        if (arraySize <= 10)
        {
            int k = 0;
            for (int i = 0; i < arraySize; i++)
                k = 10 * k + array1[i];

            int m = 0;
            for (int i = 0; i < arraySize; i++)
                m = 10 * m + array2[i];

            int result = k / m;
            cout << "\nResult: ";
            cout << result;
        }
        else
        {

            for (int i = 0; i < arraySize; i++)
            {
                int c = array1[i] / array2[i];
                final[i] = c;
                for (int j = 0; j < arraySize; ++j)
                {
                    cout << final[j];
                }
            }
        }
        return 0;
    }
    }
    }
}