#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <string>
#include "add.h"
#include "constants.h"
#include "boo.h"
#include "doo.h"



string global_str;
int main()
{	
	setlocale(LC_ALL, "Russian");
	string lineOne, lineTwo;
	cout << "������� ������ �����: ";
	cin >> lineOne;
	cout << "������� ������ �����: ";
	cin >> lineTwo;

	if (lineOne.size() == lineTwo.size())
		cout << "���� ������: " << lineOne << " � " << lineTwo << " �����" << endl;
	if (lineOne.size() > lineTwo.size())
		cout << "������ : " << lineOne << " ������, ��� ������: " << lineTwo << endl;
	if(lineOne.size() < lineTwo.size())
		cout << "������ : " << lineTwo << " ������, ��� ������: " << lineOne << endl;



	return 0;	

}	