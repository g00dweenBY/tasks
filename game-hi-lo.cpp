/*

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	// Равномерно распределяем рандомное число в нашем диапазоне
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}



int gameHiLo()
{
	int randomNumber1 = getRandomNumber(1, 100);
	int randomNumber2 = getRandomNumber(1, 100);


	while (true)
	{
		cout << "Let's play a game. I'm thinking of a number. You have 7 tries to guess what is it" << endl;
		for (int i = 1; i <= 7; ++i)
		{
			int choisePlayer;
			cout << "Guess #:" << i << ":";
			cin >> choisePlayer;
			if (i == 7)
			{
				cout << "Sorry, you lose. The correct number: " << randomNumber2 << endl;
				cout << "Would you like to play again (y/n)? ";
				char choiseChar;
				cin >> choiseChar;
				while (true)
				{
					if (choiseChar == 'y')
					{
						break;
					}
					else if (choiseChar == 'n')
					{
						return 0;
					}
				}
				break;
			}
			if (choisePlayer > randomNumber2)
			{
				cout << "Your guess is too high" << endl;
			}
			else if (choisePlayer < randomNumber2)
			{
				cout << "Your guess is too low" << endl;
			}
			else if (choisePlayer == randomNumber2)
			{
				cout << "Correct!! You win!!" << endl;
				cout << "Would you like to play again (y/n)? ";
				char choiseChar;
				cin >> choiseChar;
				if (choiseChar == 'y')
				{
					break;
				}
				else if (choiseChar == 'n')
				{
					return 0;
				}
				break;
			}
		}

	}
}


 ------------------------------------------------------------------------------------------

 int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	// Равномерно распределяем выбор случайного числа в диапазоне
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

bool playGame(int guesses, int number)
{
	for (int i = 1; i <= guesses; ++i)
	{
		cout << "Guess #" << i << ": ";
		int guess;
		cin >> guess;
		if (guess > number)
			cout << "Your guess is too high\n";
		else if (guess < number)
			cout << "Your guess is too low\n";
		else
			return true;
	}
	return false;
}

bool playAgain()
{
	char choisePlayer;

	do
	{
		cout << "Would you like to play again (y/n)? ";
		cin >> choisePlayer;
	} while (choisePlayer != 'y' && choisePlayer  != 'n');

	return (choisePlayer == 'y');
}

 srand(static_cast<unsigned int>(time(0)));
	rand();

	const int guesses = 7;
	do
	{
		int randomNumber = getRandomNumber(1, 100);
		cout << "Let's play a game. I'm thinking of a number. You have " << guesses << " tries to guess what is it\n";
		bool won = playGame(guesses, randomNumber);
		if (won)
			cout << "Correct, you win!!\n";
		else
			cout << "Sorry, you lose. The correct number was " << randomNumber << "\n";

	} while (playAgain());
	cout << "Thank you for playing.\n";
 ------------------------------------------------------------------------------------------

*/