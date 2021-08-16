#include <iostream>
#include <vector>
#include <array>

void print_array(std::array <int, 251> guesses, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << guesses[i] << std::endl;
	}
}

void play_game()
{
	std::array <int, 251> guesses;
		int count = 0;
	
	int random = rand() % 251;
	
	std::cout << random << std::endl;
	std::cout << " guess the random value : ";
		while (true)
		{
			int guess;
			std::cin >> guess;
			guesses[count++] = guess;
			if (guess == random)
			{
				std::cout << " hey! you are win " << std::endl;
				break;

			}
			else if(guess < random) 
			{
				std::cout << " guess is too low " << std::endl;
			}
			else 
			{
			std::cout << " Guess to too high" << std::endl;
}
		}
		print_array(guesses, count);

}



int main()
{
	srand(time(NULL));
	int choice;


	do
	{
		std::cout << " 0. Quit Play" << std::endl << " 1.Play Game" << std::endl;
		std::cin >> choice;
		switch (choice)
		{
		case 0:
			std::cout << " Thanks for nothing! " << std::endl;
			break;
		case 1:
			std::cout << " Let's play the Game " << std::endl;
			play_game();
			break;
		}


	} while (choice != 1);

}
