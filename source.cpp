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
*/

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


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	std::cout << "#1\n";
	Ball b1;
	b1.print();

	std::cout << "#2\n";
	Ball b2(44.8);
	b2.print();

	std::cout << "#3\n";
	Ball b3("black");
	b3.print();
	

	
	
	
	return 0;
}
// =================================================================================












