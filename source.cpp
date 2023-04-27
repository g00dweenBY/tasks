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

	
	
		array<string, 12> months = { "������", "�������", "����", "������", "���", "����", "����", "������", "��������", "�������", "������", "�������", };
	array<int, 12> booksQuantityFirstYear;

	for (int i = 0; i < months.size(); i++)
	{
		cout << "�����: " << months[i] << "\n";
		cout << "������� ���������� ��������� ����������� ���� �� ����� " << months[i] << " ";
		int sellingBooksQuantity;
		cin >> sellingBooksQuantity;
		cout << "���������� ��������� ���� �� ����� " << months[i] << " ����������: " << sellingBooksQuantity << "\n\n" << endl;
		booksQuantityFirstYear[i] = sellingBooksQuantity;
	}

	int sum = 0;

	for (int i = 0; i < booksQuantityFirstYear.size(); i++)
	{
		cout << "���������� ��������� ���������� �� " << "\"" << months[i] << "\" : " << booksQuantityFirstYear[i] << endl;
		sum += booksQuantityFirstYear[i];
	}
	cout << "\n\n������� ����� ������ ��������: " << sum << endl;	
	


	array<array<int, 12>, 3> sells = { {
		booksQuantityFirstYear,
		{11,55,24,32,56,76,89,54,23,24,77,11},
		{12,24,23,26,1,3,3,5,7,8,9,1},
	} };
	int fullSum = 0;
	cout << sells.size();

	for (int i = 0; i < sells.size(); i++)
	{
		for (int j = 0; j < sells[j].size(); j++)
		{
			fullSum += sells[i][j];
		}		
	}
	cout << "�������� ����� �� 3 ���� ���������: " << fullSum << endl;
	return 0;
}