#include <iostream>
#include <math.h>


using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "Russian");
	int number;
	cout << "\n\t\tДеление числа на разряды";
	cout << "\nВведите пятизначное число: ";
	cin >> number;
	
	int n1 = number % 100000 / 10000;
	int n2 = number % 10000 / 1000;
	int n3 = number % 1000 / 100;
	int n4 = number % 100 / 10;
	int n5 = number % 10;
	cout << "\n1 цифра равна " << n1;
	cout << "\n2 цифра равна " << n2;
	cout << "\n3 цифра равна " << n3;
	cout << "\n4 цифра равна " << n4;
	cout << "\n5 цифра равна " << n5;
	

	return 0;
}