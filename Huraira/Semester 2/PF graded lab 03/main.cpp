#include <iostream>
#include <fstream>
using namespace std;

void copyArray(int *newarray, int *oldarray, int s)
{
    for (int i = 0; i < s; i++)
        newarray[i] = oldarray[i];
}

int *regrow1D(int *oldarray, int s, int value)
{
    int *newarray = new int[s + 1];
    copyArray(newarray, oldarray, s);
    newarray[s] = value;
    delete[] oldarray;
    return newarray;
}
void arrFun(int arr, char ch, int size);
int main()
{
    fstream file;
    file.open("input_data_file.txt");
    char arr[20];
    char ch[20];
    int i;
    int a = 0;
    int c = 0;
    for (i = 0; !file.eof(); i++)
    {
        char temp;
        file >> temp;
        if (temp >= '0' && temp <= '9')
        {
            arr[a] = temp;
            a++;
        }
        else
        {
            ch[c] = temp;
            c++;
        }
    }
    cout << "\nNumber: ";
    for (int i = 0; i < a; i++)
    {
        cout << arr[i];
    }
    cout << "\nName: ";
    for (int i = 0; i < c; i++)
    {
        cout << ch[i];
    }
}