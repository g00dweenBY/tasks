/*
	int a, b;

	std::cout << "enter two numbers: ";
	while (std::cin >> a >> b)
	{
		if (a == 0 || b == 0)
		{
			std::cout << "The numbers must not be zero" << std::endl;
			break;
		}
		double harmonicMean = 2.0 * a * b / (a + b);
		std::cout << "harmonicMean = " << harmonicMean << std::endl;
	}
	======================================================================

	======================================================================

	void getInput(std::vector<int>& scores) {
	std::cout << "Введите результаты игры в гольф (максимум 10), для завершения введите -1:\n";

	int score;
	for (int i = 0; i < 10; ++i) {
		std::cout << "Результат " << scores.size() + 1 << ": ";
		std::cin >> score;

		if (score == -1) {
			break;
		}

		scores.push_back(score);
	}
}

void displayScores(const std::vector<int>& scores) {
	std::cout << "Результаты игры в гольф: ";
	for (int score : scores) {
		std::cout << score << " ";
	}
	std::cout << std::endl;
}

double calculateAverage(const std::vector<int>& scores) {
	int sum = 0;
	for (int score : scores) {
		sum += score;
	}

	return static_cast<double>(sum) / scores.size();
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	 std::vector<int> scores;
	getInput(scores);
	displayScores(scores);

	if (!scores.empty()) {
		double average = calculateAverage(scores);
		std::cout << "Среднее значение: " << average << std::endl;
	} else {
		std::cout << "Нет результатов игры." << std::endl;
	}

	return 0;
}


struct Box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void printBox(Box box)
{
	std::cout << "Box maker = " << box.maker << '\n';
	std::cout << "Box height = " << box.height << '\n';
	std::cout << "Box width = " << box.width << '\n';
	std::cout << "Box length = " << box.length << '\n';
	std::cout << "Box volume = " << box.volume << '\n';
}

float correctBoxVolume(Box* box)
{
	box->volume = box->height * box->width * box->length;
	return box->volume;
}

Box box = { "Box Size", 15.4, 8.8, 4.4, 12 };

	printBox(box);

	std::cout << "corect box volume : " << box.height << " * " << box.width << " * " <<
	box.length << " = " << correctBoxVolume(&box);
	======================================================================

	======================================================================
	int factorial(int num)
{
	if (num == 0)
		return 1;

	return num * factorial(num - 1);
}

	std::cout << "Введите значение для вычисления его факториала: ";
	int num;
	std::cin >> num;

	int res = factorial(num);

	std::cout << "!" << num << " = " << res << std::endl;
	======================================================================

	======================================================================

	void fillArray(std::vector<double>&arr, int length)
{
	std::cout << "Enter a array numbers:\n";
	double value;
	for (int i = 0; i < length; ++i)
	{
		std::cout << "Enter a number #" << i + 1 << " : ";
		std::cin >> value;
		arr.push_back(value);
	}
}

void showArray(std::vector<double> &arr, int length)
{
	for (int i = 0; i < length; ++i)
	{
		std::cout << "Элемент под индексом " << i << " = " << arr[i] << std::endl;
	}
}
void reverseArray(std::vector<double> &arr, int length)
{
	int start = 0;
	int end = length - 1;
	while (start < end)
	{
		double temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		++start;
		--end;
	}
}
	std::vector<double> arr;
	std::cout << "enter a arrow length: ";
	int length;
	std::cin >> length;
	fillArray(arr, length);
	showArray(arr, length);
	reverseArray(arr, length);
	std::cout << "------------------------------------------------" << std::endl;
	showArray(arr, length);


	======================================================================


	======================================================================
double calculate(double a, double b, double (*func)(double c, double d))
{
	return func(a, b);
}

double add(double x, double y)
{
	return x + y;
}

double diff(double x, double y)
{
	return x - y;
}

double multiply(double x, double y)
{
	return x * y;
}

double division(double x, double y)
{
	return x / y;
}


	std::cout << "Enter a two numbers(double): ";
	double first, second;
	while (std::cin >> first >> second)
	{
		int choice;
		std::cout << "Enter a choice: 1 = add, 2 = diff, 3 = multiply, 4 = division (q = quit): " ;

		while (std::cin >> choice)
		{
			switch (choice)
			{
			case 1:
				std::cout << "Add " << first << " and " << second << " = " << calculate(first, second, add) << std::endl; break;
			case 2:
				std::cout << "Diff " << first << " and " << second << " = " << calculate(first, second, diff) << std::endl; break;
			case 3:
				std::cout << "Multiply " << first << " and " << second << " = " << calculate(first, second, multiply) << std::endl; break;
			case 4:
				std::cout << "Division " << first << " and " << second << " = " << calculate(first, second, division) << std::endl; break;
			default: std::cout << "Uncorrect choice, please enter correct choice:  1, 2, 3, 4: "; continue;
			}
			std::cout << "Enter two numbers (double): "; break;
		}
	}

	------------------array pointers for functrion -----------------------------------------
	double (*pf[4])(double, double) { add, diff, multiply, division };

	std::cout << "Enter a two numbers(double): ";
	double first, second;
	while (std::cin >> first >> second)
	{
		for (int i = 0; i < 4; ++i)
			std::cout << "Correct answer: " << calculate(first, second, pf[i]) << std::endl;
		std::cout << "Enter a two numbers(double): ";
	}
	======================================================================
*/