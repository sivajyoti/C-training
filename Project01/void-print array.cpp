

#include<iostream>

void print_array (int array[])
{
	std::cout << sizeof(array) << std::endl;
}

int main()
{
	int guesses[] = { 10, 20, 23, 34, 56, 79 };
	std::cout << sizeof(guesses) << std::endl;
	print_array (guesses);
}



//Hw to use array inside of the function

#include<iostream>

void print_array(int array[], int size)
{
	for(int i =0; i< size; i++)
	std::cout << array[i] << std::endl;
}

int main()
{
	int guesses[] = { 10, 20, 23, 34, 56, 79 };
	int size = sizeof(guesses) / sizeof(int);
	print_array(guesses, 6);
}

