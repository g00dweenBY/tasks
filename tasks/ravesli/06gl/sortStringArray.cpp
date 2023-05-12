/*

#include <iostream>
#include <Windows.h>
#include <string>
#include <utility>
#include <algorithm>
#include "add.h"


void sorteredArray(std::string *names, int length)
{

	for (int startIndex = 0; startIndex < length; ++startIndex)
	{
		int smallIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (names[currentIndex] < names[smallIndex])
				smallIndex = currentIndex;
		}

		std::swap(names[startIndex], names[smallIndex]);
	}

}


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Enter the number of names: ";
	int numberNames;
	std::cin >> numberNames;

	string* names = new string[numberNames];

	for (int i = 0; i < numberNames; ++i)
	{
		std::cout << "Enter name #" << i + 1 << ": ";
		std::cin >> names[i];
	}

	sorteredArray(names, numberNames);

	std::cout << "NumberNames = " << numberNames << std::endl;

	std::cout << "Sortered array of names" << '\n';

	for (int i = 0; i < numberNames; ++i)
	{
		std::cout << "Names #" << i + 1 << " : " << names[i] << '\n';
	}
	delete[] names;
	names = nullptr;


	return 0;
}


*/