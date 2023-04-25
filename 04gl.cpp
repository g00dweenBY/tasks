/*

struct Pizza
{
	string nameCompany;
	double diametr;
	double weight;
};

Pizza *pizza = new Pizza[3];
	cout << "Введите название вашей первой компании: ";
	cin >> pizza[0].nameCompany;
	cout << "Введите диаметр пиццы, которую вы хотите заказать: ";
	cin >> pizza[0].diametr;
	cin.clear();
	cout << "Введите, желаемый вес пиццы: ";
	cin >> pizza[0].weight;

	cout << "Введите название вашей второй компании: ";
	cin >> pizza[1].nameCompany;
	cout << "Введите диаметр пиццы, которую вы хотите заказать: ";
	cin >> pizza[1].diametr;
	cin.clear();
	cout << "Введите, желаемый вес пиццы: ";
	cin >> pizza[1].weight;


	cout << "Введите название вашей третьей компании: ";
	cin >> pizza[2].nameCompany;
	cout << "Введите диаметр пиццы, которую вы хотите заказать: ";
	cin >> pizza[2].diametr;
	cin.clear();
	cout << "Введите, желаемый вес пиццы: ";
	cin >> pizza[2].weight;

	cout << "\nПервая компания под названием " << "\"" << pizza[0].nameCompany << "\"" <<
		"\nизготавливает пиццы диаметром = " << pizza[0].diametr <<
		"\nи весом = " << pizza[0].weight << endl;

	cout << "\nВторая компания под названием " << "\"" << pizza[1].nameCompany << "\"" <<
		"\nизготавливает пиццы диаметром = " << pizza[1].diametr <<
		"\nи весом = " << pizza[1].weight << endl;

	cout << "\nТретья компания под названием " << "\"" << pizza[2].nameCompany << "\"" <<
		"\nизготавливает пиццы диаметром = " << pizza[2].diametr <<
		"\nи весом = " << pizza[2].weight << endl;



		CandyBar snack = { "Ассорти", 2.4, 5550 };
	CandyBar truffel = { "Трюфель", 3.8, 7843 };
	CandyBar gercog = { "Герцог", 4.5, 9740 };
	cout << "Название конфет: " << snack.name <<
		"\nколичество грамм: " << snack.weight <<
		"\nколичество калорий: " << snack.calories << endl;
	CandyBar snacks[3] = { snack, truffel, gercog };
	cout << "N1 = " << snacks[0].name << " " << snacks[0].weight << " " << snacks[0].calories << endl;
	cout << "N2 = " << snacks[1].name << " " << snacks[1].weight << " " << snacks[1].calories << endl;
	cout << "N3 = " << snacks[2].name << " " << snacks[2].weight << " " << snacks[2].calories << endl;

	int arr[5] = { 1,3,5,7,9 };
	int even = arr[0] + arr[4];
	cout << arr[0] << " + " << arr[4] << " = " << even << endl;

	string name = "Waldorf Salad";

	Fish fish;
	cout << "Тип рыбы: ";
	cin >> fish.type;
	cout << "Вес рыбы в килограммах: ";
	cin >> fish.weight;
	cout << "Длина рыбы в сантиметрах: ";
	cin >> fish.length;

	cout << "У вас имеется рыба: " << fish.type <<
		"\nеё вес составляет: " << fish.weight <<
		"\nдлина её составляет: " << fish.length << endl;

		double ted = 2.2;
	double* tedtpr = &ted;

	cout << *tedtpr << endl;

	float treacle[5] = { 1.1,2.2,3.3,4.4,5.5 };
	float* firstTreacle = &treacle[0];
	*firstTreacle = 1.5;
	float* lastTreacle = &treacle[4];
	cout << *firstTreacle << endl;
	cout << *lastTreacle << endl;
	cout << treacle[0] << endl;
	int length;
	cout << "Количество элементов в массиве, которое будет содержаться: ";
	cin >> length;
	int* arr = new int[length];
	vector<int> arr1(length);


	cout << "Как вас зовут? ";
	string firstName;
	cin >> firstName;
	cout << "Какая у вас фамилия ? ";
	string lastName;
	cin >> lastName;
	cout << "Что-то там? ";
	string chto;
	cin >> chto;
	cout << "Сколько вам лет? ";
	int age;
	cin >> age;

	cout << "Ваши инициалы: " << firstName << ", " << lastName <<
		"\nчто-то там: " << chto <<
		"\nвозраст: " << age << endl;


	cout << "Введите ваше полное имя: ";
	string fullName;
	getline(cin, fullName);
	cout << "Введите ваш любимый десерт: ";
	string dessert;
	getline(cin, dessert);

	cout << "Вас зовут: " << fullName <<
		"\nваш любиый десерт: " << dessert << endl;

*/