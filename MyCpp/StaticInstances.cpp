#include<iostream>

/* Topic Notes: Static
* it is to a specify a private in a cpp file.
* it create only a instance, if there are different instances of class.
* it stores the information which can be shared across all class instances.
* static method can only access the static variable inside the class.
* instead of a global variable, static global variable is helpful.
* Examples: score, lives
*/

#pragma region Static

// I used struct because the members function and variable are default public
struct ExEntity
{
	static int x, y;

	static void Print()
	{
		std::cout << x << std::endl;
		std::cout << y << std::endl;
	}
};

int ExEntity::x;
int ExEntity::y;

void  OutputStatic()
{
	ExEntity e;
	e.x = 2;
	e.y = 5;

	ExEntity::x = 8;
	ExEntity::y = 10;

	e.Print();
	ExEntity::Print();
}

#pragma endregion

#pragma region Local Static

void function(char stat)
{
	/* Single instance is created so the value of i is stored to increment */
	if (stat == 's')
	{
		static int i = 0;
		i++;
		std::cout<<"Static value: " << i << std::endl;
	}
	else
	{
		int i = 0;
		i++;
		std::cout << "Value: " << i << std::endl;
	}
}


void OutputLocalStatic()
{
	int length = 10;
	/* Value increase based on previous data which is an instance for all functions */
	for (size_t i = 0; i < length; i++)
		function('s');

	/* It creates a new every time whenever it exists out of the scope */
	for (size_t i = 0; i < length; i++)
		function(NULL);
}

#pragma endregion
