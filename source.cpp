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

/*
* std::string version1(const std::string& s1, const std::string& s2);
const std::string& version2(std::string& s1, const std::string& s2);
const std::string& version3(std::string& s1, const std::string& s2);
* 
std::string version1(const std::string& s1, const std::string& s2)
{
	std::string temp;
	temp = s2 + s1 + s2;
	return temp;
}


const std::string &version2(std::string& s1, const std::string& s2)
{
	s1 = s2 + s1 + s2;
	return s1;
}

const std::string& version3(std::string& s1, const std::string& s2)
{
	std::string temp;
	temp = s1 + s2 + s1;
	return temp;
}

	std::string input;
	std::string copy;
	std::string result;

	std::cout << "Enter a string: ";
	std::getline(std::cin, input);
	copy = input;

	std::cout << "Your string as entered: " << input << std::endl;

	result = version1(input, "***");
	std::cout << "Your string enhanced: " << result << std::endl;
	std::cout << "Your original string: " << input << std::endl;

	result = version2(input, "###");
	std::cout << "Your string enhanced: " << result << std::endl;
	std::cout << "Your original string: " << input << std::endl;

	std::cout << "Resseting original string: " << input << std::endl;

	input = copy;
	result = version3(input, "@@@");
	std::cout << "Your string enhanced: " << result << std::endl;
	std::cout << "Your original string: " << input << std::endl;




	==============================================================
	void fileIt(std::ostream& os, double fo, const double fe[], int n)
{
	std::ios_base::fmtflags initial;

	initial = os.setf(std::ios_base::fixed);
	os.precision(0);
	os << "Focal length of objective: " << fo << "mm\n";
	os.setf(std::ios::showpoint);
	os.precision(1);
	os.width(12);
	os << "f.1. eyepiece";
	os.width(15);
	os << "magnification" << std::endl;
	for (int i = 0; i < n; ++i)
	{
		os.width(12);
		os << fe[i];
		os.width(15);
		os << int(fo / fe[i] + 0.5) << std::endl;
	}
	os.setf(initial);
}
void fileIt(std::ostream& os, double fo, const double fe[], int n);
const int LIMIT = 5;

	std::ofstream fout;
	const char* fn = "ep-data.txt";
	fout.open(fn);
	if (!fout.is_open())
	{
		std::cout << "Con\'t open " << fn << ". Bye\n";
		exit(EXIT_FAILURE);
	}

	double objective;
	//¬вод фокусного рассто€ни€ объектива телескопа в мм
	std::cout << "Enter the focal length of your "
		"telescope objective in mm: ";
	std::cin >> objective;
	double eps[LIMIT];

	//¬вод фокусного рассто€ни€ окул€ров в мм
	std::cout << "Enter the local lengths, in mm, of " << LIMIT << " eyepiecess:\n";
	for (int i = 0; i < LIMIT; ++i)
	{
		std::cout << "Eyepiece #" << i + 1 << ": ";
		std::cin >> eps[i];
	}

	fileIt(fout, objective, eps, LIMIT);
	fileIt(std::cout, objective, eps, LIMIT);
	std::cout << "Done\n";
	==============================================================


	==============================================================
	const int arrSize = 80;

char* left(const char* str, int n = 1);
	char* left(const char* str, int n)
{
	if (n < 0)
		n = 0;
	char* p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; ++i)
		p[i] = str[i];
	while (i <= n)
		p[i++] = '\0';
	return p;
}

		char sample[arrSize];
	std::cout << "Enter a string:\n";
	std::cin.get(sample, arrSize);
	char* ps = left(sample, 4);
	std::cout << ps << std::endl;
	delete[] ps;
	ps = left(sample);
	std::cout << ps << std::endl;
	delete[] ps;
	==============================================================


	==============================================================
	unsigned long left(unsigned long num, unsigned ct);
char* left(const char* str, int n = 1);

	unsigned long left(unsigned long num, unsigned ct)
{
	unsigned digits = 1;
	unsigned long n = num;

	if (ct == 0 || num == 0)
		return 0;
	while (n /= 10)
		digits++;
	if (digits > ct)
	{
		ct = digits - ct;
		while (ct--)
			num /= 10;
		return num;
	}
	else
		return num;
}

char* left(const char* str, int n)
{
	if (n < 0)
		n = 0;
	char* p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++)
		p[i] = str[i];
	while (i <= n)
		p[i++] = '\0';
	return p;
}

	const char* trip = "Zdarova!";
	unsigned long n = 12345678;
	int i;
	char* temp;
	for (i = 1; i < 10; i++)
	{
		std::cout << left(n, i) << std::endl;
		temp = left(trip, i);
		std::cout << temp << std::endl;
		delete[] temp;
	}

	==============================================================

	==============================================================
	template <typename T>
void swap(T& a, T& b);

	int i = 10;
	int j = 20;
	std::cout << "i,j = " << i << ", " << j << std::endl;
	std::cout << "Swapping i, j" << std::endl;
	swap(i, j);
	std::cout << "i,j = " << i << ", " << j << std::endl;

	double di = 5.88;
	double dj = 24.99;

	std::cout << "di, dj = " << di << ", " << dj << std::endl;
	std::cout << "Swapping di, dj" << std::endl;
	swap(di, dj);
	std::cout << "di, dj = " << di << ", " << dj << std::endl;

	template <typename T>
void swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}


template <typename T>
void swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <> void swap<job>(job& j1, job& j2)
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void show(job& j)
{
	std::cout << j.name << ": $" << j.salary << " on floor " << j.floor << std::endl;
}
	std::cout.precision(2);
	std::cout.setf(std::ios::fixed, std::ios::floatfield);

	int i = 10, j = 20;

	std::cout << "i, j = " << i << ", " << j << ".\n";
	std::cout << "Swap!\n";
	swap(i, j);
	std::cout << "Now i, j = " << i << ", " << j << ".\n";

	job sue = { "Susan Yaffee", 73000.60, 7 };
	job sidney = { "Sidney Yaffee", 78060.9, 9 };
	std::cout << "Befor job swapping: \n";
	show(sue);
	show(sidney);
	swap(sue, sidney);

	std::cout << "After swapping:\n";
	show(sue);
	show(sidney);


	template <typename T>
void swap(T& a, T& b);

struct job
{
	std::string name;
	double salary;
	int floor;
};

template <> void swap<job>(job& j1, job& j2);
void show(job& j);
	==============================================================

template <typename T>
void showArray(T arr[], int n)
{
	std::cout << "template A\n";
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
template<typename T>
void showArray(T * arr[], int n)
{
	std::cout << "template B\n";
	for (int i = 0; i < n; i++)
		std::cout << *arr[i] << " ";
	std::cout << std::endl;
}

template<typename T>
void showArray(T arr[], int n);

template<typename T>
void showArray(T* arr[], int n);

struct debts
{
	char name[50];
	double amount;
}

	int things[6] = { 13,22,44,123,656,328 };
	struct debts mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Fox King", 1300.0},
		{"Iby Stract", 2220.0}
	};

	double* pd[3];

	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	std::cout << "Listing Mr. E's counts of things:\n";
	showArray(things, 6);
	std::cout << "Listing Mr. E's debts:\n";

	showArray(pd, 3);

	for(int i = 0; i < 10; +)


	void iqoute(int t)
{
	std::cout << "int = " << t << std::endl;
}

void iqoute(double t)
{
	std::cout << "double = " << t << std::endl;
}

void iqoute(std::string t)
{
	std::cout << "string = " << t << std::endl;
}

		
	iqoute(2);
	iqoute(32.89);
	iqoute("Dmitry");


	Box a = { "Box #1", 22, 33, 44, 78 };
	Box b = { "Box #2", 11.2, 44.8, 56.74, 94 };

	Box res = swap(a, b);

	std::cout << "res = " << res.volume << std::endl;

	struct Box
{
	std::string maker;
	float height;
	float width;
	float length;
	float volume;
};




Box swap(Box &a, Box &b)
{
	if (a.volume > b.volume)
		return a;
	else
		return b;
}

*/


struct CandyBar
{
	std::string boxName;
	double width;
	int quantityCalories;
};


void printCandyBar(const CandyBar& bar);
void setValuesCandyBar(CandyBar& bar, const std::string box = "Default box", double w = 25.5, int q = 5)
{
	bar.boxName = box;
	bar.width = w;
	bar.quantityCalories = q;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	CandyBar bar;

	setValuesCandyBar(bar, "don't default");
	printCandyBar(bar);

	return 0;
}


void printCandyBar(const CandyBar& bar)
{
	std::cout << "name: " << bar.boxName << std::endl;
	std::cout << "width: " << bar.width << std::endl;
	std::cout << "Quantity of Calories: " << bar.quantityCalories << std::endl;
}







