#include <iostream>
#include<string>

int main()
{
	std::string none;
	std::cin >> none;
	std::string left_over; // cin will only pick up the sentense which doesn't have the spaces. If has the spaces, it will only pick up the word beforce the space
	std::cin >> left_over;
	std::cout << none << std::endl;
	std::cout << left_over << std::endl;
}

int main()
{
	std::string name;
	getline(std::cin, name); //getlibe will pick up the entore text sent by the user irrespective of the spaces in b/w
	std::cout << name << std::endl;
}
	
