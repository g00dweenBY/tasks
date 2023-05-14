#include <iostream>
#include <Windows.h>
#include <string>
#include <array>
#include <vector>
#include <algorithm>

enum CardSuits
{
	SUIT_CHERVEY,
	SUIT_BUBA,
	SUIT_KRESTY,
	SUIT_PIK,
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
	TYPE_VALET,
	TYPE_DAMA,
	TYPE_KOROL,
	TYPE_TUZ,
	MAX_TYPES,
};

struct Card {
	CardSuits suit;
	CardTypes type;
};

void printCard(const Card& card)
{

	switch (card.type)
	{
	case TYPE_TWO: std::cout << "2"; break;
	case TYPE_THREE: std::cout << "3"; break;
	case TYPE_FOUR: std::cout << "4"; break;
	case TYPE_FIVE: std::cout << "5"; break;
	case TYPE_SIX: std::cout << "6"; break;
	case TYPE_SEVEN: std::cout << "7"; break;
	case TYPE_EIGHT: std::cout << "8"; break;
	case TYPE_NINE: std::cout << "9"; break;
	case TYPE_TEN: std::cout << "10"; break;
	case TYPE_VALET: std::cout << "V"; break;
	case TYPE_DAMA: std::cout << "D"; break;
	case TYPE_KOROL: std::cout << "K"; break;
	case TYPE_TUZ: std::cout << "T"; break;
	default:
		break;
	}

	switch (card.suit)
	{
	case SUIT_CHERVEY: std::cout << " червей"; break;
	case SUIT_BUBA: std::cout << " бубей"; break;
	case SUIT_KRESTY: std::cout << " крестей"; break;
	case SUIT_PIK: std::cout << " пик"; break;
	default:
		break;
	}

}



int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	return 0;
}




