#include <iostream>
using namespace std;
void print_table(int mul);

int main()
{
	int mul1;
	int result = 0;
	cout << "Enter any Number : ";
	cin >> mul1;
	print_table(mul1);
}

void print_table(int mul2)

{

	for (int i = 1; i <= 10; i++)
	{

		cout << mul2 << "*" << i << "=" << mul2 * i << endl;
	}
}