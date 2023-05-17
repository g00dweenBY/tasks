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
	std::cout << "������� ���������� ���� � ����� (�������� 10), ��� ���������� ������� -1:\n";

	int score;
	for (int i = 0; i < 10; ++i) {
		std::cout << "��������� " << scores.size() + 1 << ": ";
		std::cin >> score;

		if (score == -1) {
			break;
		}

		scores.push_back(score);
	}
}

void displayScores(const std::vector<int>& scores) {
	std::cout << "���������� ���� � �����: ";
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
		std::cout << "������� ��������: " << average << std::endl;
	} else {
		std::cout << "��� ����������� ����." << std::endl;
	}

	return 0;
}

	======================================================================
*/