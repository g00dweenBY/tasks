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

	=====================================================================================
	double price;

	cout << "������� ����� ������� ����: ";
	cin >> price;
	while (!(price <= 0))
	{
		double totalPrice = 0;
		double priceX10;
		double priceX15;
		double priceX20;
		if (price >= 10000)
		{
			priceX10 = price * 0.1;
			totalPrice += priceX10;

		}
		if (price >= 20000)
		{
			priceX15 = price * 0.15;
			totalPrice += priceX15;

		}
		if (price >= 35000)
		{
			priceX20 = price * 0.2;
			totalPrice += priceX20;
		}

		cout << "Your correct price = " << totalPrice + price << endl;
		cin >> price;
	}
	cout << "Bye";
	=====================================================================================

	=====================================================================================
	struct Patrons
{
	string name;
	double donation;
};

	int quantityPatrons;
	bool numberMoreFlag = false;
	bool numberLessFlag = false;
	cout << "������� ���������� �����, ����������� ������: ";
	cin >> quantityPatrons;

	Patrons* patrons = new Patrons[quantityPatrons];

	cout << "���������� �����, ����������� ������ = " << quantityPatrons << endl;

	for (int i = 0; i < quantityPatrons; ++i)
	{
		cout << "������� ��� ��������������� #" << i + 1 << " ";
		cin >> patrons[i].name;
		cout << "����� ������������: ";
		cin >> patrons[i].donation;
	}
	cout << "Grand patrons: ";
	for (int i = 0; i < quantityPatrons; ++i)
	{
		if (patrons[i].donation > 10000)
		{
			cout << "\n " << patrons[i].name << " his donation = $" << patrons[i].donation;
			numberMoreFlag = true;
		}
		if (!numberMoreFlag)
			cout << "none" << endl;
	}
	cout << "\nPatrons: ";
	for (int i = 0; i < quantityPatrons; ++i)
	{

		if (patrons[i].donation < 10000)
		{
			cout << "\n " << patrons[i].name << " his donation = $" << patrons[i].donation;
			numberLessFlag = true;
		}

	}
	if (!numberLessFlag)
		cout << "none" << endl;



		ifstream inFile;

	inFile.open("carinfo.txt");
	char ch;
	int count = 0;
	if (!inFile.is_open())
	{
		cout << "error" << endl;
		exit(EXIT_FAILURE);
	}
	while (inFile.get(ch))
	{
		++count;
	}

	cout << "���������� �������� � �����: " << count << endl;

	inFile.close();
	=====================================================================================
*/