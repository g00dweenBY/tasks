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
*/