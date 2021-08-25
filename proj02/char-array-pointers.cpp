#include <iostream>
#include <string.h>

void print(char* c)
{
    int i = 0;
    while (c[i] != '\0')
    {
        std::cout << c[i];
        i++;
    }
    std::cout << std::endl;
}
int main()
{
    char c[] = "hello";
    print(c);
}


//the other way

#include <iostream>
#include <string.h>

void print(char* c)
{
	while (*c !='\0')
	{
		std::cout << *c;
		c++;
	}
	std:: cout << std::endl;
}

int main()
{
	char c[] = "Hello";
	print(c);
}
