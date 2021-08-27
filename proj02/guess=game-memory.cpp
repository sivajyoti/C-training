#include <iostream>
#include <stdio.h>
#include <math.h>

int cash = 100;
void play(int bet)
{
	char c[] = { 'J', 'Q', 'K' };
	std::cout << " shuffling.... " << std::endl;
	srand(time(NULL));
	int i;
	for (i = 0; i<5; i++)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		int temp = c[x];
		c[x] = c[y];
		c[y] = temp;
	}
	int playerguess;
	std::cout << " what is the player position- 1, 2, 3?" << std::endl;
	std::cin >> playerguess;
	if (c[playerguess] - 1 == 'Q') 
	{
		cash+= 3 * bet;
		std::cout << " you won! result = Totall Cash = c[0], c[1], c[2], cash" << std::endl;
	}
	else {
		cash -= bet;
		std::cout << " you loose! resulr= Total = c[0], c[1], c[2], cash" << std::endl;
	}
}

int main()
{
	int bet;
	std::cout << " Welcome to the virtual casion" << std::endl;
	std::cout << " Total cash " << cash << std::endl;
	while (cash > 0)
	{
		std::cout << " what's your bet? $";
		std::cin >> bet;
		if (bet == 0 || (bet > cash)) break;
			play(bet);
	}
}
