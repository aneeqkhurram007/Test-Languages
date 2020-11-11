#include <iostream>
using namespace std;
int sum(int, int);
int sub(int, int);
int mul(int, int);
float div(float, float);
int calc(int, char, int);

int main()
{
	int a, b;
	char sign;
	int result = 0;
	cout << "Enter the fisrt Number : ";
	cin >> a;
	cout << "Enter the operation you want to perform : ";
	cin >> sign;
	cout << "Enter the second Number : ";
	cin >> b;
	result = calc(a, sign, b);
	cout << result << endl;
}
int calc(int a1, char sign1, int b1)
{
	int result1 = 0;
	if (sign1 == '+')
		return result1 = sum(a1, b1);
	if (sign1 == '-')
		return result1 = sub(a1, b1);
	if (sign1 == '*')
		return result1 = mul(a1, b1);
	if (sign1 == '/')
		return result1 = div((float)a1, (float)b1);
}
int sum(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
float div(float a, float b)
{
	return a / b;
}