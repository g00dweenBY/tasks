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

std::string toUpperString(std::string& str)
{
	std::string res = str;
	for (char& c : res)
		c = std::toupper(c);
	return res;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Enter a string (q to quit) :";
	std::string str;
	
	while (std::cin >> str)
	{
		if (str == "q")
		{
			std::cout << "Bye";
			break;
		}
		std::cout << toUpperString(str) << "\n";

		std::cout << "Next string (q to quit): ";
	}


	return 0;
}








