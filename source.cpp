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

	
	
		array<string, 12> months = { "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь", };
	array<int, 12> booksQuantityFirstYear;

	for (int i = 0; i < months.size(); i++)
	{
		cout << "Месяц: " << months[i] << "\n";
		cout << "Введите количество проданных экземпляров книг за месяц " << months[i] << " ";
		int sellingBooksQuantity;
		cin >> sellingBooksQuantity;
		cout << "Количество проданных книг за месяц " << months[i] << " составляет: " << sellingBooksQuantity << "\n\n" << endl;
		booksQuantityFirstYear[i] = sellingBooksQuantity;
	}

	int sum = 0;

	for (int i = 0; i < booksQuantityFirstYear.size(); i++)
	{
		cout << "Количество проданных экземляров за " << "\"" << months[i] << "\" : " << booksQuantityFirstYear[i] << endl;
		sum += booksQuantityFirstYear[i];
	}
	cout << "\n\nГодовой объем продаж составил: " << sum << endl;	
	


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
	cout << "Итоговая сумма за 3 года составила: " << fullSum << endl;
	return 0;
}