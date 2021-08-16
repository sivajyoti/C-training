#include <iostream>
#include <vector>

void print_vector(std::vector<int> &data)
{
	data.push_back (14);                             //it will get append to that data
	for(int i = 0; i<data.size(); i++)
	{
		std::cout << data[i] << "\n";
	}
	std::cout << "\n";
}

int main()
{
	std::vector <int> data{ 10, 34, 56, 78, 96 };
	print_vector (data);
	print_vector(data);
	print_vector(data);
	print_vector(data);
}
