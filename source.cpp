#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <string>
#include <array>
#include "add.h"
#include "constants.h"
#include "boo.h"
#include "doo.h"

string global_str;

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
int main()
{	
	setlocale(LC_ALL, "Russian");
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
	return 0;	

}	