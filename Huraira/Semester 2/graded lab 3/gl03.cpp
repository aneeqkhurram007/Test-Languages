#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    fstream file, file2;
    file.open("input.txt");
    file2.open("output.txt");

    int temp1 = 0;
    int temp2;

    for (int i = 0; !file.eof(); i++)
    {
        file >> temp2;
        temp1++;
    }

    temp1 = --temp1;

    int array[temp1] = {0};
    int temp;

    /*file.close();
    file.open("input.txt");*/

    file.seekg(0);

    for (int i = 0; !file.eof(); i++)
    {
        if (i == temp1)
        {
            file >> temp;

            break;
        }
        else
        {

            file >> array[i];
        }
    }

    int array2[temp];

    for (int i = 0; i < temp; i++)
    {
        array2[i] = array[i];
    }

    for (int i = 0, j = 0; i < temp1; i++)
    {

        if (i >= (temp1 - temp))
        {
            array[i] = array2[j];
            j++;
        }
        else
        {
            array[i] = array[i + temp];
        }
    }
    for (int i = 0; i < temp1; i++)
    {
        cout << array[i] << " ";
        file2 << array[i] << " ";
    }
}