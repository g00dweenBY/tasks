/*
int calculateHeight(int meters, int second)
{
	cout << "„ерез 0 секунд м€ч находитс€ на высоте: " << meters << " метров\n";
	int secondValue = 1;
	while (secondValue <= second)
	{
		double height = meters - constants::gravity * (secondValue * secondValue) / 2;

		if (height <= 0) {
			cout << "„ерез " << secondValue << " секунд м€ч оказываетс€ на земле\n" << endl;
			return 0;
		}
		cout << "„ерез " << secondValue << " секунд м€ч находитс€ на высоте : " << height << " метров\n";
		++secondValue;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int meters;
	cout << "¬ведите пожалуйста начальную высоту башни в метрах: ";
	cin >> meters;
	calculateHeight(meters, 5);
	return 0;

}*/