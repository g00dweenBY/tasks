#include <iostream> // -- предназначена дл€ ввода-вывода данных
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
	
	const int size = 20;
	char answer[size];
	int count = 0;

	cout << "¬водите слова (ключевое слово, которое необходимо ввести €вл€етс€ \"done\")" << "\n";
	cin >> answer;
	while (strcmp(answer, "done"))
	{
		++count;
		cin >> answer;
	}

	cout << " оличество слов до ключевого \"done\" составл€ет: " << count << endl;
	
	return 0;
}