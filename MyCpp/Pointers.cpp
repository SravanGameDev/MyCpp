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

void OuputPointerBasics()
{
	int n = 3;
	int* ptr2=&n;

	*ptr2 = 7;
	cout <<"N: " << n << endl;
}

#pragma endregion

#pragma region Void Pointer

void printNumber(int* numberPtr)
{
	cout<<*numberPtr<<endl;
}

void printNumber(char* charPtr)
{
	cout<<*charPtr<<endl;
}

void print(void* ptr,char type)
{
	switch (type)
	{
	case 'i': cout<<*((int*) ptr)<<endl;break;
	case 'c': cout<<*((char*) ptr)<<endl;break;

	}
}

void OutputVoidPointer()
{
	int number=5;
	char letter='a';
	print(&number,'i');
	print(&letter,'c');

}
#pragma endregion

#pragma region Pointer and arrays

// Notes:
// Address of an array
// cout<<luckyNumbers<<endl; 
// Address of an array first element, similar to previous line
// cout<<&luckyNumbers[0]<<endl; 
// Return the stored value to third location in the array
// cout<<luckyNumbers[2]<<endl; 
// Deference the array to get the data and address is added to the first element 
// cout<<*(luckyNumbers+2)<<endl; 


void OutputArraysWithPointers()
{
	int luckyNumbers[5];

	for (size_t i = 0; i < 5; i++)
	{
		cout << "Number: ";
		cin >> luckyNumbers[i];
	}

	for (size_t i = 0; i < 5; i++)
	{
		cout << *(luckyNumbers + i) << endl;
	}
}

#pragma endregion

#pragma region Return Multiple Values from a function

#pragma endregion


int main()
{
	
	cin.get();
}