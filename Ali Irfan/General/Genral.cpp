#include <iostream>
#include <fstream>
#include <string>
#include <stack>

using namespace std;

bool delimitersMatching(const string &str)
{
	stack<char> test;
	int i = 0;
	while (i < str.length())
	{
		switch (str[i])
		{
		case '(':
		case '{':
		case '[':
			test.push(str[i]);
			break;
		case ')':
			if (test.top() == '(')
				test.pop();
			else
				return false;
			break;
		case '}':
			if (test.top() == '{')
				test.pop();
			else
				return false;
			break;
		case ']':
			if (test.top() == '[')
				test.pop();
			else
				return false;
			break;
		default:
			break;
		}
		if (str[i] == '/' && str[i + 1] == '*')
		{
			test.push('/');
			test.push('*');
		}
		else if (str[i] == '*' && str[i + 1] == '/')
		{
			if (test.top() == '*')
			{
				test.pop();
				if (test.top() == '/')
				{
					test.pop();
				}
			}
			else
				return false;
		}
		i++;
	}
	if (test.empty())
		return true;
	return false;
}

int main()
{
	fstream input;
	input.open("expressions.txt");

	int number;
	input >> number;

	string str;

	int i = 0;
	while (i < number)
	{
		getline(input, str);
		if (delimitersMatching(str))
		{
			cout << "valid" << endl;
		}
		else
			cout << "invalid" << endl;
		i++;
	}

	return 0;
}