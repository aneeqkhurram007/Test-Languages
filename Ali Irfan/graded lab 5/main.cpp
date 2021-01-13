#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "Enter values in array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int num, location;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 0; i < 10; i++)
    {
        if (num == arr[i])
        {
            location = i;
        }
    }
    cout << "Number " << num << " last location is: " << location << endl;
}