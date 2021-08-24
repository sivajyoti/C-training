#include <iostream>
#include <stdio.h>

int main()
{
	int a = 1025;
	int* p;        //declaring a pointer to integer
	p = &a;			//Address of an integer

	std::cout << " Size of an integer is " << sizeof(int) << std::endl;
	std::cout << "Address of an integer is" << p << std::endl;
	std::cout << " Value of p is " << *p << std::endl;

	char c0;
	char* p0;
	p0 = &c0;

	std::cout << " Size of an character is " << sizeof(char) << std::endl;
	std::cout << "Address of an character is" << p0 << std::endl;
	std::cout << " Value is " << *p0 << std::endl;

}
