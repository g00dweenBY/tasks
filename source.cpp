#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <string>
#include "add.h"
#include "constants.h"
#include "boo.h"
#include "doo.h"



void timer(int hours, int minutes)
{
	cout << "Time: " << hours << ":" << minutes << endl;
}

string global_str;
int main()
{	
	setlocale(LC_ALL, "Russian");
	int h, m;
	cout << "������� ����: ";
	cin >> h;
	if (h >= 24)
	{
		cout << "�� ����� ������������ ���������� �����";
		return -1;
	}
		

	cout << "������� ������: ";
	cin >> m;
	if (m >= 60)
	{
		cout << "�� ����� ������������ ���������� �����";
		return -1;
	}
	timer(h, m);


	return 0;	

}	