#include <iostream>
#include <string>

int main()
{
	std::string Value = "what the hell is this man!";
	std::cout << Value.replace(Value.find("hell "), 3, "hello!"); // it will replace the hell with hello!
  
	std::string Value = "what the hell is this"; 
	std::cout << Value.substr( 5, 3); // it will extract tha part and give it as an output
  std::cout << Value.find_first_of("hell");
  
}
