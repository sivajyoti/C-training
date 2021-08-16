#include <iostream>
#include <vector>

int main()
{
	std::vector <int> data = { 10, 34, 78, 12, 75, 67 };
	data.push_back(55);
	std::cout << data[data.size() - 1] << std::endl; //output 55
	data.pop_back();
	std::cout << data.size() << std::endl; //total element size 6
	std::cout << data[4] << std::endl;     //will get 4th element 75
}
