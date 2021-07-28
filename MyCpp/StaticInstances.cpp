#include<iostream>

/* Notes:
* it is to a specify a private in a cpp file.
* it create only a instance, if there are different instances of class.
* it stores the information which can be shared across all class instances.
* static method can only access the static variable inside the class.
* instead of a global variable, static global variable is helpful.
*/

// I used struct because the members function and variable are default public
struct Entity
{
	static int x, y;

	static void Print()
	{
		std::cout << x << std::endl;
		std::cout << y << std::endl;
	}
};

int Entity::x;
int Entity::y;

int  main()
{
	Entity e;
	e.x = 2;
	e.y = 5;

	Entity::x = 8;
	Entity::y = 10;

	e.Print();
	Entity::Print();

	std::cin.get();
}

