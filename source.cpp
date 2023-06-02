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
#include <cstdarg>


class Numbers
{
	int m_a;
	int m_b;
	int m_c;
public:
	void setValues(int a, int b, int c)
	{
		m_a = a;
		m_b = b;
		m_c = c;
	}

	void print()
	{
		std::cout << "<" << m_a << ", " << m_b << ", " << m_c << ">";
	}

	bool isEqual(const Numbers& d)
	{
		return (m_a == d.m_a && m_b == d.m_b && m_c == d.m_c);
	}
};


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Numbers p1;
	p1.setValues(3, 4, 5);
	Numbers p2;
	p2.setValues(3, 4, 5);
	if (p1.isEqual(p2))
		std::cout << "p1 and p2 are equal\n";
	else
		std::cout << "p1 and p2 are not equal\n";
	Numbers p3;
	p3.setValues(7, 8, 9);

	if (p1.isEqual(p3))
		std::cout << "p1 and p3 are equal\n";
	else
		std::cout << "p1 and p3 are not equal\n";
	
	return 0;
}
// =================================================================================












