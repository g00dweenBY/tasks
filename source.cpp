#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include "add.h"
#include "constants.h"


using namespace std;
string global_str;

double getDouble()
{
	double x;
	cout << "¬ведите дес€тичное значение: ";
	cin >> x;
	return x;
}

char getOperator()
{
	char op;
	cout << "¬ведите один из следующих операторов: +, -, * или /: ";
	cin >> op;
	return op;
}
void printResult(double x, char op, double y)
{
	if (op == '+')
		cout << x << " + " << y << " = " << x + y << endl;
	else if (op == '-')
		cout << x << " - " << y << " = " << x - y << endl;
	else if (op == '*')
		cout << x << " * " << y << " = " << x * y << endl;
	else if(op == '/')
		cout << x << " / " << y << " = " << x / y << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double x = getDouble();
	double y = getDouble();
	char op = getOperator();
	
	printResult(x, op, y);

	return 0;	

}