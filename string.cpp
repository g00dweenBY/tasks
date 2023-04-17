/*

string lineOne, lineTwo;
	cout << "Введите первое слово: ";
	cin >> lineOne;
	cout << "Введите второе слово: ";
	cin >> lineTwo;

	if (lineOne.size() == lineTwo.size())
		cout << "Ваши строки: " << lineOne << " и " << lineTwo << " равны" << endl;
	if (lineOne.size() > lineTwo.size())
		cout << "Строка : " << lineOne << " Больше, чем строка: " << lineTwo << endl;
	if(lineOne.size() < lineTwo.size())
		cout << "Строка : " << lineTwo << " Больше, чем строка: " << lineOne << endl;


			string line, resultLine;
	while (getline(cin, line))
	{
		resultLine += line + ' ';
		cout << "Результирующая строка :" << resultLine << endl;
	}

	======================================================================
	enum class MonsterType
{
	GOBLIN,
	ORC,
	SKELETON,
	TROLL,
	OGRE,
};

struct Monster
{
	MonsterType type;
	string name;
	string classes;
	int health;
};

string getMonsterTypeString(Monster monster)
{
	if (monster.type == MonsterType::GOBLIN) return "Goblin";
	if (monster.type == MonsterType::ORC) return "Orc";
	if (monster.type == MonsterType::SKELETON) return "Skeleton";
	if (monster.type == MonsterType::TROLL) return "Troll";
	if (monster.type == MonsterType::OGRE) return "Ogre";
	return "Unknown";

	switch (monster.type)
	{
	case MonsterType::GOBLIN:
		return "Goblin";
	case MonsterType::ORC:
		return "Orc";
	case MonsterType::SKELETON:
		return "Skeleton";
	case MonsterType::TROLL:
		return "Troll";
	case MonsterType::OGRE:
		return "Ogre";
	default:
		return "Unknown";
	}
}
void printMonster(Monster monster)
{
	cout << "\nThis " << getMonsterTypeString(monster) <<
		" your class " << monster.classes <<
		" is named " << monster.name << " and has "
		<< monster.health << " health" << endl;
};

	Monster orc = { MonsterType::ORC, "Goodween", "Warrior", 210 };
	Monster goblin = { MonsterType::GOBLIN, "Treax", "Rogue", 130 };
	Monster skeleton = { MonsterType::SKELETON, "Adept", "Priest", 120 };
	Monster troll = { MonsterType::TROLL, "hunterio", "Hunter", 150 };
	Monster ogre = { MonsterType::OGRE, "Bedum", "Warrior", 240 };
	printMonster(orc);
	printMonster(goblin);
	printMonster(skeleton);
	printMonster(troll);
	printMonster(ogre);
	
	======================================================================
*/