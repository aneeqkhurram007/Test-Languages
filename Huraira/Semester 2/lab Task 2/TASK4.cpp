#include <iostream>
using namespace std;
int calcSum(int a, int b)
{
    return a + b;
}
int calcMul(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b;
    cout << "To find the value of a^2 + b^2 :- " << endl;
    cout << "Enter value for a : ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    cout << "The value of a^2 + b^2 = " << calcSum(calcMul(a, a), calcMul(b, b)) << endl;
}