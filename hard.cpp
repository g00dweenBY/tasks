/*
int numberStrings;
	cout << "¬ведите количество строк ";
	cin >> numberStrings;
	cin.ignore();

	for (int i = 0; i < numberStrings; ++i)
	{
		for (int j = 0; j < numberStrings; ++j)
		{
			cout << ".";
		}
		for (int j = 0; j < i + 1; ++j)
		{
			cout << "\b";
		}
		for (int j = 0; j < i + 1; ++j)
		{
			cout << "*";
		}
		cout << endl;
	}



	while (cin >> word && word != "q")
	{
		if (isalpha(word[0]))
		{
			for (int i = 0; i < SIZE; ++i)
			{
				if (word[0] == vow[1])
					isvowel = true;
			}
			if (isvowel)
				++vowels;
			else
				++constants;
		}
		else
		{
			++others;
		}
		isvowel = false;
	}

	cout << vowels << " words beginning with vowels." << endl;
	cout << constants << " words beginning with consonants." << endl;
	cout << others << " others." << endl;

*/