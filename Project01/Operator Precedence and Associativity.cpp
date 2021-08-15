#include <iostream>

using std::cout;
using std::endl;
int main()
{
	int x = 4 / 2; //O/p 2
	int y = 8 / 3; //O/p is 2 instead of 2.5 because we are declaring it as int 

	double d = 10 / 2;
	double e = 10 + (6.0 / 9 + 2.5 * 5 - 3);
	 
	int a = 55;
	//int s = a = 65;
	int s = (a = 199);

	cout << x << endl;
	cout << y << endl;
	cout << d << endl;
	cout << e << endl;
	cout << a << endl;
	cout << s << endl;
	}
