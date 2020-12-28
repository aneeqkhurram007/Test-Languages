#include <iostream>
using namespace std;
float expo(float num, int pow)
{
    float mul = num;
    for (int i = 2; i <= pow; i++)
    {
        num = mul * num;
    }
    return num;
}
int main()
{

    float total = 0;
    float x;
    cout << "Enter number x for natural log: ";
    cin >> x;
    for (int i = 1; i <= 10; i++)
    {
        total = total + (1 / i) * (expo((x - 1) / x, i));
    }
    cout << "Natural log is : " << total << endl;
}