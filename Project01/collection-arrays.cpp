#include <iostream>

int main()
{
	int guesses[] = { 10, 20, 30, 45, 65, 56, 78, 98 };
	std::cout << guesses[6] << std::endl;
	guesses[5] = 5678;                                          //replacing the value of 5 index
	std::cout << guesses[5] << std::endl;
	                                                              //assigning values

	guesses[6] = 678;
	std::cout << guesses[6] << std::endl;

	std::cin >> guesses[4];
	std::cout << guesses[4] << std::endl;

}

//using in loops

#include <iostream>

int main()
{
	//int size = sizeof(guesses); //size of the array
	//std::cout << size << std::endl;

	//int size = sizeof(guesses) / sizeof(guesses[5]); //will get the individula size
	//std::cout << size << std::endl;

	int guesses[10] = { 10, 20, 30, 45, 65, 56, 78, 98 };
    int size = sizeof(guesses) / sizeof(guesses[0]);
	std::cout << size << std::endl;

	for (int i = 0; i < size; i++)    
	{
		std::cout << guesses[i] << "\t";   //o/p will display till 10 though mentioned 9 it will display garbaze
	}

	//int guesses[10] = { 10, 20, 30, 45, 65, 56, 78, 98 };
	//int num_element = 5;                                   //will only print till 5 0-4
	//int size = sizeof(guesses) / sizeof(guesses[0]);
	//std::cout << size << std::endl;

	//for (int i = 0; i < num_element; i++)
	//{
	//	std::cout << guesses[i] << "\t";
	//}

}
