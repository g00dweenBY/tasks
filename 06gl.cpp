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
*/