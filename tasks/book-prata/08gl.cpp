/*
==================================================================
std::string printStr(std::string str)
{
	return str;
}

	printStr("Dmitry", 5);

std::string printStr(std::string str, int n)
{
	if (n > 0)
	{
		for (int i = 0; i < n; ++i)
			std::cout << printStr(str) << " ";
	}
	return str;
}
====================================================================

====================================================================
struct CandyBar
{
	std::string boxName;
	double width;
	int quantityCalories;
};


void printCandyBar(const CandyBar& bar);
void setValuesCandyBar(CandyBar& bar, const std::string box = "Default box", double w = 25.5, int q = 5)
{
	bar.boxName = box;
	bar.width = w;
	bar.quantityCalories = q;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	CandyBar bar;

	setValuesCandyBar(bar, "don't default");
	printCandyBar(bar);

	return 0;
}


void printCandyBar(const CandyBar& bar)
{
	std::cout << "name: " << bar.boxName << std::endl;
	std::cout << "width: " << bar.width << std::endl;
	std::cout << "Quantity of Calories: " << bar.quantityCalories << std::endl;
}
====================================================================

====================================================================


std::string toUpperString(std::string& str)
{
	std::string res = str;
	for (char& c : res)
		c = std::toupper(c);
	return res;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Enter a string (q to quit) :";
	std::string str;

	while (std::cin >> str)
	{
		if (str == "q")
		{
			std::cout << "Bye";
			break;
		}
		std::cout << toUpperString(str) << "\n";

		std::cout << "Next string (q to quit): ";
	}


	return 0;
}


====================================================================

====================================================================
struct Stringy
{
	std::string str;
	int ct;
};
void show(const std::string str);
void show(const std::string str, int count);

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Stringy beany;

	char testing[] = "Something text what it used to be.";


	show("hello", 5);
	show("Bye!");

	return 0;
}

void show(const std::string str)
{
	std::cout << str << '\n';
}

void show(const std::string str, int count)
{
	for(int i = 0; i < count; ++i)
		std::cout << "String #" << i + 1  << ": " << str << '\n';
}

void set(Stringy& strc, std::string str)
{
	strc.str = str;
}

====================================================================

====================================================================
template <typename T>

T max5(std::array<T, 5> arr)
{
	T result = 0;
	for (int i = 0; i < 5; ++i)
	{
		if (arr[i] > result)
			result = arr[i];
	}
	return result;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::array<double, 5> arDouble = { 5, 24, 5.8, 24.2, 15 };
	std::array<int, 5> arInt = { 55, 44, 32, 174, 8 };

	std::cout << "Max element in array double = " << max5(arDouble) << std::endl;
	std::cout << "Max element in array int = " << max5(arInt) << std::endl;

	return 0;
}

====================================================================
*/