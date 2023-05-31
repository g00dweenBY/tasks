/*

=================================================================================================

----------------------------------------------------------------------------------------------
int (*fctPtr)(); --- неконстантный указатель на ф-ию (скобки вокруг необходимы для приоритета операций)
int (*const fctPtr)(); --- константный указатель на ф-ию
void selectionSort(int *array, int size, bool (*comparisonFcn)(int, int) = ascending);
void selectionSort(int *array, int size, bool (*comparisonFcn)(int, int) ----- указатель на ф-ию);

* struct Animal
{
	std::string name;
};

int sumTo(const int number);
void printAnimalName(const Animal &animal);
void minmax(const int a, const int b, int& minOut, int& maxOut);
int getIndexOfLargestValue(const int* arr[], const int sizeArr);
const int& getElement(const int* arr[], const int sizeArr);




-------------------------------------------------------------


void selectionSort(int* array, int size, bool (*comparisonFcn)(int, int))
{
	for (int startIndex = 0; startIndex < size; ++startIndex)
	{
		int smallestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
		{
			if (comparisonFcn(array[smallestIndex], array[currentIndex]))
				smallestIndex = currentIndex;
		}
		std::swap(array[startIndex], array[smallestIndex]);
	}
}

bool ascending(int a, int b)
{
	return a > b;
}

bool descending(int a, int b)
{
	return a < b;
}

void printArray(int* array, int size)
{
	for (int i = 0; i < size; ++i)
		std::cout << array[i] << " ";
	std::cout << '\n';
}

	int ar[8] = { 4,8,5,6,2,3,1,7 };

	selectionSort(ar, 8, ascending);
	printArray(ar, 8);

	selectionSort(ar, 8, descending);
	printArray(ar, 8);



	-------------------------------------------------------------
typedef bool (*validateFcn)(int, int);
	=====or=====
using validataFcn = bool(*)(int, int); -- type alias

bool validata(int a, int b, bool (*fcnPtr)(int, int)) -- bad syntax
bool validate(int a, int b, validateFcn pfcn); -- good syntax

bool validate(int a, int b, std::function<bool(int, int)> fcn)
----------------------------------------------------------------------------------------------

int getInteger()
{
	std::cout << "Enter an integer: ";
	int a;
	std::cin >> a;
	return a;
}

char getOperation()
{
	char op;
	do
	{
		std::cout << "Enter an operation ('+', '-', '*', '/'): ";
		std::cin >> op;

	} while (op != '+' && op != '-' && op != '*' && op != '/');
	return op;
}

int add(int a, int b)
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return a / b;
}

typedef int(*arithmeticFcn)(int, int);

struct ArithmeticStuct
{
	char op;
	arithmeticFcn fcn;

};
static ArithmeticStuct arithmeticArray[] = {
	{'+', add},
	{'-', subtract},
	{'*', multiply},
	{'/', divide}
};
arithmeticFcn getArithmeticFcn(char op)
{
	for (auto& arith : arithmeticArray)
	{
		if (arith.op == op)
			return arith.fcn;
	}
	return add;
}

	int a = getInteger();
	char op = getOperation();
	int b = getInteger();

	arithmeticFcn fcn = getArithmeticFcn(op);

	std::cout << a << " " << op << " " << b << " = " << fcn(a, b) << std::endl;
=================================================================================================
=================================================================================================

int fibonacci(int number)
{
	if (number == 0)
		return 0;
	if (number == 1)
		return 1;
	return fibonacci(number - 1) + fibonacci(number - 2);
}

int fibonacciIteration(int n)
{
	if (n <= 0)
		return 0;

	int first = 0;
	int second = 1;

	for (int i = 2; i < n; ++i)
	{
		int temp = first + second;
		first = second;
		second = temp;
		std::cout << second << " ";
	}
	return second;
}


for (int i = 0; i < 13; ++i)
		std::cout << fibonacci(i) << " ";


	std::cout << "\nFibonacci iteration method:\n";

	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;

	int res = fibonacciIteration(n);
	std::cout << "\nFibonacci(" << n << ") = " << res << std::endl;


=================================================================================================


=================================================================================================
int factorial(int number)
{
	if (number == 1 || number == 0)
		return 1;
	return number * factorial(number - 1);
}
int calculateDigitSum(int num)
{
	
	 -------------------iteration------------------
	int sum = 0;

	while (num != 0)
	{
		int digit = num % 10;
		std::cout << "digit = " << digit << std::endl;
		sum += digit;
		num /= 10;

		std::cout << "num = " << num << std::endl;
	}
	return sum;
	
	--------------------recursion--------------------
if (num < 10)
	return num;
else
return calculateDigitSum(num / 10) + num % 10;
}
=================================================================================================

*/