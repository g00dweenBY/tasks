/*
cout << "Введите пожалуйста строку: ";
	getline(cin, words, '@');
	for (int i = 0; i < words.length(); ++i)
	{
		if (!isdigit(words[i])) {
			if (isupper(words[i])) {
				cout << (char)tolower(words[i]);
			}
			else if (islower(words[i])) {
				cout << (char)toupper(words[i]);
			}
			else {
				cout << words[i];
			}
		}
	}

	=====================================================================================
	for (int i = 0; i < length;)
	{	
		cout << "Введите " << length - i << " значений с плавающей точкой : ";
		cin >> arr[i];

		if (cin.fail())
		{
			cout << "Некорректный ввод. Попробуйте ещё раз" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		else
		{
			cout << "Элемент с индексом " << i << " = " << arr[i] << endl;
			sum += arr[i];
			++i;
		}
	}
	double average = sum / length;
	cout << "Сумма равна: " << sum << endl;
	cout << "Среднее значение элементов: " << average << endl;

	cout << "Значения, которые больше среднего значения по массиву: ";
	for (int i = 0; i < length; ++i)
	{
		if (arr[i] > average)
		{
			cout << arr[i] << " ";
			++count;
		}	
	}
	cout << "\nКоличество значения превышающих среднее: " << count << endl;

	=====================================================================================


	=====================================================================================


void showmenu()
{
	cout << "Введите пожалуйста один из следующих вариантов: a), b), c), d) \n" <<
		"a) carnivore()\n" <<
		"b) pianist()\n" <<
		"c) tree()\n" <<
		"d) game()\n" <<
		"\nДля выхода из выборки, нажмите \"q\"\n";
}

	void carnivore()
{
	cout << "Carnivore choise" << endl;
}
void pianist()
{
	cout << "Pianist choise" << endl;
}
void tree()
{
	cout << "Tree choise" << endl;
}
void game()
{
	cout << "Void choise" << endl;
}


	char choice;
	showmenu();
	cin >> choice;
	while (choice != 'q')
	{
		switch (choice)
		{
		case 'a': carnivore();
			break;
		case 'b': pianist();
			break;
		case 'c': tree();
			break;
		case 'd': game();
			break;
		default: cout << "Неправильный ввод" << endl;
		}
		showmenu();
		cin >> choice;
	}
	cout << "Bye!!" << endl;
	=====================================================================================
*/