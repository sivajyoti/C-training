#include <iostream>
#include <stdio.h>

void Increment (int *p)
{
	*p = (*p) + 1;
	*p = (*p) * 5;
	*p = (*p) % 2;
}

int main()
{
	int u = 19;

	Increment(&u);
	std::cout << u << std::endl;
}
