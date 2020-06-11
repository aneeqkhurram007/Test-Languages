#include <iostream>
using namespace std;
int main()
{
    int num = 1;
    cout << "No \t square \t cube";
    while (num < 5)
    {
        cout << "\n";
        cout << num << "\t" << num * num << "\t" << num * num * num;
        num++;
    }
}