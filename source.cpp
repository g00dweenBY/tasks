#include <iostream>
#include <Windows.h>
#include <string>
#include <array>
#include <vector>
#include <algorithm>

enum CardSuits
{
	SUIT_CLUBS,
	SUIT_DIAMONDS,
	SUIT_HEARTS,
	SUIT_PEAKS,
	MAX_SUITS,

};

enum CardTypes
{
	TYPE_TWO,
	TYPE_THREE,
	TYPE_FOUR,
	TYPE_FIVE,
	TYPE_SIX,
	TYPE_SEVEN,
	TYPE_EIGHT,
	TYPE_NINE,
	TYPE_TEN,
	TYPE_JECK,
	TYPE_LADY,
	TYPE_KING,
	TYPE_ACE,
	MAX_TYPESM
};


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	return 0;
}




