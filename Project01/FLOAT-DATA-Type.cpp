#include<iostream>
using namespace std;
int main()
{
	float f = 5.0 / 3;
	double d = 15.5/2;
	long double l = 134.0/13;

	f = f * 56783453;
	d = d * 12345;
	l = l * 5678986;

	cout << f << endl; //9.46391e+07
	cout << d << endl; //95673.8
	cout << l << endl; //5.85372e+07

	cout << std:: fixed << f << endl; // fixed is an manipulatot, used to get the exact value inspite of number+E4 94639088.000000
	cout << std::fixed << d << endl; //95673.750000
	cout << std::fixed << l << endl; //58537240.307692

	cout << FLT_DIG << endl; //6
	cout << DBL_DIG << endl; //15
	cout << LDBL_DIG << endl; //15
	return 0;
}

   
