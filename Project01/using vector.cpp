#include <iostream>
#include <cstdlib>
#include <vector>

void print_vector(std::vector <int> guesses)
{
	for (int i = 0; i < guesses.size(); i++)
	{
		std::cout << guesses[i] << std::endl;
	}
}

int playGame()
{
	std::vector<int> guesses ;

	int random = rand() % 251;
	std::cout << random << std::endl;
	std::cout << "Guess a number : " << std::endl;
	while (true)
	{
		int guess;
		std::cin >> guess;
		guesses.push_back(guess);    //assigns first to guesses[guess_count] then it will increment the count
		if (guess == random)
		{
			std::cout << "hey! You win" << std::endl;
			break;
		}
		else if (guess < random)
		{
			std::cout << "It's too low" << std::endl;
		}
		else
		{
			std::cout << "It's too high" << std::endl;
		}
	}

	print_vector(guesses);
	return 0;
}

int main()
{
	srand(time(NULL));                                 //selecting a random number from the system clock time 
	int choice;

	do
	{
		std::cout << "0. Quit \n1. Play game\n";
		std::cin >> choice;

		switch (choice)
		{
		case 0:
			std::cout << "yoo nothing" << std::endl;
			break;
		case 1:
			std::cout << "let's play<< std::endl;
			playGame();
			break;
		}


	} while (choice != 1);

	return 0;
}
