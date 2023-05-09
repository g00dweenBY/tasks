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



	array<string, 12> months = { "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь", };
	array<int, 12> booksQuantityFirstYear;

	for (int i = 0; i < months.size(); i++)
	{
		cout << "Месяц: " << months[i] << "\n";
		cout << "Введите количество проданных экземпляров книг за месяц " << months[i] << " ";
		int sellingBooksQuantity;
		cin >> sellingBooksQuantity;
		cout << "Количество проданных книг за месяц " << months[i] << " составляет: " << sellingBooksQuantity << "\n\n" << endl;
		booksQuantityFirstYear[i] = sellingBooksQuantity;
	}

	int sum = 0;

	for (int i = 0; i < booksQuantityFirstYear.size(); i++)
	{
		cout << "Количество проданных экземляров за " << "\"" << months[i] << "\" : " << booksQuantityFirstYear[i] << endl;
		sum += booksQuantityFirstYear[i];
	}
	cout << "\n\nГодовой объем продаж составил: " << sum << endl;



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
		
	cout << "Итоговая сумма за 3 года составила: " << fullSum << endl;
============================================================================


============================================================================
struct Car
	{
		string name;
		int yearOfRelease;
	};
	cout << "Сколько автомобилей поместить в каталог? ";
	int cars;
	cin >> cars;
	cin.ignore();
	Car* arrCars = new Car[cars];

	for (int i = 0; i < cars; i++)
	{
		cout << "Автомобиль #:" << i + 1 << "\n";
		cout << "Введите производителя: ";
		getline(cin, arrCars[i].name);
		cout << "Введите год выпуска: ";
		cin >> arrCars[i].yearOfRelease;
		cin.ignore();
	}
	cout << "Вот ваша коллекция:" << endl;
	for (int i = 0; i < cars; i++)
	{
		cout << arrCars[i].name << " " << arrCars[i].yearOfRelease << "\n";
	}
============================================================================

============================================================================
const int size = 20;
	char answer[size];
	int count = 0;

	cout << "Вводите слова (ключевое слово, которое необходимо ввести является \"done\")" << "\n";
	cin >> answer;
	while (strcmp(answer, "done"))
	{
		++count;
		cin >> answer;
	}

	cout << "Количество слов до ключевого \"done\" составляет: " << count << endl;




============================================================================

============================================================================
int size = 20;
	string answer;
	int count = 0;


	cout << "Вводите слова (для завершения, необходимо ввести \"done\")\n";
	cin >> answer;


	while (answer.compare("done"))
	{
		cin >> answer;
		++count;
	}

	cout << "Вы ввели " << count << " слов";

============================================================================

*/