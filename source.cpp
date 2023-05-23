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

template<typename T>
T maxN(std::vector<T> ar, int count);

const char* maxN(const char* ar[], int count);

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::vector<int> arInt = { 22,32,44,55,78 };
	std::vector<double> arDouble = { 2.48, 3.96, 5.8 };
	std::cout << "Max number in array int: " << maxN(arInt, 4) << '\n';
	std::cout << "Max number in array double: " << maxN(arDouble, 3) << '\n';


	const char* str[] = {
		"Hello",
		"World",
		"This is a long string",
		"Short",
		"Testing",
	};
	int count = sizeof(str) / sizeof(str[0]);

	const char* longest = maxN(str, count);
	std::cout << "longest string: " << &longest << std::endl;
	return 0;
}


template<typename T>
T maxN(std::vector<T> ar, int count)
{
	T result = 0;
	for (int i = 0; i < count; ++i)
		result = ar[i];
	return result;
}
const char* maxN(const char* ar[], int count)
{
	const char* str = ar[0];
	for (int i = 1; i < count; ++i)
	{
		if (strlen(ar[i]) > strlen(str))
			str = ar[i];
	}
	return str;
}













