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


	double daffnaBank = 100;
	double daffnaBankCurrence = daffnaBank - daffnaBank * 0.9;
	double kleoBank = 100;


	int years = 0;

	do
	{
		years++;
		cout << "\t���������� ���: " << years << endl;
		double kleoBankCurrence = kleoBank - kleoBank * 0.95;
		kleoBank += kleoBankCurrence;
		daffnaBank += daffnaBankCurrence;
		cout << "kleoBank: " << kleoBank << "\n daffnaBank: " << daffnaBank << endl;
		if (daffnaBank < kleoBank)
			cout << "��� ����, ��� �� ����� ���������� ��� ������� 5% �������� ����� ������, ��� ������������: " << years << "���";
	} while (daffnaBank > kleoBank);

============================================================================


============================================================================
array<string, 12> months = { "������", "�������", "����", "������", "���", "����", "����", "������", "��������", "�������", "������", "�������", };
	array<int, 12> booksQuantity;

	for (int i = 0; i < months.size(); i++)
	{
		cout << "�����: " << months[i] << "\n";
		cout << "������� ���������� ��������� ����������� ���� �� ����� " << months[i] << " ";
		int sellingBooksQuantity;
		cin >> sellingBooksQuantity;
		cout << "���������� ��������� ���� �� ����� " << months[i] << " ����������: " << sellingBooksQuantity << "\n\n" << endl;
		booksQuantity[i] = sellingBooksQuantity;
	}

	int sum = 0;

	for (int i = 0; i < booksQuantity.size(); i++)
	{
		cout << "���������� ��������� ���������� �� " << "\"" << months[i] << "\" : " << booksQuantity[i] << endl;
		sum += booksQuantity[i];
	}
	cout << "\n\n������� ����� ������ ��������: " << sum << endl;
============================================================================

*/