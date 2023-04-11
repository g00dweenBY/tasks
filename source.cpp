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
	cout << "Введите первое слово: ";
	cin >> lineOne;
	cout << "Введите второе слово: ";
	cin >> lineTwo;

	if (lineOne.size() == lineTwo.size())
		cout << "Ваши строки: " << lineOne << " и " << lineTwo << " равны" << endl;
	if (lineOne.size() > lineTwo.size())
		cout << "Строка : " << lineOne << " Больше, чем строка: " << lineTwo << endl;
	if(lineOne.size() < lineTwo.size())
		cout << "Строка : " << lineTwo << " Больше, чем строка: " << lineOne << endl;



	return 0;	

}	