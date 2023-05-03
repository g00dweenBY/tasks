#include <iostream> // -- предназначена дл€ ввода-вывода данных
#include <fstream>
#include <math.h> // -- математические ф-ии
#include <iomanip> // -- предназачена дл€ работы с форматированным выводом данных
#include <cmath> // -- математическа€ —-шна€
#include <string> // -- предназначена дл€ работы со строками
#include <array> // -- предназначена дл€ работы с массивами фиксированного размера. ѕредоставл€ет класс --array--
#include <cstdlib> // -- дл€ работы с пам€тью и процессом
#include <algorithm> // -- содержит множество стандартных ф-ий дл€ работы с алгоритмами
#include <utility> // -- содержит различные утилиты, дл€ решени€ повседневных задач
#include <vector>
#include <Windows.h>
#include "add.h"
#include "constants.h"
#include "boo.h"
#include "doo.h"

struct Patrons
{
	string name;
	double donation;
};


string global_str;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int quantityPatrons;
	bool numberMoreFlag = false;
	bool numberLessFlag = false;
	cout << "¬ведите количество людей, поддержащих проект: ";
	cin >> quantityPatrons;

	Patrons* patrons = new Patrons[quantityPatrons];

	cout << " оличество людей, поддержащих проект = " << quantityPatrons << endl;
	
	for (int i = 0; i < quantityPatrons; ++i)
	{
		cout << "¬ведите им€ пожертвовавшего #" << i + 1 << " ";
		cin >> patrons[i].name;
		cout << "—умма пожертвоаний: ";
		cin >> patrons[i].donation;
	}
	cout << "Grand patrons: ";
	for (int i = 0; i < quantityPatrons; ++i)
	{
		if (patrons[i].donation > 10000)
		{
			cout << "\n " << patrons[i].name << " his donation = $" << patrons[i].donation;
			numberMoreFlag = true;
		}
		if (!numberMoreFlag)
			cout << "none" << endl;
	}
	cout << "\nPatrons: ";
	for (int i = 0; i < quantityPatrons; ++i)
	{
		
		if (patrons[i].donation < 10000)
		{
			cout << "\n " << patrons[i].name << " his donation = $" << patrons[i].donation;
			numberLessFlag = true;
		}
		
	}
	if (!numberLessFlag)
		cout << "none" << endl;

	/*
	char automobile[50];
	int year;
	double a_price;	
	double b_price;
	ofstream outFile;
	outFile.open("carinfo.txt");
	cout << "Enter the make and model of automobile: ";
	cin.getline(automobile, 50);
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter the original asking price: ";
	cin >> a_price;
	b_price = 0.913 * a_price;
	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "Make and model: " << automobile << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << b_price << endl;

	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model: " << automobile << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking $" << a_price << endl;
	outFile << "Now asking $" << b_price << endl;
	outFile.close();


	double value;
	double sum = 0.0;
	int count = 1;
	inFile >> value;
	while (inFile.good())
	{
		++count;
		sum += value;
		inFile >> value;
	}
	if (inFile.eof())
	{
		cout << "End of file reached.\n";
	}
	else if (inFile.fail())
	{
		cout << "Input terminated by data mismatch.\n";
	}
	else {
		cout << "Input terminated for unknown reason.\n";
	}
	if (count == 0)
	{
		cout << "No data processed.\n";
	}
	else {
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	inFile.close();

	string fileName;
	ifstream inFile;
	cout << "Enter name of data file: ";
	cin >> fileName;
	inFile.open(fileName);
	if (!inFile.is_open())
	{
		cout << "Could not open the file " << fileName << endl;
		cout << "Programm terminating.\n";
		exit(EXIT_FAILURE);
	}
	
	*/
	return 0;
}