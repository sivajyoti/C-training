#include<iostream>
#include<stdio.h>

int	*Add(int *a, int *b)
{
	int c= (*a) + (*b);
	return &c;
}

int main()
{
	int a = 17, b = 90;
	int* ptr = Add(&a, &b);
	std::cout << *ptr << std::endl;
}

