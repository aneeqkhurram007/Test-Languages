#include <iostream>
#include <string>
using namespace std;
int main()
{
    string char1, char2, char3;
    int i = 0, j = 0;
    cout << "Please enter Elements in 1st Array: ";
    getline(cin, char1);
    int len = char1.length();

    cout << "Please enter Elements in 2nd Array: ";
    getline(cin, char2);
    int pen = char2.length();
    cout << endl;
    cout << "THE SORTED ARRAY IS: ";

    while (i < len)
    {
        j = i + 1;
        while (j < len)
        {
            if (char1[i] > char1[j])
            {

                char temp = char1[i];
                char1[i] = char1[j];
                char1[j] = temp;
            }
            j++;
        }
        i++;
    }
    cout << "\n 1st ARRAY after sorting: " << char1 << " \n";
    i = 0;
    while (i < pen)
    {
        j = i + 1;
        while (j < pen)
        {
            if (char2[i] > char2[j])
            {

                char temp = char2[i];
                char2[i] = char2[j];
                char2[j] = temp;
            }
            j++;
        }
        i++;
    }
    cout << "\n 2st ARRAY after sorting: " << char2 << " \n";
    cout << "\nElements of Array After Sorting and Merging: ";
    i = 0;
    while (i < len)
    {
        char3[i] = char1[i];
        char3[i + len] = char2[i];
        i++;
    }
    i = 0;
    while (i < len + pen)
    {
        cout << char3[i];
        i++;
    }
    return 0;
}