/*
============================================================================
int sum = 0;
	cout << "Введите первое целочисленное значение: ";
	int firstNumber;
	cin >> firstNumber;
	cin.clear();
	cout << "Введите второе (меньшее первого) целочисленное значение: ";
	int secondNumber;
	cin >> secondNumber;
	for (firstNumber; firstNumber <= secondNumber; firstNumber++)
	{
		sum += firstNumber;
	}

	cout << "Сумма равна: " << sum << endl;


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
		cout << "Введите число: ";
		cin >> number;
		sum += number;
	} while (number != 0);
	cout << "Сумма введенных числа равна: " << sum << endl;


	double daffnaBank = 100;
	double daffnaBankCurrence = daffnaBank - daffnaBank * 0.9;
	double kleoBank = 100;


	int years = 0;

	do
	{
		years++;
		cout << "\tКоличество лет: " << years << endl;
		double kleoBankCurrence = kleoBank - kleoBank * 0.95;
		kleoBank += kleoBankCurrence;
		daffnaBank += daffnaBankCurrence;
		cout << "kleoBank: " << kleoBank << "\n daffnaBank: " << daffnaBank << endl;
		if (daffnaBank < kleoBank)
			cout << "Для того, что бы сумма заложенная под сложные 5% обогнала сумму Даффны, ему понадобилось: " << years << "лет";
	} while (daffnaBank > kleoBank);

============================================================================


============================================================================
array<string, 12> months = { "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь", };
	array<int, 12> booksQuantity;

	for (int i = 0; i < months.size(); i++)
	{
		cout << "Месяц: " << months[i] << "\n";
		cout << "Введите количество проданных экземпляров книг за месяц " << months[i] << " ";
		int sellingBooksQuantity;
		cin >> sellingBooksQuantity;
		cout << "Количество проданных книг за месяц " << months[i] << " составляет: " << sellingBooksQuantity << "\n\n" << endl;
		booksQuantity[i] = sellingBooksQuantity;
	}

	int sum = 0;

	for (int i = 0; i < booksQuantity.size(); i++)
	{
		cout << "Количество проданных экземляров за " << "\"" << months[i] << "\" : " << booksQuantity[i] << endl;
		sum += booksQuantity[i];
	}
	cout << "\n\nГодовой объем продаж составил: " << sum << endl;
============================================================================

*/