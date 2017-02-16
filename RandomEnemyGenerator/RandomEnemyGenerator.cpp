#include <iostream>
#include <string>
#include <ctime>

enum EnemyTipe {zombie, vampire, ghost, witch};

struct Enemy
{
	EnemyTipe type;

	std::string name;

	int health;
};

bool operator == (Enemy type1, Enemy type2) {

	if ((type1.type == type2.type) && (type1.name == type2.name)) {

		return true;
	}
	else
	{
		return false;
	}
	
}


void main() {


}