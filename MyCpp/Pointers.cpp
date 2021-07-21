#include<iostream>
using namespace std;

#pragma region Pointer Syntax

void PointerBasics()
{
	int n = 5;
	// address of n
	cout << &n << endl;
	// address of n is stored in pointer data type
	int* ptr = &n;
	// address of &n -> ptr
	cout << ptr << endl;
	// *ptr -> &n -> n = 5
	// Sequence of the output
	cout << *ptr << endl;
	// 10 is assigned to *ptr 
	*ptr = 10;
	cout << *ptr << endl;
	// *ptr -> &n -> n = 10
	cout << n << endl;

	//Notes:
	//Pointers can store only address of the variable
	//Pointers can access the base class data
}

#pragma endregion

int main()
{
	int n = 3;
	int* ptr2=&n;

	*ptr2 = 7;
	cout <<"n: " << n << endl;

	cin.get();
}