#include <iostream>
#include <stdio.h>

void Bubblesort(int A[], int n)
{
	int i, j, temp;
	for(i=0; i<n; i++)
		for (j = 0; j< n - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
}

int main()
{
	int i;
	int A[] = { 3, 5, 4, 1, 2, 7 };
	Bubblesort(A,6);
	for (i = 0; i < 6; i++)
	{
		std::cout << A[i] << std::endl;
	}
}

//Now,we'll use function to call
#include <iostream>
#include <stdio.h>

int compare(int a, int b)
{
	if (a > b) return -1;  				//For decreasing
	else return 1;
	
	//if (a > b) return 1;  				//For incremental
	//else return -1;
}


void Bubblesort(int A[], int n, int(*compare) (int, int))
{
	int i, j, temp;
	for(i=0; i<n; i++)
		for (j = 0; j< n - 1; j++)
		{
			if (compare(A[j], A[j + 1]) >0)
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
}

int main()
{
	int i;
	int A[] = { 3, 5, 4, 1, 2, 7 };
	Bubblesort(A,6,compare);
	for (i = 0; i < 6; i++)
	{
		std::cout << A[i] << std::endl;
	}
}


//Using signe dnumber

#include <iostream>
#include <stdio.h>
#include <math.h>

int absolute_compare(int a, int b)
{
	if (abs(a) > abs(b)) return 1;
	return -1;
}

int compare(int a, int b)
{
	if (a > b) return -1;
	else return 1;
}


void Bubblesort(int A[], int n, int(*compare) (int, int))
{
	int i, j, temp;
	for(i=0; i<n; i++)
		for (j = 0; j< n - 1; j++)
		{
			if (compare(A[j], A[j + 1]) >0)
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
}

int main()
{
	int i;
	int A[] = { 3, -51, 4, 1, -28, 7 };
	Bubblesort(A,6,absolute_compare);
	for (i = 0; i < 6; i++)
	{
		std::cout << A[i] << std::endl;
	}
}


