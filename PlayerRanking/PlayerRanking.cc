#include <vector>
#include <map>
#include <iostream>

//EMPEZAMOS POR EL CONTENEDOR MAP

struct Player
{
	std::string name;
	int score;
};
//las claves son 7 letras minusculas iguales, pero diferentes para cada jugador
std::map <std::string, Player> Players;




int main() {

	Players["aaaaaaa"] = { "Dori", 10 };
	Players["bbbbbbb"] = { "Leny", 5 };
	Players["cccccccc"] = { "Carl", 18 };
	Players["ddddddd"] = { "Jordi", 20 };


	//le pedimos al usuario que introduzca su nombre y puntuacion

	Player p;

	std::cout << "Introduzca su nombre y puntuación" << std::endl;
	std::cin >> p.name;
	std::cin >> p.score;


	if (Players != Players) {


		
	}


}