#include <iostream>
using namespace std;
int main()
{
    int start, end;
    cout << "Start: ";
    cin >> start;
    cout << "End: ";
    cin >> end;
    cout << "Odds: ";
    for (int i = start + 1; i < end; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
}