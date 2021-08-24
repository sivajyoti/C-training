#include <iostream>
#include <stdio.h>

int main()

{
	int s = 67;
	int *p;
	p = &s;

	int **t = &p;
	int ***u = &t;

	std::cout << " value of s is " << *p  << std::endl;
	std::cout << "Address of s is" << &p  << std::endl;
	std::cout << " Address of p is" << &t << std::endl;
	std::cout << "Address of t is" << &u  << std::endl;
	std::cout << (*(*t)) << std::endl;
	std::cout << (*(*(*u))) << std::endl;

	**t = *p + 87;
	std::cout << (*(*t)) << std::endl;

	***u = s + 67;
	std::cout << " value of s is " << *p << std::endl;
}
