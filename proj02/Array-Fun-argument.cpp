#include <iostream>
#include <stdio.h>
int sumofelement(int* A, int size)
{
    int i, sum = 0;
    std::cout << "SOE - Sizeof A" << "sizeof A[0]" << sizeof A << sizeof A[0] << std::endl;
    for (i = 0; i < size; i++)
    {
        sum +=A[i];
    }
    return sum;
}


int main()
{
    int A[] = { 2, 9, 8, 7, 6, 5 };
    int size = sizeof A / sizeof A[0];
    int total = sumofelement(A, size);
    std::cout << " The total sum is " << total << std::endl;
    std::cout << " Main  Sizeof A" << "sizeof A[0]" << sizeof A << sizeof A[0] << std::endl;
}


//for double airthematic

#include <iostream>
#include <stdio.h>

void Double(int* A, int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        A[i] = 2 * A[i];
    }

}


int main()
{
    int A[] = { 2, 9, 8, 7, 6, 5 };
    int size = sizeof A / sizeof A[0];
    int i;
    Double(A, size);
    for (i = 0; i < size; i++)
    {
        std::cout << A[i] << std::endl;


    }
}

