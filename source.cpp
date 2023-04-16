#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <string>
#include <array>
#include "add.h"
#include "constants.h"
#include "boo.h"
#include "doo.h"

struct Advertising
{
	int notification;
	double percentageOfUsers;
	double earnings;
};

void printAdvertising(Advertising advertising)
{
	cout << "���������� �������� �������������: " << advertising.notification << endl;
	cout << "������� �����������, �������� �� ����������: " << advertising.percentageOfUsers << endl;
	cout << "������� ��������� �� ������ ������� ����� �� ����������: " << advertising.earnings << endl;

	double sumEarning =  (advertising.notification * advertising.percentageOfUsers /100 * advertising.earnings);

	cout << "������� ����� �� ���������� �� ����: " << sumEarning << endl;
}



string global_str;
int main()
{	
	setlocale(LC_ALL, "Russian");
	


	Advertising myEarnings;

	cout << "������� ���������� �� �������� �����������: ";
	cin >> myEarnings.notification;
	cout << "������� ��������� ����������� ������ �� ����������: ";
	cin >> myEarnings.percentageOfUsers;
	cout << "������� �� ���������� � ������� �� ������ ����������: ";
	cin >> myEarnings.earnings;

	printAdvertising(myEarnings);
	
	return 0;	

}	