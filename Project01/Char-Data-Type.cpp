#include <iostream>
#include <climits>

int main()
{
char a = 'X';
std::cout <<  a << std::endl;        //It will print the chr that stored in a

char a = 'Y';
std::cout << (int) a << std::endl;   //Outpot will display the 'y' ASCII number as we are ca;;ing char as integer

char r = 57;
std::cout << r << std::endl;         //the o/p is 9, 9 is the ascii value of 

 
  char s = 68;
  
  std::cout << s << std:: endl;       //it will print the char which hold this ASCII valur (D)
  std::cout << (int) s << std:: endl; //it will print the Ascii value as we are difing with the integer
  
std::cout << "size of char" << sizeof(char) << std::endl; 
std::cout << "MIN size of CHAR is " << CHAR_MIN << std::endl;
std::cout << "MAX size of CHAR is " << CHAR_MAX << std::endl;

}


