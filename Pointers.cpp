#include <iostream>
#include <stdio.h>

int main()
{
	int a;
	int* p;
	p = &a; //it will give address of a
	a = 9;

	std::cout << p << std::endl;      //address of a
	std::cout << &a << std::endl;     //address of a
	std::cout << &p << std::endl;     //address of a
	std::cout << *p << std::endl;     //value that is there is A

	*p = 88;              //dereferencing

	std::cout << *p << std::endl;     //value that is there in P

}


Or lese we can directlly intialize the values

int main()
{
	int a = 9;
	int *p = &a;;

	std::cout << p << std::endl;      //address of a
	std::cout << &a << std::endl;     //address of a
	std::cout << &p << std::endl;     //address of a
	std::cout << *p << std::endl;     //value that is there is A

	*p = 88;              //dereferencing

	std::cout << *p << std::endl;     //value that is there in P

}
