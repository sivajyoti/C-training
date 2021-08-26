#include<iostream>
#include<stdio.h>

int main()
{
	int n;
	std::cout << "Enter the size of the array is " << std::endl;
	std::cin >> n;
	
	int* A = (int*)calloc(n, sizeof(int));
	
	for (int i = 0; i < n; i++)
	{
		std::cout << A[i] << std::endl;
	}
}
