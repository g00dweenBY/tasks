/*

struct Pizza
{
	string nameCompany;
	double diametr;
	double weight;
};

Pizza *pizza = new Pizza[3];
	cout << "������� �������� ����� ������ ��������: ";
	cin >> pizza[0].nameCompany;
	cout << "������� ������� �����, ������� �� ������ ��������: ";
	cin >> pizza[0].diametr;
	cin.clear();
	cout << "�������, �������� ��� �����: ";
	cin >> pizza[0].weight;

	cout << "������� �������� ����� ������ ��������: ";
	cin >> pizza[1].nameCompany;
	cout << "������� ������� �����, ������� �� ������ ��������: ";
	cin >> pizza[1].diametr;
	cin.clear();
	cout << "�������, �������� ��� �����: ";
	cin >> pizza[1].weight;


	cout << "������� �������� ����� ������� ��������: ";
	cin >> pizza[2].nameCompany;
	cout << "������� ������� �����, ������� �� ������ ��������: ";
	cin >> pizza[2].diametr;
	cin.clear();
	cout << "�������, �������� ��� �����: ";
	cin >> pizza[2].weight;

	cout << "\n������ �������� ��� ��������� " << "\"" << pizza[0].nameCompany << "\"" <<
		"\n������������� ����� ��������� = " << pizza[0].diametr <<
		"\n� ����� = " << pizza[0].weight << endl;

	cout << "\n������ �������� ��� ��������� " << "\"" << pizza[1].nameCompany << "\"" <<
		"\n������������� ����� ��������� = " << pizza[1].diametr <<
		"\n� ����� = " << pizza[1].weight << endl;

	cout << "\n������ �������� ��� ��������� " << "\"" << pizza[2].nameCompany << "\"" <<
		"\n������������� ����� ��������� = " << pizza[2].diametr <<
		"\n� ����� = " << pizza[2].weight << endl;



		CandyBar snack = { "�������", 2.4, 5550 };
	CandyBar truffel = { "�������", 3.8, 7843 };
	CandyBar gercog = { "������", 4.5, 9740 };
	cout << "�������� ������: " << snack.name <<
		"\n���������� �����: " << snack.weight <<
		"\n���������� �������: " << snack.calories << endl;
	CandyBar snacks[3] = { snack, truffel, gercog };
	cout << "N1 = " << snacks[0].name << " " << snacks[0].weight << " " << snacks[0].calories << endl;
	cout << "N2 = " << snacks[1].name << " " << snacks[1].weight << " " << snacks[1].calories << endl;
	cout << "N3 = " << snacks[2].name << " " << snacks[2].weight << " " << snacks[2].calories << endl;

	int arr[5] = { 1,3,5,7,9 };
	int even = arr[0] + arr[4];
	cout << arr[0] << " + " << arr[4] << " = " << even << endl;

	string name = "Waldorf Salad";

	Fish fish;
	cout << "��� ����: ";
	cin >> fish.type;
	cout << "��� ���� � �����������: ";
	cin >> fish.weight;
	cout << "����� ���� � �����������: ";
	cin >> fish.length;

	cout << "� ��� ������� ����: " << fish.type <<
		"\n� ��� ����������: " << fish.weight <<
		"\n����� � ����������: " << fish.length << endl;

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
	cout << "���������� ��������� � �������, ������� ����� �����������: ";
	cin >> length;
	int* arr = new int[length];
	vector<int> arr1(length);


	cout << "��� ��� �����? ";
	string firstName;
	cin >> firstName;
	cout << "����� � ��� ������� ? ";
	string lastName;
	cin >> lastName;
	cout << "���-�� ���? ";
	string chto;
	cin >> chto;
	cout << "������� ��� ���? ";
	int age;
	cin >> age;

	cout << "���� ��������: " << firstName << ", " << lastName <<
		"\n���-�� ���: " << chto <<
		"\n�������: " << age << endl;


	cout << "������� ���� ������ ���: ";
	string fullName;
	getline(cin, fullName);
	cout << "������� ��� ������� ������: ";
	string dessert;
	getline(cin, dessert);

	cout << "��� �����: " << fullName <<
		"\n��� ������ ������: " << dessert << endl;

*/