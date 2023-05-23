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


struct Stringy
{
	std::string str;
	int ct;
};
void show(const std::string str);
void show(const std::string str, int count);

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Stringy beany;

	char testing[] = "Something text what it used to be.";
	

	show("hello", 5);
	show("Bye!");

	return 0;
}

void show(const std::string str)
{
	std::cout << str << '\n';
}

void show(const std::string str, int count)
{
	for(int i = 0; i < count; ++i)
		std::cout << "String #" << i + 1  << ": " << str << '\n';
}

void set(Stringy& strc, std::string str)
{
	strc.str = str;
}









