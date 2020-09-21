#include <iostream>
using namespace std;
int main()
{
    int i = 0, array[10] = {5, 6, 7, 5, 9, 10, 58, 5, 5, 66}, num;
    cout << "Enter number to be found: ";
    cin >> num;
    while (i <= 9)
    {
        if (num == array[i])
        {
            cout << "It is present at: " << i << " index\n";
        }
        i++;
    }
}