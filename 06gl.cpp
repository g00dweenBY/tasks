/*
cout << "������� ���������� ������: ";
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
		cout << "������� " << length - i << " �������� � ��������� ������ : ";
		cin >> arr[i];

		if (cin.fail())
		{
			cout << "������������ ����. ���������� ��� ���" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		else
		{
			cout << "������� � �������� " << i << " = " << arr[i] << endl;
			sum += arr[i];
			++i;
		}
	}
	double average = sum / length;
	cout << "����� �����: " << sum << endl;
	cout << "������� �������� ���������: " << average << endl;

	cout << "��������, ������� ������ �������� �������� �� �������: ";
	for (int i = 0; i < length; ++i)
	{
		if (arr[i] > average)
		{
			cout << arr[i] << " ";
			++count;
		}	
	}
	cout << "\n���������� �������� ����������� �������: " << count << endl;

	=====================================================================================


	=====================================================================================


void showmenu()
{
	cout << "������� ���������� ���� �� ��������� ���������: a), b), c), d) \n" <<
		"a) carnivore()\n" <<
		"b) pianist()\n" <<
		"c) tree()\n" <<
		"d) game()\n" <<
		"\n��� ������ �� �������, ������� \"q\"\n";
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
		default: cout << "������������ ����" << endl;
		}
		showmenu();
		cin >> choice;
	}
	cout << "Bye!!" << endl;
	=====================================================================================

	=====================================================================================

	struct bop
{
	string fullName;
	string title;
	string bopName;
	int preference; // 0 = fullName, 1 = title, 2 = bopName

};
void showmenu()
{
	cout << "������� ���������� ���� �� ��������� ���������: a), b), c), d) \n" <<
		"a. display by name\n" <<
		"b. display by title\n" <<
		"c. display by bopName\n" <<
		"d.display by preference \n" <<
		"\nq. quit\n";
}
void showMenuPreference()
{
	cout << "������� ���������� ���� �� ��������� ���������: 0), 1), 2)\n" <<
		"0. display by fullName\n" <<
		"1. display by title\n" <<
		"2. display by popName\n" <<
		"9. quit\n";
}

	array<bop, 2> bops = { {
		{"������� �������", "�++", "goodween", 0},
		{"������ ��������", "JS", "rad1ch", 1},
		} };

	char choice;
	int choicePreference;
	showmenu();
	cin >> choice;
	while (choice != 'q')
	{
		switch (choice)
		{
		case 'a': cout << "Name: " << bops[0].fullName << endl;
			break;
		case 'b': cout << "Title: " << bops[0].title << endl;
			break;
		case 'c': cout << "bopName: " << bops[0].bopName << endl;
			break;
		case 'd':
		{
			showMenuPreference();
			cin >> choicePreference;
			while (choicePreference != 9)
			{
				switch (choicePreference)
				{
				case 0: cout << "�� ����� 0: " << bops[0].fullName << endl;
					break;
				case 1: cout << "�� ����� 1: " << bops[0].title << endl;
					break;
				case 2: cout << "�� ����� 2: " << bops[0].bopName << endl;
					break;
				default: cout << "Uncorrect preference answer" << endl;
					break;
				}
				showMenuPreference();
				cin >> choicePreference;
			}
		}
			break;
		default: cout << "Uncorrect answer" << endl;
		}
		showmenu();
		cin >> choice;
	}
	cout << "Bye" << endl;

	=====================================================================================
*/