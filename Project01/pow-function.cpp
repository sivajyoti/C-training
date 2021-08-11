#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
//this is  for basic power

//int main()
//{
//	cout << pow(6, 7) << std::endl;
//	return 0;
//}

//this is for declaring the variables and using them by giving the values to it

//int main()
//{
//	int base, exponet;
//	cout << "What is the base? : ";
//	cin >> base;
//	cout << "What is the exponent? : ";
//	cin >> exponet;
//	cout << pow(base, exponet) << std::endl;
//	return 0;
//}

//This is for double pow 

int main()
{
	    int base, exponet;
		cout << "What is the base? : ";
		cin >> base;
		cout << "What is the exponent? : ";
		cin >> exponet;
		double power = pow (base, exponet);
		cout << power << std::endl;
		return 0;
}
