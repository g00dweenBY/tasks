#include <iostream>
#include <math.h>


using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите цифры a, b, c:\n";
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	cout << "\nВычисляем по формуле: x=(a + b - c / a) + c * a * a - (a + b)";
	double x = (a + b - c / a) + c * a * a - (a + b);
	cout << "\nx=" << x;
	return 0;
}