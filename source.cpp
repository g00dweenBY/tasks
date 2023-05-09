#include <iostream>
#include <Windows.h>

#define PRINT_DMITRY

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
#ifndef PRINT_DMITRY
	std::cout << "My name is Dmitry" << '\n';
#endif // PRINT_DMITRY

	
	return 0;
}

