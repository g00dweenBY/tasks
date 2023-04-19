#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <string>
#include <array>
#include <cstdlib>
#include "add.h"
#include "constants.h"
#include "boo.h"
#include "doo.h"

string global_str;



int main()
{	
	setlocale(LC_ALL, "Russian");
	int number = 0;
	int array[] = { 7,5,6,4,9,8,2,1,3 };
	int arrLength = sizeof(array) / sizeof(array[0]);
	cout << arrLength << endl;
	do
	{
		cout << "¬введите пожалуйста число от 1 до 9: ";
		cin >> number;

		if (cin.fail())
			cin.clear();
	} while (number < 1 || number > 9);



	for (int i = 0; i < arrLength; ++i) {
		if (array[i] == number)
			cout << "„исло " << number << " имеет индекс: " << i << endl;
	}




	return 0;	

}	