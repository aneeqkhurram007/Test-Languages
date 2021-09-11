#include <iostream>
#include <fstream>
#include <string>
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
    string str[25];
    fstream file;
    fstream file1;

    int index = 0;
    file.open("dna_sequences.txt");
    file1.open("output.txt");
    while (!file.eof())
    {
        string temp;
        file >> temp;
        // cout << "Temp: " << temp << endl;
        if (temp[0] >= 'a' && temp[0] <= 'z')
        {

            str[index] = temp;
            index++;
        }

        // file.getline(str[index - 1], arraySize);
    }
    for (int i = 0, j = 0; i < 19; i += 2, j++)
    {
        if (i != 14)
        {
            str[j] = str[i] + str[i + 1];
        }
        cout << "Index: " << j << " " << str[j] << endl;
    }
    file1 << "Group 1 sequence: 1,3,5";
    file1 << "Group 2 sequence: 2,9";
    file1 << "Group 3 sequence: 4,6,7";
    file1 << "Group 4 sequence: 8,10";
}