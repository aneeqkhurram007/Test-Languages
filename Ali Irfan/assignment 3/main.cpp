#include <iostream>
#include <fstream>
using namespace std;
int arraySize = 200;
char *regrow(char *arr)
{
    int oldSize = arraySize;
    arraySize *= 2;
    char *temp = new char[arraySize * 2];
    for (int i = 0; i < oldSize; i++)
    {
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = NULL;
    return temp;
}
int main()
{
    char **str = new char *[arraySize];
    fstream file;
    int index = 0;
    file.open("dna_sequences.txt");

    while (!file.eof())
    {
        char *temp = new char[arraySize]{'\0'};
        file.getline(temp, arraySize);
        // cout << "Temp: " << temp << endl;
        if (temp[0] != 'R' && temp[0] != '>' && temp[0] != ' ')
        {
            str[index] = new char[arraySize]{'\0'};
            str[index] = temp;
            cout << "Index: " << index << " " << str[index] << endl;
            index++;
        }

        // file.getline(str[index - 1], arraySize);
        delete[] temp;
        temp = NULL;
    }

    return 0;
}