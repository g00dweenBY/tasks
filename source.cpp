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
	
	int size = 20;
	char answer[20];
	int count = 0;

	cout << "������� ����� (��� ����������, ���������� ������ \"done\")\n";
	cin >> answer;


	while (strcmp(answer, "done"))
	{
		cin >> answer;
		++count;
	}

	cout << "�� ����� " << count << " ����";
	
	return 0;
}