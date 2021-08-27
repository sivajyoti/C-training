#include <iostream>
#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	int c;
	int (*P) (int, int);
	P = &Add;         //function
	c = (*P) (15, 9); //derefering the value
	std::cout << c << std::endl;

}
