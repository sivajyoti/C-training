#include<iostream>
#include<stdio.h>

int main()
{
	int n;
	std::cout << "Enter the size of the array is " << std::endl;       //Asking user to give the size of array
	std::cin >> n;
	
	int* A = (int*)malloc(n*sizeof(int));
	
	for (int i = 0; i < n; i++)
	{
		A[i]=i + 1;
	}
	
	for (int i = 0; i < n; i++)
	{
		std::cout <<A[i] << std::endl;                           
	}
}
