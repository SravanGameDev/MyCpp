#include<iostream>
using namespace std;

#pragma region Return type functions

/// <summary>
/// return type function
/// </summary>
/// <param name="number"> prime number</param>
/// <returns> true / flase </returns>
bool IsPrimeNumber(int number)
{
	for (size_t i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}

void PrimeNumber()
{
	int number;

	std::cout << "Number: ";
	std::cin >> number;

	for (size_t i = 1; i < number; i++)
	{
		bool isPrimeFlag = IsPrimeNumber(i);
		if (isPrimeFlag)
			std::cout << i << " is a prime number\n";
		
	}
}

#pragma endregion

#pragma region  Function Overloading

float Area(float base, float height)
{
	float value;

	value = base * height;
	value = value / 2;
	cout << "Area of a triangle is: " << value << endl;

	return value;
}

float Area(float radius)
{
	float value;

	value = 3.14 * radius * radius;
	cout << "Area of a cricle is : " << value << endl;

	return value;
}
#pragma endregion

#pragma region Generic fuctions and templates

template<typename T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void ImplementSwap()
{
	int a = 1, b = 2;
	//can not pass the value directly into the template
	Swap<int>(a, b);
	cout << a << b;
}

#pragma endregion

#pragma region Recursion and recurvise
//Question Sum numbers between m and 
//Without using recursive function
void SumNumbers(int m, int n)
{
	int sum = 0;
	if (m > n)
		Swap(m, n);

	for (size_t i = m; i <= n; i++)
		sum += i;

	cout << "Sum= " << sum << endl;

}

//Using recursive function
int recursiveSum(int m, int n)
{
	if (m > n)
		Swap(m, n);
	if (m == n)
		return m;
	return m+recursiveSum(m+1,n);
}

void logicRecursive(int m, int n)
{
	cout << "Sum= " << recursiveSum(m, n)<<endl;
}

#pragma endregion

void main()
{
	SumNumbers(2, 4);
	logicRecursive(2, 4);

	cin.get();
	
}