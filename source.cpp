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
	std::cout << "¬ведите результаты игры в гольф (максимум 10), дл€ завершени€ введите -1:\n";

	int score;
	for (int i = 0; i < 10; ++i) {
		std::cout << "–езультат " << scores.size() + 1 << ": ";
		std::cin >> score;

		if (score == -1) {
			break;
		}

		scores.push_back(score);
	}
}

void displayScores(const std::vector<int>& scores) {
	std::cout << "–езультаты игры в гольф: ";
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

void fillArray(std::vector<double>&arr, int length)
{
	std::cout << "Enter a array numbers:\n";
	double value;
	for (int i = 0; i < length; ++i)
	{
		std::cout << "Enter a number #" << i + 1 << " : ";
		std::cin >> value;
		arr.push_back(value);
	}
}

void showArray(std::vector<double> &arr, int length)
{
	for (int i = 0; i < length; ++i)
	{
		std::cout << "Ёлемент под индексом " << i << " = " << arr[i] << std::endl;
	}
}
void reverseArray(std::vector<double> &arr, int length)
{
	int start = 0;
	int end = length - 1;
	while (start < end)
	{
		double temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		++start;
		--end;
	}
}


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::vector<double> arr;
	std::cout << "enter a arrow length: ";
	int length;
	std::cin >> length;
	fillArray(arr, length);
	showArray(arr, length);
	reverseArray(arr, length);
	std::cout << "------------------------------------------------" << std::endl;
	showArray(arr, length);
	return 0;
}




