/*
============================================================================
int sum = 0;
	cout << "¬ведите первое целочисленное значение: ";
	int firstNumber;
	cin >> firstNumber;
	cin.clear();
	cout << "¬ведите второе (меньшее первого) целочисленное значение: ";
	int secondNumber;
	cin >> secondNumber;
	for (firstNumber; firstNumber <= secondNumber; firstNumber++)
	{
		sum += firstNumber;
	}

	cout << "—умма равна: " << sum << endl;


	const int arrSize = 100;
	array<long double, arrSize> factorials;
	factorials[1] = factorials[0] = 1;

	for (int i = 2; i < arrSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < arrSize; i++)
		cout << i << "! = " << factorials[i] << endl;


============================================================================

*/