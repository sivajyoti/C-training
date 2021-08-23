#include <iostream>
#include <stdio.h>

int main()
{
	std:: string dish = "Idlli";
	std:: string *p = &dish;

	std::cout << "the address of dish is" << p << std::endl;            
	std::cout << "The address of pointer is " << &p << std::endl;	
	std::cout << "The valye of dish is" << * p << std::endl;
}

