#include <iostream>
#include <fstream>
#include <cstdlib>
#include <Windows.h>
#include <string>
#include <cstring>
#include <array>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cmath>
#include "math.h"
#include <cctype>
#include <functional>
#include "namesp.h"
#include <new>
/*

int fibonacci(int number)
{
	if (number == 0)
		return 0;
	if (number == 1)
		return 1;
	return fibonacci(number - 1) + fibonacci(number - 2);
}

int fibonacciIteration(int n)
{
	if (n <= 0)
		return 0;

	int first = 0;
	int second = 1;

	for (int i = 2; i < n; ++i)
	{
		int temp = first + second;
		first = second;
		second = temp;
		std::cout << second << " ";
	}
	return second;
}


for (int i = 0; i < 13; ++i)
		std::cout << fibonacci(i) << " ";


	std::cout << "\nFibonacci iteration method:\n";

	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;

	int res = fibonacciIteration(n);
	std::cout << "\nFibonacci(" << n << ") = " << res << std::endl;
*/

int factorial(int number)
{
	if (number == 1 || number == 0)
		return 1;
	return number * factorial(number - 1);
}
// =================================================================================
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Enter a your number: ";
	int number;
	std::cin >> number;
	std::cout << "factorial(!" << number << ") = " << factorial(number) << std::endl;

	

	return 0;
}
// =================================================================================












