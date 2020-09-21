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
        int arraySize;

        cout << "\nPlease Enter array Size: ";
        cin >> arraySize;
        int first[arraySize], second[arraySize], sum[arraySize], i;
        cout << "Enter elements of first array" << endl;

        for (i = 0; i < arraySize; i++)
            cin >> first[i];

        cout << "Enter elements of second array" << endl;

        for (i = 0; i < arraySize; i++)
            cin >> second[i];

        cout << "Sum of elements of the arrays:" << endl;

        for (i = (arraySize - 1); i >= 0; i--)
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
            if ((i + 1) == arraySize)
            {
                sum[i + 1] = total;
            }
            else
            {
                sum[i + 1] += total;
            }
            sum[i] = tenth;
        }

        for (i = 0; i <= arraySize; i++)
        {
            if (sum[i] == 0)
            {
                continue;
            }
            cout << sum[i];
        }

        break;
    }
    case '-':
    {
        int arraySize;
        cout << "\nPlease Enter array Size: ";
        cin >> arraySize;
        int first[arraySize], second[arraySize], sub[arraySize];
        int i = 0, j = 0;
        cout << "Enter values of first array: \n";
        for (i = 0; i < arraySize; i++)
        {
            cin >> first[i];
        }
        cout << "Enter values of second array: \n";
        for (i = 0; i < arraySize; i++)
        {
            cin >> second[i];
        }

        for (i = arraySize - 1; i >= 0; i--)
        {
            if (j != 0)
            {
                first[i] = first[i] - 1;
                j = 0;
            }

            if (first[i] >= second[i])
                sub[i] = first[i] - second[i];
            if (first[i] < second[i])
            {
                first[i] = first[i] + 10;
                j++;
                sub[i] = first[i] - second[i];
            }
        }
        for (i = 0; i < arraySize; i++)
        {
            cout << sub[i];
        }

        break;
    }

    case '*':
    {
        int first[15], second[15], sum[30], arraySize, i;
        cout << "\nPlease Enter array Size: ";
        cin >> arraySize;

        cout << "Enter elements of first array" << endl;

        for (i = 0; i < arraySize; i++)
            cin >> first[i];

        cout << "Enter elements of second array" << endl;

        for (i = 0; i < arraySize; i++)
            cin >> second[i];

        cout << "Product of elements of the given two arrays:" << endl;

        int sindex = 29;
        for (int i = 0; i <= sindex; i++)
        {
            sum[i] = 0;
        }

        int count = 0;
        for (int x = (arraySize - 1); x >= 0; x--)
        {
            int chk = 0;
            int flag = 0;
            int st = sindex;
            int fix = second[x];
            count++;

            for (int i = (arraySize - 1); i >= 0; i--)
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
        int number1 = 0, number2, arraySize = 0, i = 0;

        cout << "\nEnter ArraySize: ";
        cin >> arraySize;
        int first[arraySize];
        int second[arraySize];
        cout << "\nArray1 elements: \n";
        do
        {
            cin >> number1;

            first[i] = number1;

            i++;
        } while (i < arraySize);
        i = 0;
        cout << "\nArray2 elements: \n";

        do
        {
            cin >> number2;
            second[i] = number2;

            i++;
        } while (i < arraySize);

        int final[arraySize];
        if (arraySize <= 10)
        {
            int k = 0;
            for (int i = 0; i < arraySize; i++)
                k = 10 * k + first[i];

            int m = 0;
            for (int i = 0; i < arraySize; i++)
                m = 10 * m + second[i];

            int result = k / m;
            cout << "\nResult: ";
            cout << result;
        }
        else
        {

            for (int i = 0; i < arraySize; i++)
            {
                int c = first[i] / second[i];
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
