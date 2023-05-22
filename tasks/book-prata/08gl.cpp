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
*/