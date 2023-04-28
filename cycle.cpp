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
    while (true) // цикл продолжается до тех пор, пока пользователь не введет корректное значение
    {
        std::cout << "Enter a double value: ";
        double a;
        std::cin >> a;

        // Проверка на предыдущее извлечение
        if (std::cin.fail()) // если предыдущее извлечение оказалось неудачным,
        {
            std::cin.clear(); // то возвращаем cin в 'обычный' режим работы
            std::cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
            std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
        else
        {
            std::cin.ignore(32767, '\n'); // удаляем лишние значения

            return a;
        }
    }
}

char getOperator()
{
    while (true) // цикл продолжается до тех пор, пока пользователь не введет корректное значение
    {
        std::cout << "Enter one of the following: +, -, *, or /: ";
        char sm;
        std::cin >> sm;

        // Переменные типа char могут принимать любые символы из пользовательского ввода, поэтому нам не стоит беспокоиться по поводу возникновения неудачного извлечения

        std::cin.ignore(32767, '\n'); // удаляем лишний балласт

        // Выполняем проверку пользовательского ввода
        if (sm == '+' || sm == '-' || sm == '*' || sm == '/')
            return sm; // возвращаем обратно в caller
        else // в противном случае, сообщаем пользователю что что-то пошло не так
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
        cout << "Ввведите пожалуйста число от 1 до 9: ";
        cin >> number;

        if (cin.fail())
            cin.clear();
    } while (number < 1 || number > 9);



    for (int i = 0; i < arrLength; ++i) {
        if (array[i] == number)
            cout << "Число " << number << " имеет индекс: " << i << endl;
    }
	===============================================================================================

	===============================================================================================

     int scores[] = { 73, 85, 84, 44, 78 };
    const int numStudents = sizeof(scores) / sizeof(scores[0]);

    int maxScore = 0; // отслеживаем самую высокую оценку
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

    cout << "Пожалуйста, введите число в диапазоне от 1 до 100: ";
    do
    {
        cin >> answer;
        if (answer < number)
            cout << "Too low ---gues again: ";
        else if (answer > number)
            cout << "Too high --gues again: ";
        else
            cout << "Поздравляю, число которое необходимо было отгадать, являлось = " << number << endl;


    } while (answer != number);

	===============================================================================================
*/