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
	long long seconds;
	cout << "������� ���������� ������: ";
	cin >> seconds;

	const int days = seconds / 86400;
	const int hours = seconds / 3600 % 24;
	const int minutes = seconds / 60 % 60;
	const int secondsResults = seconds % 60;
	cout << seconds << " ������ = " << days << " ����, " << hours << " �����, " << minutes << " �����, " << secondsResults << " ������" << endl;



	return 0;	

}	