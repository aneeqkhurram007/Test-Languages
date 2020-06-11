#include <iostream>
using namespace std;
int main()
{

    int num = 3, count, user;
    cout << "Enter number: ";
    cin >> user;
    for (count = 1; count <= user; count++)
    {
        cout << num * count << " ";
    }
}