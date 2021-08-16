#include <iostream>

void play_game()
{
	std::cout << " Game is being played" << std::endl;
}

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
			play_game();
			break;
		}
	} while (choice != 1); //if we select 1, the play_game fun op will display, if we select 0 loop will continue
		
}

//Using random number to guess

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime> 

void play_game()
{
	int random = rand() % 255;
	std::cout << random << std::endl;
	std::cout << " guess number : " << std::endl;
	while (true)
	{
		int guess;
		std::cin >> guess;
		if (guess == random)
		{
			std::cout << " You are win !" << std::endl;
		}
		else if (guess < random)
		{
			std::cout << " It's too low " << std::endl;
		}
		else
		{
			std::cout << " It's too high " << std::endl;
		}
	}
}

int main()
{
	srand(time(NULL));
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
			play_game();
			break;
		}
	} while (choice != 1);

}
