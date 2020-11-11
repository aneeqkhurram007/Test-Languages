#include <iostream>
using namespace std;
int calcMul(int a, int b)
{
    return a * b;
}
int calcSum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    cout << "To calculate the expression 3^2 + a^2 + b + 3ab :" << endl;
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    int result = calcSum(calcSum(calcMul(3, 3), calcMul(a, a)), calcSum(b, calcMul(3, calcMul(a, b))));
    cout << "The result is: " << result << endl;
}