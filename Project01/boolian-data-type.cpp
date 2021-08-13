#include <iostream>

int main()

{
	bool name = false;
	std::cout << name << std::endl;

	bool age = 1;
	std::cout << age << std::endl;

	bool count = 0;
	std::cout << count << std::endl;

	bool num = -1;
	std::cout << num << std::endl;

	std::cout << std::boolalpha << name << std::endl; //boolalphas is an manipulator how we use endl manipulator, by giving boolalpha we can actually see the false and true as outpot
	std::cout << std::boolalpha << age << std::endl;
	std::cout << std::boolalpha << count << std::endl;
	std::cout << std::boolalpha << num << std::endl;
  }
