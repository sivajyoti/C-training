#include<iostream>
using std::cout;
using std::cin;

double power(double base, int exponent)
{
	double result = 1;
	for (int i = 0; i <exponent; i++)
	{
		result = result * base;
	}
	return result;
}

int main()
{
		int base, exponet;
		cout << "What is the base? : ";
		cin >> base;
		cout << "What is the exponent? : ";
		cin >> exponet;
		double mypower = power (base, exponet);
		cout << mypower << std::endl;
		return 0;
	
}
