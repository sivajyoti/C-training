#include <iostream>

int main()
{
	int a = 0.987;
	int b = 10;

	if (b <= a)
	{
		std::cout << b << std::endl;
	}
	else if (a >= b)
	{
		std::cout << a << std::endl;
	}
	else
	{
		std::cout << " No Value is matched " << std::endl;
	}
	

}

int main()
{
	std::cout << " what is your score "; //asking the input from use
	int grade;
	std::cin >> grade;

	if (grade <= 8.5)
	{
		std::cout << " pass " << std::endl;
	}
	else if (grade >= 9.5)
	{
		std::cout << " outstanding " << std::endl;
	}
	else
		std::cout << " Score is not matched " << std::endl;

}
