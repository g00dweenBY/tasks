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
	int sum = 0;
	cout << "������� ������ ������������� ��������: ";
	int firstNumber;
	cin >> firstNumber;
	cin.clear();
	cout << "������� ������ (������� �������) ������������� ��������: ";
	int secondNumber;
	cin >> secondNumber;
	for (firstNumber; firstNumber <= secondNumber; firstNumber++)
	{
		sum += firstNumber;
	}

	cout << "����� �����: " << sum << endl;



	return 0;
}