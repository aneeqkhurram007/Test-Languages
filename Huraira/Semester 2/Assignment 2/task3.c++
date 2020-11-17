#include <iostream>
#include <string>

const int SIZE = 25;
using namespace std;
int check(char arr[], char arr2[]);
void same(char arr[], char arr2[]);
void func(char arr[], char arr2[]);

int main()
{
    char arr[SIZE];
    char arr2[SIZE];
    cout << "Enter first sentence: ";
    gets(arr);
    cout << "Enter second sentence: ";
    gets(arr2);

    if (check(arr, arr2) == 1)
    {
        same(arr, arr2);
    }
    else
    {
        func(arr, arr2);
    }
}

int check(char arr[SIZE], char arr2[SIZE])
{
    int count = 0, temp = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    for (int i = 0; arr2[i] != '\0'; i++)
    {
        temp++;
    }
    if (count == temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void same(char arr[SIZE], char arr2[SIZE])
{
    bool flag;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        flag = true;
        if (arr[i] != arr2[i])
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << "Both are same." << endl;
    }
    else
    {
        cout << "Both are different." << endl;
    }
}
void func(char arr[SIZE], char arr2[SIZE])
{

    int len1 = 0, len2 = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        len1++;
    }
    for (int i = 0; arr2[i] != '\0'; i++)
    {
        len2++;
    }
    int count = 1, temp = 1;
    for (int i = 0; i < len1; i++)
    {
        if (arr[i] == 32)
        {
            count++;
        }
    }

    for (int i = 0; i < len2; i++)
    {
        if (arr2[i] == 32)
        {
            temp++;
        }
    }
    cout << "Words in first array: " << count << endl;
    cout << "Words in second array: " << temp << endl;
}