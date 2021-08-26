#include<iostream>
#include<stdio.h>

int main()
{
	int n;
	std::cout << "Enter the size of the array is " << std::endl;
	std::cin >> n;
	
	int* A = (int*)malloc(n*sizeof(int));
	
	for (int i = 0; i < n; i++)
	{
		A[i]=i + 1;
	}
	
	int* B = (int*)realloc(NULL, n * sizeof(int));
	std::cout << " Previous Block size " << " New block size " << A << B << std::endl;
	
	for (int i = 0; i < n; i++)
	{
		std::cout << B[i] << std::endl;
	}
}
