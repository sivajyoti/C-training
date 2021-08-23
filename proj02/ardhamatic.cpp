#include <iostream>
#include <stdio.h>

int main()
{
	int a = 9;
	int* p;		//will give value of a
	p = &a;     //it will give address of a
	
	std::cout << "The address of p is "  << p << std::endl;
	std::cout << " The value at address p is" << *p << std::endl;
	std::cout << "the size of intregert is " << sizeof (int) << std::endl;
	std::cout << "The address for p is " << p << std::endl;
	std::cout << "addreess of P+1 is " << p + 1 << std::endl;               will add 4 more bytes
	*p = 88;

	std::cout << *p << std::endl;

}
