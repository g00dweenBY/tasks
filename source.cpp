#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include "add.h"
#include "constants.h"


using namespace std;
string global_str;

int isBitNumber(int x, int pow) {
	if (x >= pow)
		cout << "1";
	else
		cout << "0";

	if (x >= pow)
		return x - pow;
	else
		return x;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int number;
	cout << "������� ���������� ����� �� 0 �� 255: ";
	cin >> number;
	if (number < 0 || number > 255)
		cout << "�� ����� ������������ �����!! �� �������� � ��������� ��������" << endl;

	number = isBitNumber(number, 128);
	number = isBitNumber(number, 64);
	number = isBitNumber(number, 32);
	number = isBitNumber(number, 16);

	cout << " ";

	number = isBitNumber(number, 8);
	number = isBitNumber(number, 4);
	number = isBitNumber(number, 2);
	number = isBitNumber(number, 1);
	
	return 0;	

}