#include <iostream>
#include <stdio.h>
 


int main()
{
	int A[] = { 10, 24, 56, 78, 90, 89 };

	std::cout << "The address of A is" << A << std::endl;
	std::cout << " The address of A is " << & A[0] << std::endl;
	std::cout << "The value of first position is" <<  A[0] << std::endl;
	std::cout << "The value of first position is" << *A	<< std::endl;
	std::cout << " The address of A is " << &A[0] + 1 << std::endl;
	std::cout << "The value of first position is" << A[0]+1 << std::endl;
}
