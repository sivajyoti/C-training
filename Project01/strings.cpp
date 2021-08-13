#include <iostream>
#include <string>

int main()
{
	std::string Name = "INDIA";

	std::cout << Name << std::endl;
	std::cout << Name + " is my country " << std::endl;
	std::cout << Name[3] << std::endl;


	std::string data = " Hey ";
	std::string concat = data + " this is jhon ";
	std::cout << concat << std::endl;

	concat += " I'm waiting for you ";

	std::cout << concat << std::endl;
	std::cout << concat.length() << std::endl;

	std::string empty;

	std::cout << empty << std::endl;
	std::cout << empty.length() << std::endl;

}
