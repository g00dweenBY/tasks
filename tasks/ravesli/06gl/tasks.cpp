/*
std::string names[] = { "Sasha", "Ivan",  "John", "Orlando", "Leonardo", "Nina", "Anatoly", "Molly", "Dima"};
	std::cout << "Enter your names: ";
	std::string myName;
	std::cin >> myName;
	bool flag(false);

	for (const auto& name : names)
	{
		if (name == myName)
		{
			flag = true;
			break;
		}
	}

	if (flag)
		std::cout << "Your name " << myName << " has in array" << std::endl;
	else
		std::cout << "Your name " << myName << " doesn\'t hase in array" << std::endl;

		==================================================================================================

enum Items
{
	ITEM_HEALTH_POTION,
	ITEM_TORCH,
	ITEM_ARROW,
	MAX_ITEMS
};

int countTotalItems(int* items)
{
	int totalItems = 0;
	for (int i = 0; i < MAX_ITEMS; ++i)
	{
		totalItems += items[i];
	}
	return totalItems;
}


	int typeItmes[MAX_ITEMS] = { 12, 12, 32 };

	std::cout << "Your hero has " << countTotalItems(typeItmes) << " items\n";
		==================================================================================================

		==================================================================================================
		std::cout << "Введите количество студентов: ";
	int numberStudents = 0;
	std::cin >> numberStudents;


	Student* students = new Student[numberStudents];

	for (int i = 0; i < numberStudents; ++i)
	{
		std::cout << "Student #" << i + 1 << " : ";
		std::cout << "\nStdent name: ";
		std::cin >> students[i].name;
		std::cout << "Student estimate: ";
		std::cin >> students[i].estimate;
	}

	sorteredStudents(students, numberStudents);



	std::cout << "\n All students: \n";
		for (int i = 0; i < numberStudents; ++i)
	{
		std::cout << "Students info: ------name: " << students[i].name << " his estimate: " << students[i].estimate << std::endl;
		std::cout << "------------------------------------------------------------------------\n";
	}

	struct Student
{
	std::string name;
	int estimate;
};

void sorteredStudents(Student* arr, int length)
{
	for (int startIndex = 0; startIndex < length; ++startIndex)
	{
		int smallIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (arr[startIndex].estimate < arr[currentIndex].estimate)
				smallIndex = currentIndex;
		}
		std::swap(arr[startIndex].estimate, arr[smallIndex].estimate);
		std::swap(arr[startIndex].name, arr[smallIndex].name);
	}
}
		==================================================================================================
*/