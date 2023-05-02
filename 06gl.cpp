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
	array<double, 5> arr;
	double sum = 0;
	int length = sizeof(arr) / sizeof(arr[0]);
	int count = 0;
	for (int i = 0; i < length; ++i)
	{
		cout << "Введите значение с плавающей точкой: ";

		do
		{
			cin >> arr[i];

			if (cin.fail())
			{
				cout << "Некорректный ввод. Попробутйе ещё раз." << endl;
				cin.clear();
				cin.ignore(10000, '\n');
			}
		} while (cin.fail());
		cout << "Элеменет массива с индексом: " << i << " = " << arr[i] << endl;
		sum += arr[i];
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
*/