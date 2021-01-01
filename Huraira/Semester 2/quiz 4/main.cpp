#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("data.txt");
    int sum;
    int arr[20];
    int i;
    for (i = 0; !file.eof(); i++)
    {
        file >> arr[i];
    }
    for (int j = 0, k; j < i; j++)
    {
        sum = 0;
        for (k = 0; k < arr[j]; k++)
        {
            cout << arr[j + 1 + k] << " ";
            sum += arr[j + 1 + k];
        }
        j += k;
        cout << sum << endl;
    }
}