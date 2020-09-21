#include <iostream>
using namespace std;
int main()
{
    int array[11] = {3, 5, 27, 5, 10, 12, 5, 153, 3, 90, 89}, i = 0, n1, n2, n3;
    while (i < 9)
    {
        n1 = array[i];
        n2 = array[i + 1];
        n3 = array[i + 2];
        cout << n1 << " " << n2 << " " << n3 << "\n";
        i++;
    }
}