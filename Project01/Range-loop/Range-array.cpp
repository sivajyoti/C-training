#include <iostream>
#include <vector>
#include <array>


int main()
{
	std::array <int, 6> data = { 2, 3, 4, 5, 6 };

	for (int n : data)
	{
		std::cout << n << std::endl;      //As the size is 5, I'll get garbaze/0 at the 6th position
	}
	std::cout << std::endl;
}
