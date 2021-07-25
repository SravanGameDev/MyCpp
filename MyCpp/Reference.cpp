#include<iostream>
using namespace std;

#define LOG(x) cout << x<<endl;

void Increment(int* value)
{
	(*value)++;
}

void main()
{
	int a = 2;

	cout << "Intial value a: ";
	LOG(a);

	//Reference
	int& ref = a;
	Increment(&ref);
	cout << "Reference value: ";
	LOG(ref);
	
	//pointer
	int* ptr;
	ptr = &a;
	Increment(ptr);
	cout << "Pointer value: ";
	LOG(ref);

	cin.get();
}