#include <iostream>
using namespace std;

int main() 
{
	double a, b, result;
	char operation;

	cout << "Enter a expression (example: 3 + 6): ";
	cin >> a >> operation >> b;

	if (!cin) 
	{
		cout << "Invalid input\n";
		return 1;
	}

	if (operation == '+')
	{
		result = a + b;
	}
	else if (operation == '-')
	{
		result = a - b;
	}
	else if (operation == '*')
	{
		result = a * b;
	}
	else if (operation == '/')
	{
		if (b == 0)
		{
			cout << "Error: division by zero\n";
			return 1;
		}
		result = a / b;
	}
	else
	{
		cout << "Unknown operator\n";
		return 1;
	}

	cout << "Result: " << a << " " << operation << " " << b << " = " << result << endl;
	return 0;
}



