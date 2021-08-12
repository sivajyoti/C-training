//calling my own functions

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

double power(double base, int exponent)
{
	return 1.0; //out will display 1,
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





