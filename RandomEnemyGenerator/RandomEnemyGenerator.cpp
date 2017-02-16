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

Enemy operator == (Enemy type1, Enemy type2) {

	bool SAME = false;

	if ((type1.type == type2.type) && (type1.name == type2.name)) {
		
		SAME = true;
	}
	return SAME;
}


void main() {


}