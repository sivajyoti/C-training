#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int main()
{
	cout << sqrt(75) << endl;
	cout << sqrt(-56) << endl;			// O/P: not a number (nan)
	cout << pow(7, 879) << endl;
	cout << pow(-9, 9999) << endl;		//O/p: -infinity
	cout << remainder(8, 4) << endl;
	cout << remainder(18, 8) << endl;
	cout << fmod(10, 4.25) << endl;
	cout << fmax(45.59, 35) << endl;
	cout << fmin(0.956, 1.0) << endl;
	cout << ceil(2.576) << endl;
	cout << floor(0.986) << endl;
	cout << floor(-2.343536) << endl;
	cout << trunc(-5.654) << endl;
	cout << round(5.986356) << endl;
}
