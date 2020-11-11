#include <iostream>
using namespace std;
float find_Q(float num1, float num2);

int main()
{
	float f1, f2;
	float result = 0;
	cout << "Enter the first Number :";
	cin >> f1;
	cout << "Enter the Second Number :";
	cin >> f2;
	result = find_Q(f1, f2);
}

float find_Q(float num3, float num4)
{
	float temp = num3 / num4;
	cout << temp << endl;
	return temp;
}
