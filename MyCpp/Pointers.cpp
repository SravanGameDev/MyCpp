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

int getMin(int numbers[], int size)
{
	int min = numbers[0];
	for (size_t i = 1; i < size; i++)
	{
		if (numbers[i] < min)
			min = numbers[i];
	}

	return min;
}

int getMax(int numbers[], int size)
{
	int max = numbers[0];
	for (size_t i = 1; i < size; i++)
	{
		if (numbers[i] > max)
			max = numbers[i];
	}

	return max;
}

void getMinMax(int numbers[], int size, int* min, int* max)
{
	for (size_t i = 1; i < size; i++)
	{
		if (numbers[i] < *min)
			*min = numbers[i];
		if (numbers[i] > *max)
			*max = numbers[i];
	}
}


void OutputMultipleValues()
{
	int numbers[5] = { 5,4,-13,52,65 };

	cout << "Min is " << getMin(numbers, 5) << endl;
	cout << "Max is " << getMax(numbers, 5) << endl;

	int min = numbers[0];
	int max = numbers[0];

	cout << "\nUsing Pointers" << endl;
	getMinMax(numbers, 5, &min, &max);
	cout << "Min is " << min << endl;
	cout << "Max is " << max << endl;
}
#pragma endregion

int main()
{
	OutputMultipleValues();

	cin.get();
}