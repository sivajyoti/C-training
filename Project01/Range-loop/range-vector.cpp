#include <iostream>
#include <vector>
#include <array>

int main()
{
	std::vector<int> data = { 1, 2, 3, 4, 5 };
	
	for (int n : data)						//here n is the temporary variable to store that value
	{	
	std::cout << n << std::endl;
	}
	std::cout << std::endl;
}
