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
		==================================================================================================
*/