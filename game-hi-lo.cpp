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

*/