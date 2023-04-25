/*
	-----------------------------------------------------------------------------------------
	----��������� ����� ������� � ������������ x,y,z
	double dX = 0.0, dY = 0.0, dZ = 0.0;
	cout << "������� X: ";
	cin >> dX;
	cout << "\n������� Y: ";
	cin >> dY;
	cout << "\n������� Z: ";
	cin >> dZ;

	double dVectorLength = sqrt(dX * dX + dY * dY + dZ * dZ);
	cout << "\n����� ������� = " << dVectorLength << endl;
	-----------------------------------------------------------------------------------------


	-----------------------------------------------------------------------------------------
	---������� ����� �� �������
		int number;
	cout << "\n\t\t������� ����� �� �������";
	cout << "\n������� ����������� �����: ";
	cin >> number;

	int n1 = number % 100000 / 10000;
	int n2 = number % 10000 / 1000;
	int n3 = number % 1000 / 100;
	int n4 = number % 100 / 10;
	int n5 = number % 10;
	cout << "\n1 ����� ����� " << n1;
	cout << "\n2 ����� ����� " << n2;
	cout << "\n3 ����� ����� " << n3;
	cout << "\n4 ����� ����� " << n4;
	cout << "\n5 ����� ����� " << n5;

	 ==================================================================================
								UPDATE
								int number;
	cout << "\n\t\t������� ����� �� �������";
	cout << "\n������� ����������� �����: ";
	cin >> number;
	cout << "\n";
	if (number >= 0 && number <= 9999) {
		cout << "���� ����� ������ ������������. ����� ������� ���� �����������\n\n";
	}
	else {
		if (number >= 100000) {
			cout << "���� ����� ������ ������������. ����� ������ ���� �����������\n\n";
		 }
		else {
			cout << "\n1 ����� ����� " << number % 100000 / 10000;
			cout << "\n2 ����� ����� " << number % 10000 / 1000;
			cout << "\n3 ����� ����� " << number % 1000 / 100;
			cout << "\n4 ����� ����� " << number % 100 / 10;
			cout << "\n5 ����� ����� " << number % 10;
		}
	}
	 ============================================================================
	-----------------------------------------------------------------------------------------

	----------------------------------------------------------------------------------------

	������ �������������� ���������

	int a, b, c;
	cout << "������� ����� a, b, c:\n";
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	cout << "\n��������� �� �������: x=(a + b - c / a) + c * a * a - (a + b)";
	double x = (a + b - c / a) + c * a * a - (a + b);
	cout << "\nx=" << x;
	-------------------------------------------------------------------------------------------

	-------------------------------------------------------------------------------------------
	========�������� ��������� (1-tg x)^(ctg x)+ cos(x-y)
	
	const double PI = 3.141592;
	double x, y;
	cout << "������� �������� x: ";
	cin >> x;
	cout << "������� �������� y: ";
	cin >> y;
	//����������� ������ �������� � �������
	x = x * PI / 180;
	y = y * PI / 180;
	cout << "����� = " << fixed << setprecision(2) << pow(1 - tan(x), (cos(x) / sin(x))) + cos(x - y) << endl;

	-------------------------------------------------------------------------------------------

	-------------------------------------------------------------------------------------------
	======��������� �� ������ � ���������
	double meters, kilometers;
	cout << "\t\t\t������� ����� �� ������ � ���������\n";
	cout << "\n������� ���������� ������: ";
	cin >> meters;
	kilometers = meters / 1000;
	if (meters == 1)
	{
		cout << meters << " ���� ����� " << kilometers << " ��������� " << endl;
	}
	if (meters > 1 && meters <= 4)
	{
		cout << meters << " ����� ����� " << kilometers << " ��������� " << endl;
	}
	if (meters >= 5 && meters < 1000)
	{
		cout << meters << " ������ ����� " << kilometers << " ��������� " << endl;

	}
	if (meters == 1000)
	{
		cout << meters << " ������ ����� " << kilometers << " �������� " << endl;
	}
	if (meters > 1000 && meters <= 4900)
	{
		cout << meters << " ������ ����� " << kilometers << " ��������� " << endl;
	}
	if (meters > 4900 && meters <= 4999) {
		cout << meters << " ������ ����� " << kilometers << " ���������� " << endl;
	}
	if (meters >= 5000)
	{
		cout << meters << " ������ ����� " << kilometers << " ��������� " << endl;
	}
	-------------------------------------------------------------------------------------------




	double x = getDouble();
	double y = getDouble();
	char op = getOperator();

	printResult(x, op, y);

	double getDouble()
{
	double x;
	cout << "������� ���������� ��������: ";
	cin >> x;
	return x;
}

char getOperator()
{
	char op;
	cout << "������� ���� �� ��������� ����������: +, -, * ��� /: ";
	cin >> op;
	return op;
}
void printResult(double x, char op, double y)
{
	if (op == '+')
		cout << x << " + " << y << " = " << x + y << endl;
	else if (op == '-')
		cout << x << " - " << y << " = " << x - y << endl;
	else if (op == '*')
		cout << x << " * " << y << " = " << x * y << endl;
	else if(op == '/')
		cout << x << " / " << y << " = " << x / y << endl;
}

=======================================================

���������� �������(������ ����� ���������) �� ������ ��������� �����

int isBitNumber(int x, int pow) {
	if (x >= pow)
		cout << "1";
	else
		cout << "0";

	if (x >= pow)
		return x - pow;
	else
		return x;
}

	int number;
	cout << "������� ���������� ����� �� 0 �� 255: ";
	cin >> number;
	if (number < 0 || number > 255)
		cout << "�� ����� ������������ �����!! �� �������� � ��������� ��������" << endl;

	number = isBitNumber(number, 128);
	number = isBitNumber(number, 64);
	number = isBitNumber(number, 32);
	number = isBitNumber(number, 16);

	cout << " ";

	number = isBitNumber(number, 8);
	number = isBitNumber(number, 4);
	number = isBitNumber(number, 2);
	number = isBitNumber(number, 1);



		int sm, lg;
	cout << "������� �����: ";
	cin >> sm;
	cout << "������� ������ �����: ";
	cin >> lg;

	cout << "������� ��������: " << ((lg > sm) ? sm : lg) << endl;
	cout << "������� ��������: " << ((lg > sm) ? lg : sm) << endl;


	void calculate(int a, int b, char sign)
{
	switch (sign)
	{
	case '+':
		cout << a << " + " <<  b  << " = " << a + b << endl;
		break;
	case '-':
		cout << a << " - " << b <<  " = " << a - b << endl;
		break;
	case '*':
		cout << a << " * " << b << " = " << a * b << endl;
		break;
	case '/':
		cout << a << " / " << b << " = " << a / b << endl;
		break;
	case '%':
		cout << a << " % " << b << " = " << a % b << endl;
		break;
	default:
		cout << "�� ����� ������������ ����";
		break;
	}
}
calculate(5, 4, '-');



const int arrSize = 16;
	long long factorials[arrSize];
	factorials[1] = factorials[0] = 1LL;

	for (int i = 2; i < arrSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < arrSize; i++)
		cout << i << "! = " << factorials[i] << endl;
=================================================
*/
