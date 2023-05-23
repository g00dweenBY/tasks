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
#include <cctype>


template <typename T>

T max5(std::array<T, 5> arr)
{
	T result = 0;
	for (int i = 0; i < 5; ++i)
	{
		if (arr[i] > result)
			result = arr[i];
	}
	return result;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::array<double, 5> arDouble = { 5, 24, 5.8, 24.2, 15 };
	std::array<int, 5> arInt = { 55, 44, 32, 174, 8 };

	std::cout << "Max element in array double = " << max5(arDouble) << std::endl;
	std::cout << "Max element in array int = " << max5(arInt) << std::endl;

	return 0;
}











