#include <iostream>
#include <string>

int main()
{
	std::string Value = " Hey ";
	Value.append(" there ");

	std::cout << Value << std::endl;

	std::string into = "Jhon";
	into.insert(3, "is there");

	std::cout << into << std::endl;

	std::string remove = "Hello";
	remove.erase(3);
	std::cout << remove << std::endl;

	std::string last = "new";
	last.erase(last.length() - 1); //remove the last char
	std::cout << last << std::endl;
  
  std::string into = "Jhon";
	into.replace(0,3, "is there");
	std::cout << into << std::endl;

}
