/*

	long long seconds;
	cout << "������� ���������� ������: ";
	cin >> seconds;

	const int days = seconds / 86400;
	const int hours = seconds / 3600 % 24;
	const int minutes = seconds / 60 % 60;
	const int secondsResults = seconds % 60;
	cout << seconds << " ������ = " << days << " ����, " << hours << " �����, " << minutes << " �����, " << secondsResults << " ������" << endl;

	======================================================================
	const long long worldPeoplePopulation = 7888000000;
	const long  peopleBelarussian = 9255524;

	cout << "���������� ����� � ����: " << worldPeoplePopulation << '\n';
	cout << "���������� ����� � ��������: " << peopleBelarussian << '\n';

	const double percentageOfWorld = static_cast<double>(peopleBelarussian) / worldPeoplePopulation * 100;

	cout << "���������� ���������� ��������� �������� �� ����� ���� ����������: " << percentageOfWorld << "%" << endl;
	
	================================================================================
	int kilometers;
	cout << "���������� ����������, ������� �������� ���� ������: ";
	cin >> kilometers;
	int petrol;
	cout << "���������� ������������ ����� ������� �������: ";
	cin >> petrol;

	const double result = static_cast<double>(petrol) / kilometers * 100;
	cout << "������ ������� �� 100�� ����������: " << result << endl;

	=========================================================================

	double kilometers;
	cout << "���������� ����������, ������� �������� ���� ������: ";
	cin >> kilometers;
	double petrol;
	cout << "���������� ������������ ����� ������� �������: ";
	cin >> petrol;

	const double result = petrol / kilometers * 100;
	cout << "������ ������� �� 100�� ����������: " << result << endl;

	double mills, gallons;
	mills = kilometers / 1.6;
	gallons = petrol / 3.875;

	const double resultConvertion = gallons / mills * 62.14;

	cout << "������ �������� �� 62.14 ����� ����������: " << resultConvertion << endl;
*/