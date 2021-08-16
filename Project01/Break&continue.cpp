#include <iostream>

int main()
{
	std::string name = "Hello my name is unknown";

	for (int i = 0; i < name.size(); i++)
	{
		std::cout << name[i] << std::endl;

		if (name [i] == 'y')
		{
			std::cout << " you found the exact one" << std::endl;
			break;
		}
		
	}
	std::cout << "we're Done!" << std::endl;
}


#include <iostream>

int main()
{
	std::string name = "Hello my name is unknown";

	for (int i = 0; i < name.size(); i++)
	{
		if (name[i] == 'y') //will skip y and print everything
		{
			continue;
		}

		std::cout << name[i] << std::endl;


	}
	std::cout << "we're Done!" << std::endl;
}
