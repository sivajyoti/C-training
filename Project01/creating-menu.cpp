#include <iostream>

int main()
{
	std::cout << " 0. Quit Play" << std::endl << " 1.play " << std::endl;
	int choice;
	std::cin >> choice;

	switch (choice)
	{
	case 0:
		std::cout << " yo nothing " << std::endl;
		break;
	case 1:
		std::cout << " let's play " << std::endl;
		break;
	}
}

//use do while
#include <iostream>

int main()
{
		int choice;
	
	do
	{
		std::cout << " 0. Quit Play" << std::endl << " 1.Play Game " << std::endl;
		std::cin >> choice;
		switch (choice)
		{
		case 0:
			std::cout << " yo nothing " << std::endl;
			break;
		case 1:
			std::cout << " let's play " << std::endl;
			break;
		}
	} while (choice != 1); // will keep this loop untill we select 1
		
}

