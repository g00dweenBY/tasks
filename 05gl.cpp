/*
============================================================================
int sum = 0;
	cout << "������� ������ ������������� ��������: ";
	int firstNumber;
	cin >> firstNumber;
	cin.clear();
	cout << "������� ������ (������� �������) ������������� ��������: ";
	int secondNumber;
	cin >> secondNumber;
	for (firstNumber; firstNumber <= secondNumber; firstNumber++)
	{
		sum += firstNumber;
	}

	cout << "����� �����: " << sum << endl;


	const int arrSize = 100;
	array<long double, arrSize> factorials;
	factorials[1] = factorials[0] = 1;

	for (int i = 2; i < arrSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < arrSize; i++)
		cout << i << "! = " << factorials[i] << endl;


		int number;
	int sum = 0;
	do
	{
		cout << "������� �����: ";
		cin >> number;
		sum += number;
	} while (number != 0);
	cout << "����� ��������� ����� �����: " << sum << endl;


============================================================================

*/