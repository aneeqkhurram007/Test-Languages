#include <iostream>
using namespace std;
int main()
{
    int option, num, search, flag = 0;
    cout << "\nPress 1 for Insertion";
    cout << "\nPress 2 for Sorting";
    cout << "\nPress 3 for Printing ";
    cout << "\nPress 4 for Searching";
    cout << "\nPress 5 for Deletion";
    cout << "\nPress 0 for Exit";
    cout << "\nEnter your choice: ";
    cin >> option;
    cout << "\nEnter the number of arrays you want to print: ";
    cin >> num;
    int array[num];
    switch (option)
    {
    case 1:
        //Insertion
        for (int i = 0; i < num; i++)
        {
            cout << "\nEnter number " << i + 1 << " in array: ";
            cin >> array[i];
        }
        cout << "\nSuccessfully Inserted";

        break;
    case 2:
        //Sorting
        cout << "\nFirst Insert numbers.";

        for (int i = 0; i < num; i++)
        {
            cout << "\nEnter number " << i + 1 << " in array: ";
            cin >> array[i];
        }
        cout << "\nSuccessfully Inserted";
        cout << "\nSorted Array is: ";
        for (int i = 0; i < num; i++)
        {

            for (int j = i + 1; j < num; j++)
            {
                if (array[i] > array[j])
                {

                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
            cout << array[i] << " ";
        }

        break;
    case 3:
        //Printing
        cout << "\nFirst Insert numbers.";

        for (int i = 0; i < num; i++)
        {
            cout << "\nEnter number " << i + 1 << " in array: ";
            cin >> array[i];
        }
        cout << "\nSuccessfully Inserted";

        cout << "\nArray elements: ";
        for (int i = 0; i < num; i++)
        {
            cout << array[i] << " ";
        }

        break;
    case 4:
        //Finding
        cout << "\nFirst Insert numbers.";

        for (int i = 0; i < num; i++)
        {
            cout << "\nEnter number " << i + 1 << " in array: ";
            cin >> array[i];
        }
        cout << "\nSuccessfully Inserted";

        cout << "\nEnter a number to search: ";
        cin >> search;
        for (int i = 0; i < num; i++)
        {
            if (search == array[i])
            {
                flag = 1;
                cout << search << " is present in array";
                break;
            }
        }
        if (flag == 0)
        {
            cout << search << " is not present in array";
        }

        break;
    case 5:
        //Deletion
        cout << "\nFirst Insert numbers.";

        for (int i = 0; i < num; i++)
        {
            cout << "\nEnter number " << i + 1 << " in array: ";
            cin >> array[i];
        }
        cout << "\nSuccessfully Inserted";

        cout << "\nEnter a number to delete: ";
        cin >> search;
        cout << "\nArray elements after deletion: ";
        for (int i = 0; i < num; i++)
        {
            if (search == array[i])
            {

                continue;
            }
            cout << array[i] << " ";
        }

        break;
    case 0:
        cout << "\nHave a nice Day :)";
        break;
    default:
        cout << "\nYou entered wrong option";
        break;
    }
}