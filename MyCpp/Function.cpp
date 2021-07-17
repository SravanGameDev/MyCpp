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

	for (int i = 1; i < number; i++)
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

double Area(float radius)
{
	double value;

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

	for (int i = m; i <= n; i++)
		sum += i;

	cout << "Sum= " << sum << endl;

}

//Using recursive function
int LogicRecursiveSum(int m, int n)
{
	if (m > n)
		Swap(m, n);
	if (m == n)
		return m;
	return m + LogicRecursiveSum(m + 1, n);
}

int LogicRecursiveFactorial(int n)
{
	if (n == 1)
		return n;

	return n * LogicRecursiveFactorial(n - 1);
}

#pragma endregion

void MainMethod()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	cout << "Factorial= " << LogicRecursiveFactorial(number) << endl;
	cout << "Sum= " << LogicRecursiveSum(number, 5) << endl;

	cin.get();
}
