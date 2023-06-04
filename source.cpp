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
#include <cassert>
#include <cstdint>

/*
* ==================================================================================
class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(int numerator = 0, int denominator = 1)
	{
		assert(denominator != 0);
		m_numerator = numerator;
		m_denominator = denominator;
	}

	int getNumerator() { return m_numerator; }
	int getDenominator() { return m_denominator; }
	double getValue() { return static_cast<double>(m_numerator) / m_denominator; }
};
Fraction drob;

	std::cout << drob.getNumerator() << "/" << drob.getDenominator() << '\n';

	======================================================================================

	======================================================================================
	class A
{
public:
	A() { std::cout << "A\n"; }
};
class B
{
private:
	A m_a;

public:
	B() { std::cout << "B\n"; }
};
	B b;
	======================================================================================

	======================================================================================
	class Ball
{
private:
	std::string m_color;
	double m_rad;
public:
	Ball(double radius)
	{
		m_color = "white";
		m_rad = radius;
	}
	Ball(const std::string& color = "red", double radius = 58.12)
	{
		m_color = color;
		m_rad = radius;
	}

	void print()
	{
		std::cout << "color: " << m_color << "\nradius: " << m_rad << std::endl;
	}

};

	std::cout << "#1\n";
	Ball b1;
	b1.print();

	std::cout << "#2\n";
	Ball b2(44.8);
	b2.print();

	std::cout << "#3\n";
	Ball b3("black");
	b3.print();
	======================================================================================

	======================================================================================
		
	Values(): m_value1(3), m_value2(3.33), m_value3('S')
	{
	}
	class Values
{
private:
	int m_value1;
	double m_value2;
	char m_value3;
	int m_arr[5];
public:
	Values(int v1, double v2, char v3 = 'S')
		: m_value1(v1), m_value2(v2), m_value3(v3), m_arr{3,2,4,5,7}
	{

	}

	void print()
	{
		std::cout << "Values(" << m_value1 << ", " << m_value2 << ", " << m_value3 << ")\n";
	}
};
Values v(44, 55.984);
	v.print();

	class A
{
public:
	A(int a) { std::cout << "A " << a << '\n'; }
};

class B
{
private:
	A m_a;
public:
	B(int b)
		:m_a(b - 1)
	{
		std::cout << "B " << b << '\n';
	}
};

	======================================================================================
*/

class RGBA
{
private:
	std::uint8_t m_red;
	std::uint8_t m_green;
	std::uint8_t m_blue;
	std::uint8_t m_alpha;
public:
	RGBA(int r = 0, int g = 0, int b = 0, int a = 255) : m_red(r), m_green(g), m_blue(b), m_alpha(a) {};
	void print()
	{
		std::cout << "r=" << static_cast<int>(m_red) <<
			" g=" << static_cast<int>(m_green) <<
			" b=" << static_cast<int>(m_blue) <<
			" a=" << static_cast<int>(m_alpha) << std::endl;
	}
};


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	RGBA color(0, 246, 55);
	color.print();


	return 0;
}
// =================================================================================












