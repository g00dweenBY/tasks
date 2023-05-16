/*
#include <iostream>
#include <Windows.h>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cmath>

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	// Равномерно распределяем выбор случайного числа в диапазоне
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

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
	case TYPE_VALET: std::cout << "Valet"; break;
	case TYPE_DAMA: std::cout << "Dama"; break;
	case TYPE_KOROL: std::cout << "Korol"; break;
	case TYPE_TUZ: std::cout << "Tuz"; break;
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

void printDeck(std::array<Card, 52>& deck)
{
	for (const auto& card : deck)
	{
		printCard(card);
		std::cout << " ";
	}
	std::cout << '\n';
}

void swapCard(Card &cardOne, Card &CardTwo)
{
	Card cardTemp = cardOne;
	cardOne = CardTwo;
	CardTwo = cardTemp;
}

void shuffleDecK(std::array<Card, 52> &deck)
{
	for (int index = 0; index < 52; ++index)
	{
		int swapIndex = getRandomNumber(0, 51);
		swapCard(deck[index], deck[swapIndex]);
	}
}

int getCardValue(Card& card)
{
	switch (card.type)
	{
	case TYPE_TWO: return 2;
	case TYPE_THREE: return 3;
	case TYPE_FOUR: return 4;
	case TYPE_FIVE: return 5;
	case TYPE_SIX: return 6;
	case TYPE_SEVEN: return 7;
	case TYPE_EIGHT: return 8;
	case TYPE_NINE: return 9;
	case TYPE_TEN: return 10;
	case TYPE_VALET: return 10;
	case TYPE_DAMA: return 10;
	case TYPE_KOROL: return 10;
	case TYPE_TUZ: return 11;
	}
}


int main()
{
	srand(static_cast<unsigned int>(time(0)));
	rand();
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::array<Card, 52> deck;
	int card = 0;
	for(int suit = 0; suit < MAX_SUITS; ++suit)
	for (int type = 0; type < MAX_TYPES; ++type)
	{
		deck[card].suit = static_cast<CardSuits>(suit);
		deck[card].type = static_cast<CardTypes>(type);
		++card;
	}

	printDeck(deck);
	shuffleDecK(deck);
	printDeck(deck);

	return 0;
}

*/