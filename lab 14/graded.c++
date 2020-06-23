#include <iostream>
using namespace std;
int main()
{
    char input;
    int count;
    char arr[60] = {"Where there is a will there is a way"};
    cout << "Please enter the char " << endl;
    cin >> input;

    cout << input << " occures ";
    int i = 0;
    while (arr[i] != '\0')
    {
        if (input == arr[i])
        {

            count++;
        }
        i++;
    }
    cout << count << "indexes at out_array" << endl;

    int j = 0;
    int i = 0;
    while (arr[i] != '\0')
    {
        if (input == arr[i])
        {

            cout << "out_array[" << j << "] = " << i << endl;
            j++;
            count++;
        }
        i++;
    }
}