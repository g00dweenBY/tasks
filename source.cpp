#include <iostream> // -- ������������� ��� �����-������ ������
#include <math.h> // -- �������������� �-��
#include <iomanip> // -- ������������ ��� ������ � ��������������� ������� ������
#include <cmath> // -- �������������� �-����
#include <string> // -- ������������� ��� ������ �� ��������
#include <array> // -- ������������� ��� ������ � ��������� �������������� �������. ������������� ����� --array--
#include <cstdlib> // -- ��� ������ � ������� � ���������
#include <algorithm> // -- �������� ��������� ����������� �-�� ��� ������ � �����������
#include <utility> // -- �������� ��������� �������, ��� ������� ������������ �����
#include <vector>
#include <Windows.h>
#include "add.h"
#include "constants.h"
#include "boo.h"
#include "doo.h"

string global_str;

struct  CandyBar
{
	string name;
	double weight;
	int calories;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	const int number = 44;
	int answer;

	cout << "����������, ������� ����� � ��������� �� 1 �� 100: ";
	do
	{
		cin >> answer;
		if (answer < number)
			cout << "Too low ---gues again: ";
		else if (answer > number)
			cout << "Too high --gues again: ";
		else
			cout << "����������, ����� ������� ���������� ���� ��������, �������� = " << number << endl;


	} while (answer != number);
	
	return 0;
}