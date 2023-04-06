#pragma once
#include <iostream>

using namespace std;

int readNumber()
{
	int a;
	cin >> a;
	return a;
}

void writeAnswer()
{
	cout << "Your answer: " << readNumber() + readNumber() << endl;
}