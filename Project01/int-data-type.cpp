include <iostream>
#include <climits>

int main()
{
int x = 5678;
std::cout << x << std::endl;
}
 
{
  short a = 55656;//it is priniting some garbage or signed numbers due to the size as short has 2 bytes
  std::cout << a << std::endl;
	return 0;
}

{
long l = 5679823232322;
std::cout << l << std::endl;
return 0;
}

//Knowing Min & MAX numbers

{
	std::cout << SHRT_MAX << std::endl; //out says the max num of short
  std::cout << USHRT_MAX << std::endl
}

{
	std::cout << SHRT_MIN << std::endl; //out says the min num of short

}

{
  std::cout << INT_MAX << std:: endl;
}

{
	std::cout << INT_MIN << std::endl; //out says the max num of short
}

{
	std::cout << LONG_MAX << std::endl; //out says the max num of short
}


{
	std::cout << LONG_MIN << std::endl; //out says the max num of short
}


 
