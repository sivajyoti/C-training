#include <iostream>
#include <string.h>

int main()
{
	int c[3][2][2] = {{{2,3}, {0,6} }, 
					{{ 6,1 }, { 9,8 }},
					{{9, 4}, { 6,7 }}};

	std::cout << " Ptint the addeess of the first location " << c << std::endl << c[0] << std::endl << *c << std::endl; //all this will give you the bas elocation address
	std::cout << *(c[0] [0] +1) << std::endl; //will print the value at the first poistion in fisrt array '3'
	std::cout << *(c[0][1] + 0) << std::endl; //will print  the value at oth position in second array means '0'
	std::cout << *(c[1][0] + 1) << std::endl; // 1
	std::cout << *(c[1][0])		<< std::endl; //6
	std::cout << *(c[2][1] + 1) << std::endl; //7
}
