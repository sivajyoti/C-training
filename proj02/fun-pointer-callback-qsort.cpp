#include <iostream>
#include <stdio.h>
#include <math.h>

int compare(const void* a, const void* b)
{
	int A = (*(int*)a);			//typecasting to int* and getting value
	int B = (*(int*)b);
	//return B - A;
	return abs(B) - abs(A);
}


int main()
{
	int i;
	int A[] = { 3, -51, 4, 1, -28, 7 };
	qsort(A,6,sizeof (int), compare);       //we can sort any data type
	for (i = 0; i < 6; i++)
	{
		std::cout << A[i] << std::endl;
	}
}

