#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i <= 10; i++)
	{
		cout << i << endl;
	}
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	int fact = 5;
	int factorial = fact;

	for (int i = factorial - 1; i > 1; i--)
	{
		factorial = factorial * i;
	}
	cout << " factorial of " << fact << ":" << factorial << endl;
}

#include <iostream>

using namespace std;
int main()
{
	int factorial = 9;
	int i = factorial -1;

	while (i > 1)
	{
		factorial *= i;
		i--;
	}
	cout << factorial << endl;
 }

#include <iostream>

int main()
{
	std::string Data = "heyyou";
	std::string guess;
	do
	{
		std::cout << " guess the data is :" << std::endl;
		std::cin >> guess;

	} while (guess != Data);
}
