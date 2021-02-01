#include <iostream>
using namespace std;
int *regrow(int *table, int *size)
{
    cout << "Old Array: " << endl;

    for (int i = 0; i < *size; i++)
    {
        cout << *(table + i) << " ";
    }

    int oldSize = *size;

    *size = oldSize * 2;

    int *temp = new int[*size]{0};
    for (int i = 0; i < oldSize; i++)
    {
        *(temp + i) = *(table + i);
    }
    delete[] table;
    table = NULL;
    return temp;
}
int *del(int *table, int *size, int element)
{
    int oldSize = *size;
    *size -= 1;
    int *newArr = new int[*size];
    for (int i = 0, j = 0; i < oldSize; i++)
    {
        if (table[i] != element)
        {
            newArr[j] = table[i];
            j++;
        }
    }
    delete[] table;
    table = NULL;
    return newArr;
}

int main()
{
    int size = 4;
    int *table = new int[size]{1, 2, 3, 4};

    table = regrow(table, &size);
    table[5] = 5;
    cout << "\nNew Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << table[i] << " ";
    }
    cout << "\nSize is: " << size << endl;
    table = del(table, &size, 1);
    cout << "\nSize is: " << size << endl;

    cout << "\nNew Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << table[i] << " ";
    }
}