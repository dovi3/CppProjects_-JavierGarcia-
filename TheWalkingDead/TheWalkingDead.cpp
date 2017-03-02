#include <iostream>
#include <string>
#include <ctime>

enum class Weapon {FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX};

std::ostream& operator << (std::ostream &os, const Weapon &weapon) // OPTATIVO PARA MAS NOTA
{
	switch (weapon)
	{
	case Weapon::GUN:				return os << "gun";
	case Weapon::SHOTGUN:			return os << "shotgun";
	case Weapon::REVOLVER:			return os << "revolver";
	case Weapon::SNIPER:			return os << "sniper";
	case Weapon::MACHINE_GUN:		return os << "machine_gun";
	default:
	}
};


class Zombie; //PROTOTIPO (FORWARD DECLARATION)

class Player
{
public:
	
	

	Player();

	void attack(Zombie &);
	bool isAlive();
	int life;
	Weapon weapon;
	float precision;

	//LOS DESTRUCTORES NO SON NECESARIOS HACERLOS EXCEPTUANDO CUANDO GENERAMOS MEMORIA DINÁMICA
	~Player();

private:	
};

class Zombie
{
public:
	Zombie();
	~Zombie();
	int distanceToPlayer;
	float speed;
	float damage;
	int life;

	void attack(Player &);
	bool isAlive();

private:
};

Player::Player() : weapon(static_cast <Weapon>(rand () % static_cast <int> (Weapon::MAX))), 
precision((rand() % 11) / 10.f), life(100)
{
}
void Player::attack(Zombie &Z)
{

	if (Z.distanceToPlayer <= 0) {

		Z.life = Z.life - (static_cast <int>(weapon) * precision);
	}
	
}

bool Player::isAlive() 
{
	if (life <= 0) {

		return false;
	}
	else {

		return true;
	}
}
Player::~Player()
{
}


Zombie::Zombie() : distanceToPlayer((rand() % 180) + 20), speed((rand() % 199) / 10.f), 
damage((rand() % 199) / 10.f), life(100)
{
}

void Zombie::attack(Player &P)
{
	if (distanceToPlayer <= 0) {

		P.life = P.life - static_cast <int>(damage);
	}
	else {

		distanceToPlayer--;
	}
}

bool Zombie::isAlive()
{
	if (life <= 0) {

		return false;
	}
	else {

		return true;
	}
}

Zombie::~Zombie()
{
}

int main()
{
	srand(static_cast <unsigned> (time(nullptr)));

	Player p1;

	const int num_zombies{10};
	Zombie zombies[num_zombies];

	std::cout << "Player \n" << "life: " << p1.life << "weapon: " << p1.weapon << "precision: " << p1.precision << std::endl;
	std::cout << "ZOMBIES ARE COMING!" << std::endl;

	bool zombiesAreAlive;

	do
	{
		zombiesAreAlive = false;
		std::cout << "player\n\life: " << p1.life << std::endl;

		for (int i{ 0 }; i < num_zombies; i++) {
			std::cout << "zombie[" << i << "]\n\life: " << zombies[i].life << ", distance: " << zombies[i].distanceToPlayer << ", speed: " << zombies[i].speed << ", damage: " << zombies[i].damage << std::endl;

			if (zombies[i].isAlive()) {

				p1.attack(zombies[i]);
				zombies[i].attack(p1);
				zombiesAreAlive = true;
			}

			std::cout << "---------------------------------" << std::endl;
		}

	} while (p1.isAlive() && zombiesAreAlive);

	if (zombiesAreAlive)
		std::cout << "GAME OVER: Zombies ate the player" << std::endl;

	else
		std::cout << "PLAYER WIN: Player killed all zombies" << std::endl;
	

}



