#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <Windows.h>








int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	std::cin >> n;
	int arr[n];

	for (int i = 0; i < n; ++i)
		std::cin >> arr[i];

	for (int i = n - 1; i >= 0; --i)
	{
		std::cin >> arr[i];
		std::cout << arr[i] << " ";
	}
	
	
	return 0;
}
// =================================================================================

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

	RGBA color(0, 246, 55);
	color.print();
	======================================================================================

	======================================================================================

class Something
{
private:
	double m_length = 3.5;
	double m_width = 3.5;
public:
	Something(double length, double width): m_length(length), m_width(width)
	{

	}
	Something(){}

	void print()
	{
		std::cout << "length: " << m_length << " and width: " << m_width << '\n';
	}
};
	Something a;
	a.print();
	======================================================================================

	======================================================================================

class Employee
{
private:
	int m_id;
	std::string m_name;

public:
	Employee(int id = 0, const std::string& name = "") : m_id(id), m_name(name)
	{
		std::cout << "Employee " << m_name << " created\n";
	}
	Employee(const std::string& name) : Employee(0, name) {}
};
Employee a;
	Employee b("Dmitry");
	======================================================================================


	--------------------------------------ÄÅÑÒÐÓÊÒÎÐÛ---------------------------------
	======================================================================================
	class Massiv
{
private:
	int* m_arr;
	int m_length;

public:
	Massiv(int length)
	{
		assert(length > 0);

		m_arr = new int[length];
		m_length = length;
	}
	~Massiv()
	{
		delete[] m_arr;
	}
	void setValue(int index, int value) { m_arr[index] = value; }
	int getValue(int index) { return m_arr[index]; }

	int getLength() {return m_length; }
};
Massiv arr(15);

	for (int i = 0; i < 15; ++i)
		arr.setValue(i, i + 1);

	std::cout << "The value of element #7 is " << arr.getValue(7);

	class Another
{
private:
	int m_nID;

public:
	Another(int nID)
	{
		std::cout << "Constructing Another " << nID << "\n";
		m_nID = nID;
	}
	~Another()
	{
		std::cout << "Destructing Another " << m_nID << "\n";
	}

	int getID() { return m_nID; }
};

Another obj(1);
	std::cout << obj.getID() << '\n';

	Another* pObj = new Another(2);
	std::cout << pObj->getID() << '\n';
	delete pObj;
	======================================================================================

	======================================================================================
	class Another
{
private:
	int m_number;

public:
	Another(int number)
	{
		setNumber(number);
	}
	void setNumber(int number) { m_number = number; }
	int getNumber() { return m_number; }
};
Another another(3);
	std::cout << another.getNumber() << std::endl;
	======================================================================================
*/










