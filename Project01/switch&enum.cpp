#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int Marks;
	cout << " How much you scored : "; 
	std::cin >> Marks;

	switch (Marks)
	{
	case88: 
		cout << "My Score is 88 " << endl;
		break;
	case89:
	case90:
	case91:
		cout << " My score is 89 or 90 or 91 " << endl;
		return 0;
	default:
		cout << " marks scored are " << Marks << endl;
		break;
	}

}

#include <iostream>

int main()
{
	enum season { winter, summer, spring };
	season here = winter;

	switch (here)
	{

	case winter:
			std::cout << " winter is not yet here" << std::endl;
			break;
	case summer:
				break;
	case spring:
					break;
	}

	
}
  

#include <iostream>

int main()
{
	enum class Season { winter, summer, spring };
	Season there = Season::spring;
switch (there)
{
	case Season::winter:
		break;
	case Season::summer:
			break;
	case Season::spring:
				std::cout << " Let's enjoy! " << std::endl;
}
}
