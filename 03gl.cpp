/*

	long long seconds;
	cout << "Введите количество секунд: ";
	cin >> seconds;

	const int days = seconds / 86400;
	const int hours = seconds / 3600 % 24;
	const int minutes = seconds / 60 % 60;
	const int secondsResults = seconds % 60;
	cout << seconds << " секунд = " << days << " дней, " << hours << " часов, " << minutes << " минут, " << secondsResults << " секунд" << endl;

	======================================================================
	const long long worldPeoplePopulation = 7888000000;
	const long  peopleBelarussian = 9255524;

	cout << "Количество людей в мире: " << worldPeoplePopulation << '\n';
	cout << "Количество людей в Беларуси: " << peopleBelarussian << '\n';

	const double percentageOfWorld = static_cast<double>(peopleBelarussian) / worldPeoplePopulation * 100;

	cout << "Процентное соотношеие населения Беларуси от всего мира составляет: " << percentageOfWorld << "%" << endl;
	
	================================================================================
	int kilometers;
	cout << "Количество километров, которое проехала ваша машина: ";
	cin >> kilometers;
	int petrol;
	cout << "Количество затраченного вашей машиной бензина: ";
	cin >> petrol;

	const double result = static_cast<double>(petrol) / kilometers * 100;
	cout << "Расход бензина на 100км составляет: " << result << endl;
*/