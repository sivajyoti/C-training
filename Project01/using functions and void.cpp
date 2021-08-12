//calling my own functions

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

//double power(double base, int exponent)
//{
//	return 1.0; //out will display 1,
//}
//int main()
//{
//		int base, exponet;
//		cout << "What is the base? : ";
//		cin >> base;
//		cout << "What is the exponent? : ";
//		cin >> exponet;
//		double mypower = power (base, exponet);
//		cout << mypower << std::endl;
//		return 0;
//	
//}

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

//using void
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
double power(double base, int exponent)
{
	double result = 1;
	for (int i = 0; i <exponent; i++)
	{
		result = result * base;
	}
	return result;
}
void  print_pow (double base, int exponent)
	{
	  double mypower = power(base, exponent);
	  cout << base << " raised to the " << exponent << " power is " << mypower << std::endl;
  }
  int main()
  {
	  double base;
	  int exponent;
	  cout << "What is the base? : ";
	  cin >> base;
	  cout << "What is the exponent? : ";
	  cin >> exponent;
	  print_pow(base, exponent);
	  print_pow(2, 4);
	  return 0;
  }

