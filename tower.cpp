/*
int calculateHeight(int meters, int second)
{
	cout << "����� 0 ������ ��� ��������� �� ������: " << meters << " ������\n";
	int secondValue = 1;
	while (secondValue <= second)
	{
		double height = meters - constants::gravity * (secondValue * secondValue) / 2;

		if (height <= 0) {
			cout << "����� " << secondValue << " ������ ��� ����������� �� �����\n" << endl;
			return 0;
		}
		cout << "����� " << secondValue << " ������ ��� ��������� �� ������ : " << height << " ������\n";
		++secondValue;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int meters;
	cout << "������� ���������� ��������� ������ ����� � ������: ";
	cin >> meters;
	calculateHeight(meters, 5);
	return 0;

}*/