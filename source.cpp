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
	
	

	/*
	array<long double, 64> dipsea;
	char actor[30];
	short betsie[100];
	float chuck[13];
	long double dipsea[64];

	array<char, 30> actor;
	array<short, 100> betsie;
	array<float, 13> chuck;
	CandyBar snack = { "Ассорти", 2.4, 5550 };
	CandyBar truffel = { "Трюфель", 3.8, 7843 };
	CandyBar gercog = { "Герцог", 4.5, 9740 };
	cout << "Название конфет: " << snack.name <<
		"\nколичество грамм: " << snack.weight <<
		"\nколичество калорий: " << snack.calories << endl;
	CandyBar snacks[3] = { snack, truffel, gercog };
	cout << "N1 = " << snacks[0].name << " " << snacks[0].weight << " " << snacks[0].calories << endl;
	cout << "N2 = " << snacks[1].name << " " << snacks[1].weight << " " << snacks[1].calories << endl;
	cout << "N3 = " << snacks[2].name << " " << snacks[2].weight << " " << snacks[2].calories << endl;

	int arr[5] = { 1,3,5,7,9 };
	int even = arr[0] + arr[4];
	cout << arr[0] << " + " << arr[4] << " = " << even << endl;

	string name = "Waldorf Salad";

	Fish fish;
	cout << "Тип рыбы: ";
	cin >> fish.type;
	cout << "Вес рыбы в килограммах: ";
	cin >> fish.weight;
	cout << "Длина рыбы в сантиметрах: ";
	cin >> fish.length;

	cout << "У вас имеется рыба: " << fish.type <<
		"\nеё вес составляет: " << fish.weight <<
		"\nдлина её составляет: " << fish.length << endl;

		double ted = 2.2;
	double* tedtpr = &ted;

	cout << *tedtpr << endl;

	float treacle[5] = { 1.1,2.2,3.3,4.4,5.5 };
	float* firstTreacle = &treacle[0];
	*firstTreacle = 1.5;
	float* lastTreacle = &treacle[4];
	cout << *firstTreacle << endl;
	cout << *lastTreacle << endl;
	cout << treacle[0] << endl;
	int length;
	cout << "Количество элементов в массиве, которое будет содержаться: ";
	cin >> length;
	int* arr = new int[length];
	vector<int> arr1(length);


	cout << "Как вас зовут? ";
	string firstName;
	cin >> firstName;
	cout << "Какая у вас фамилия ? ";
	string lastName;
	cin >> lastName;
	cout << "Что-то там? ";
	string chto;
	cin >> chto;
	cout << "Сколько вам лет? ";
	int age;
	cin >> age;

	cout << "Ваши инициалы: " << firstName << ", " << lastName <<
		"\nчто-то там: " << chto <<
		"\nвозраст: " << age << endl;


	cout << "Введите ваше полное имя: ";
	string fullName;
	getline(cin, fullName);
	cout << "Введите ваш любимый десерт: ";
	string dessert;
	getline(cin, dessert);

	cout << "Вас зовут: " << fullName <<
		"\nваш любиый десерт: " << dessert << endl;

	*/
	

	
	

	return 0;	

}	