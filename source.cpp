#include <iostream>
#include <Windows.h>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cctype>

/*
void arrayFuncttion(int arr[], int len, int value)
{
	for (int i = 0; i < len; ++i)
	{
		arr[i] = value;
	}
}

double doubleFunc(double *arr, int length)
{
	double maxValue = 0;
	for (int i = 0; i < length; ++i)
	{
		if (arr[i] > maxValue)
			maxValue = arr[i];
	}
	return maxValue;
}

int judge(int (*func)(const char*));

struct Aplicant
{
	char name[30];
	int credit_ratings[3];
};

void funcStruct(Aplicant apl)
{
	std::cout << "name: " << apl.name << '\n';
	std::cout << "rating: " << apl.credit_ratings << '\n';
}

void funcStructLink(Aplicant* apl)
{
	std::cout << apl->name;
	std::cout << apl->credit_ratings;
}

void f1(Aplicant* a);
const char* f2(const Aplicant* a1, const Aplicant* a2);

typedef void(*f1_ptr)(Aplicant*);
typedef const char* (*f2_ptr)(const Aplicant* p1, const Aplicant* p2);


void getInput(std::vector<int>& scores) {
	std::cout << "Введите результаты игры в гольф (максимум 10), для завершения введите -1:\n";

	int score;
	for (int i = 0; i < 10; ++i) {
		std::cout << "Результат " << scores.size() + 1 << ": ";
		std::cin >> score;

		if (score == -1) {
			break;
		}

		scores.push_back(score);
	}
}

void displayScores(const std::vector<int>& scores) {
	std::cout << "Результаты игры в гольф: ";
	for (int score : scores) {
		std::cout << score << " ";
	}
	std::cout << std::endl;
}

double calculateAverage(const std::vector<int>& scores) {
	int sum = 0;
	for (int score : scores) {
		sum += score;
	}

	return static_cast<double>(sum) / scores.size();
}
*/

double calculate(double a, double b, double (*func)(double c, double d))
{
	return func(a, b);
}

double add(double x, double y)
{
	return x + y;
}

double diff(double x, double y)
{
	return x - y;
}



int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Enter a two numbers(double): ";
	double first, second;
	while (std::cin >> first >> second)
	{
		std::cout << "Answer add two numbers: " << calculate(first, second, add) << std::endl;
	}

	return 0;
}




