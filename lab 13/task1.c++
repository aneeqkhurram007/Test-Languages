#include <iostream>
using namespace std;
int main()
{
    //Task 1-Insertion
    int array[16], i, j, temp, search, replace, flag = 0, flag1 = 0, del, count = 0;
    for (i = 0; i < 15; i++)
    {
        cout << "\nPlease enter marks for Student " << i + 1 << " :";
        cin >> array[i];
        if (array[i] >= 0 && array[i] <= 100)
        {
        }
        else
        {
            cout << "\nYou've entered invalid marks:\n";
            cout << "Please enter marks for Student " << i + 1 << " :";
            cin >> array[i];
        }
    }
    //Task 2-Sorting
    for (i = 0; i < 15; i++)
    {
        for (j = i + 1; j < 15; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "\nSorted (Ascending Order):" << endl;
    for (i = 0; i < 15; i++)
        cout << array[i] << "\n";
    cout << endl;

    //Task 3-Searching and Task 4-Replacing
    cout << "\nSearch an element in array: ";
    cin >> search;
    for (i = 0; i < 15; i++)
    {
        if (search == array[i])
        {
            cout << "\nValue found at index: " << i;
            cout << "\nReplace it with the new value: ";
            cin >> replace;
            array[i] = replace;
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "\nValue not found";
        array[4] = search;

        //Increment Sorting
        for (i = 0; i < 16; i++)
        {

            for (j = i + 1; j < 16; j++)
            {
                if (array[i] > array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        cout << "\nSorted (Ascending Order):" << endl;
        for (i = 0; i < 16; i++)
            cout << array[i] << "\n";
        cout << endl;
    }
    //Last Sorting.
    if (flag == 1)
    {

        for (i = 0; i < 15; i++)
        {
            for (j = i + 1; j < 15; j++)
            {
                if (array[i] > array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }

        cout << "\nSorted (Ascending Order):" << endl;
        for (i = 0; i < 15; i++)
            cout << array[i] << "\n";
        cout << endl;
    }
    //Task 5

    cout << "Enter element to be delete : ";
    cin >> del;
    for (i = 0; i < 15; i++)
    {
        if (array[i] == del)
        {
            for (int j = i; j < (15 - 1); j++)
            {
                array[j] = array[j + 1];
            }
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "Element not found..!!";
    }
    else
    {
        cout << "Element deleted successfully..!!\n";
        cout << "Now the new array is :\n";
        for (i = 0; i < (15 - 1); i++)
        {
            cout << array[i] << "\n";
        }
    }
}
