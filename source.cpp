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
/*int calculateDigitSum(int num)
{
	
	* -------------------iteration------------------
	int sum = 0;

	while (num != 0)
	{
		int digit = num % 10;
		std::cout << "digit = " << digit << std::endl;
		sum += digit;
		num /= 10;

		std::cout << "num = " << num << std::endl;
	}
	return sum;

	/--------------------recursion--------------------
	if (num < 10)
		return num;
	else
		return calculateDigitSum(num / 10) + num % 10;
	
	
}
*/
// =================================================================================

/*
	* while (num != 0)
	{
		if (num == 0)
		{
			std::cout << 1 << " ";
			break;
		}
		if (num % 2 == 0)
			std::cout << 0 << " ";
		if (num % 2 == 1)
			std::cout << 1 << " ";
		num /= 2;

	}
	*/

void convertationToBinary(int number)
{
	if (number == 0) return;
	convertationToBinary(static_cast<unsigned int>(number) / 2);
	std::cout << number % 2 << " ";
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Enter a your number: ";
	int number;
	std::cin >> number;
	std::cout << number << " binary convertation: \n";

	convertationToBinary(number);


	

	return 0;
}
// =================================================================================












