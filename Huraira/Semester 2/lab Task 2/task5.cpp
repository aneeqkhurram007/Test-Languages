#include<iostream>
using namespace std;
int mul(int,int);

int main()
{
	int x = 0, y = 0, result = 0, result1 = 0;
	cout << "Enter A : ";
	cin >> x;
	cout << "Enter B : ";
	cin >> y;
	result = mul(x, y);
	cout <<"3AB = "<<result<<endl;
}
int mul(int a, int b)
{
	return a*b * 3;

}
