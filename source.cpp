#include <iostream> // -- предназначена для ввода-вывода данных
#include <math.h> // -- математические ф-ии
#include <iomanip> // -- предназачена для работы с форматированным выводом данных
#include <cmath> // -- математическая С-шная
#include <string> // -- предназначена для работы со строками
#include <array> // -- предназначена для работы с массивами фиксированного размера. Предоставляет класс --array--
#include <cstdlib> // -- для работы с памятью и процессом
#include <algorithm> // -- содержит множество стандартных ф-ий для работы с алгоритмами
#include <utility> // -- содержит различные утилиты, для решения повседневных задач
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
	cout << "Введите первое целочисленное значение: ";
	int firstNumber;
	cin >> firstNumber;
	cin.clear();
	cout << "Введите второе (меньшее первого) целочисленное значение: ";
	int secondNumber;
	cin >> secondNumber;
	for (firstNumber; firstNumber <= secondNumber; firstNumber++)
	{
		sum += firstNumber;
	}

	cout << "Сумма равна: " << sum << endl;



	return 0;
}