#include <iostream>
#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	int c;
	int (*P) (int, int);
	P = &Add;         //function
	c = (*P) (15, 9); //derefering the value
	std::cout << c << std::endl;

}


//creating diff functions

#include <iostream>
#include <stdio.h>

void sayHello()
{
	std::cout << " Hello " << std::endl;
}

int main()
{
	void(*p) ();
	p = sayHello;
	p();
}

//string

#include <iostream>
#include <stdio.h>

void sayhi(char* name)
{
	std::cout << " hi " << name << std::endl;
	
}

int main()
{
	void(*s) (char*);
	s = sayhi;
	char c[8] = " jyothi";
	s(c);

}
