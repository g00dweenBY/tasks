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



	array<string, 12> months = { "������", "�������", "����", "������", "���", "����", "����", "������", "��������", "�������", "������", "�������", };
	array<int, 12> booksQuantityFirstYear;

	for (int i = 0; i < months.size(); i++)
	{
		cout << "�����: " << months[i] << "\n";
		cout << "������� ���������� ��������� ����������� ���� �� ����� " << months[i] << " ";
		int sellingBooksQuantity;
		cin >> sellingBooksQuantity;
		cout << "���������� ��������� ���� �� ����� " << months[i] << " ����������: " << sellingBooksQuantity << "\n\n" << endl;
		booksQuantityFirstYear[i] = sellingBooksQuantity;
	}

	int sum = 0;

	for (int i = 0; i < booksQuantityFirstYear.size(); i++)
	{
		cout << "���������� ��������� ���������� �� " << "\"" << months[i] << "\" : " << booksQuantityFirstYear[i] << endl;
		sum += booksQuantityFirstYear[i];
	}
	cout << "\n\n������� ����� ������ ��������: " << sum << endl;



	array<array<int, 12>, 3> sells = { {
		booksQuantityFirstYear,
		{11,55,24,32,56,76,89,54,23,24,77,11},
		{12,24,23,26,1,3,3,5,7,8,9,1},
	} };
	int fullSum = 0;
	cout << sells.size();

	for (int i = 0; i < sells.size(); i++)
	{
		for (int j = 0; j < sells[i].size(); j++)
		{
			fullSum += sells[i][j];
		
	cout << "�������� ����� �� 3 ���� ���������: " << fullSum << endl;
============================================================================


============================================================================
struct Car
	{
		string name;
		int yearOfRelease;
	};
	cout << "������� ����������� ��������� � �������? ";
	int cars;
	cin >> cars;
	cin.ignore();
	Car* arrCars = new Car[cars];

	for (int i = 0; i < cars; i++)
	{
		cout << "���������� #:" << i + 1 << "\n";
		cout << "������� �������������: ";
		getline(cin, arrCars[i].name);
		cout << "������� ��� �������: ";
		cin >> arrCars[i].yearOfRelease;
		cin.ignore();
	}
	cout << "��� ���� ���������:" << endl;
	for (int i = 0; i < cars; i++)
	{
		cout << arrCars[i].name << " " << arrCars[i].yearOfRelease << "\n";
	}
============================================================================

============================================================================
const int size = 20;
	char answer[size];
	int count = 0;

	cout << "������� ����� (�������� �����, ������� ���������� ������ �������� \"done\")" << "\n";
	cin >> answer;
	while (strcmp(answer, "done"))
	{
		++count;
		cin >> answer;
	}

	cout << "���������� ���� �� ��������� \"done\" ����������: " << count << endl;




============================================================================

============================================================================
int size = 20;
	string answer;
	int count = 0;


	cout << "������� ����� (��� ����������, ���������� ������ \"done\")\n";
	cin >> answer;


	while (answer.compare("done"))
	{
		cin >> answer;
		++count;
	}

	cout << "�� ����� " << count << " ����";

============================================================================

*/