/*
char myChar = 'a';
	while (myChar <= 'z')
	{
		cout << myChar << " = " << static_cast<int>(myChar) << endl;
		++myChar;
	}

       int outer = 5;
    while (outer >= 1)
    {
        int inner = 5;
        while (inner >= outer)
            std::cout << inner-- << " ";

        std::cout << "\n";
        --outer;
    }


	int outer = 1;
	while (outer <= 5)
	{
		int inner = 5;
		while (inner >= 1)
		{
			if (inner <= outer)
				cout << inner << " ";
			else
				cout << "  ";
			--inner;
		}

		cout << "\n";
		++outer;
	}
	===============================================================================================
    double getValue()
{
    while (true) // ���� ������������ �� ��� ���, ���� ������������ �� ������ ���������� ��������
    {
        std::cout << "Enter a double value: ";
        double a;
        std::cin >> a;

        // �������� �� ���������� ����������
        if (std::cin.fail()) // ���� ���������� ���������� ��������� ���������,
        {
            std::cin.clear(); // �� ���������� cin � '�������' ����� ������
            std::cin.ignore(32767, '\n'); // � ������� �������� ����������� ����� �� �������� ������
            std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
        else
        {
            std::cin.ignore(32767, '\n'); // ������� ������ ��������

            return a;
        }
    }
}

char getOperator()
{
    while (true) // ���� ������������ �� ��� ���, ���� ������������ �� ������ ���������� ��������
    {
        std::cout << "Enter one of the following: +, -, *, or /: ";
        char sm;
        std::cin >> sm;

        // ���������� ���� char ����� ��������� ����� ������� �� ����������������� �����, ������� ��� �� ����� ������������ �� ������ ������������� ���������� ����������

        std::cin.ignore(32767, '\n'); // ������� ������ �������

        // ��������� �������� ����������������� �����
        if (sm == '+' || sm == '-' || sm == '*' || sm == '/')
            return sm; // ���������� ������� � caller
        else // � ��������� ������, �������� ������������ ��� ���-�� ����� �� ���
            std::cout << "Oops, that input is invalid.  Please try again.\n";
    }
}

void printResult(double a, char sm, double b)
{
    if (sm == '+')
        std::cout << a << " + " << b << " is " << a + b << '\n';
    else if (sm == '-')
        std::cout << a << " - " << b << " is " << a - b << '\n';
    else if (sm == '*')
        std::cout << a << " * " << b << " is " << a * b << '\n';
    else if (sm == '/')
        std::cout << a << " / " << b << " is " << a / b << '\n';
    else
        std::cout << "Something went wrong: printResult() got an invalid operator.";

}
	===============================================================================================

	===============================================================================================
    int number = 0;
    int array[] = { 7,5,6,4,9,8,2,1,3 };
    int arrLength = sizeof(array) / sizeof(array[0]);
    cout << arrLength << endl;
    do
    {
        cout << "�������� ���������� ����� �� 1 �� 9: ";
        cin >> number;

        if (cin.fail())
            cin.clear();
    } while (number < 1 || number > 9);



    for (int i = 0; i < arrLength; ++i) {
        if (array[i] == number)
            cout << "����� " << number << " ����� ������: " << i << endl;
    }
	===============================================================================================

	===============================================================================================

     int scores[] = { 73, 85, 84, 44, 78 };
    const int numStudents = sizeof(scores) / sizeof(scores[0]);

    int maxScore = 0; // ����������� ����� ������� ������
    int index = 0;
    for (int student = 0; student < numStudents; ++student)
        if (scores[student] > maxScore)
        {
            index = student;
            maxScore = scores[student];
        }

    std::cout << "The best score was " << maxScore << " has index " << index << '\n';


    const int number = 44;
    int answer;

    cout << "����������, ������� ����� � ��������� �� 1 �� 100: ";
    do
    {
        cin >> answer;
        if (answer < number)
            cout << "Too low ---gues again: ";
        else if (answer > number)
            cout << "Too high --gues again: ";
        else
            cout << "����������, ����� ������� ���������� ���� ��������, �������� = " << number << endl;


    } while (answer != number);

	===============================================================================================
*/