#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter size of the shape: ";
    cin >> num;
    int i = 0;
    while (i < num)
    {
        int j = num;
        for (; j < 5; j++)
        {
            for (int a = 10; a > j; a--)
            {
                cout << " ";
            }
            for (int b = 0; b < j; b++)
            {
                cout << ".";
            }
            cout << "\n";
        }

        i++;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "...." << endl;
    }
}