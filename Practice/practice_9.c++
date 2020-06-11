#include <iostream>
using namespace std;
int main()
{

    int num, start, end;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter start postition: ";
    cin >> start;
    cout << "Enter end position: ";
    cin >> end;
    int start1 = start;
    while (start <= end)
    {

        cout << "\n"
             << num << "*" << start << "=" << num * start;
        start++;
    }
    while (start1 >= end)
    {

        cout << "\n"
             << num << "*" << start1 << "=" << num * start1;
        start1--;
    }
}