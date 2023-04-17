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
	if (monster.type == MonsterType::GOBLIN) return "Goblin";
	if (monster.type == MonsterType::ORC) return "Orc";
	if (monster.type == MonsterType::SKELETON) return "Skeleton";
	if (monster.type == MonsterType::TROLL) return "Troll";
	if (monster.type == MonsterType::OGRE) return "Ogre";
	return "Unknown";
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