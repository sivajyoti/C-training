#include <iostream>

#define num 56				//Defining macro's
int main()
{
	const int value = 5;		//defining the constants, we can't change the value
	enum { data = 15 };			//enum used to declare the enumeration
	
	std::cout << " The constant value is "<< value << std::endl;
	std::cout << " The enumeration value is " << data << std::endl;
	std::cout << " The macro type constant valuye is " << num << std::endl;
	return 0;
}

  
