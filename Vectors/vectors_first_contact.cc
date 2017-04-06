#include <vector>
#include <map>


//constructor sin argumentos:vector de size 0
std::vector <int> v1;

//constructor con una lista de inicializacion 
std::vector <int> v12({ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 });

//constructor de copia
std::vector <int> v4(v12);

//constructor con num elementos
std::vector <int> v9(5);	//de longitud 5 inicializados en 0

//constructor con num de elementos y valor inicial para todos los elementos
std::vector <int> v10(5, 10);	//de longitud 5 y sus valors inicializados en 10

//constructor con iteradores
std::vector <int> v7(v12.begin(), v12.end());	//copia todo el v12 usando iteradores


//constructor con iteradores, se puede dar un rango
std::vector <int> v7(v12.begin() + 1, v12.end() - 1);	//copia todo el v12 menos el primero y el ultimo

//constructor con iteradores, desde arrays
int myArray[]{ 16, 2, 77, 29 };
std::vector <int> v20(myArray, myArray + sizeof(myArray) / sizeof(int));

/*//constructor con iteradores, desde arrays
int *pv;
pv = new int[4]{ 1, 2, 3, 4 };
std::vector <int> v21(pv, pv + 4);*/

						//EJERCICIO 1


//vector de 5 elementos de tipo entero sin inicializar
std::vector <int> v1(5);

//vector de 10 elementos de tipo entero inicialozados en 0
std::vector <int> v2(10, 0);

//vector v3: {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
std::vector <int> v3({ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 });

//vector de strings
std::vector <std::string> v4({ "Gertrudiz", "Pancracia", "Anacleto", "Hipolito", "Eustaqui", "Fulgencia" });

//vector que contine la misma informacion que v3
std::vector <int> v5(v3);

//vector que contiene la informacion de persona
std::vector <std::string> v6;

						//EJERCICIO 2

//AddVectors

std::vector <int> AddVectors(std::vector <int> v1, std::vector <int> v2) {
	std::vector <int> v3(v1.size);

	for (int i = 0; i < v1.size; ++i)
	{

		v3[i] = v1[i] + v2[i];

	}

	

}

//EJEMPLOS DE MAP



struct Persona 
{
	std::string name;
	int age;
};


//Ejemplo: Uso de typedef para acortar las declaraciones de variables
//typedef permite definir tipos con nombre
typedef std::map <std::string, Persona> DicPerson;

//constructor sin argumentos 
std::map <std::string, Persona> persons;

//inserto elementos del map 
persons["46136653J"] = { "Jordi", 21 };

//insertar a través de pair
persons.insert(std::pair <std::string, Persona>("34567892D", { "Pepito", 30 }));

//insertar todos los elementos de persons en persons1 recorriendo el origal que encuente el de clave 38767892F
DicPerson persons1;
persons1.insert(persons.begin(), persons.find("45252553F"));


//DELETES DE MAP
//Ejemplo: Delere buscando el elemento que se quiere borrar usnado un iterador
auto it = persons.find("53461837X");
if (it != person.end())person.erase(it);

//Ejemplo: Delete por key
persons.erase("656534562D");

//Ejempo: Delete multiple usando un rango
//se borran todos los elementos desde el que tiene clave 46136653J hasta ultimo
auto it1 = persons.find("46136653J");
persons.erase(it1, persons.find());

//Ejemplo: acceso a una clave usando una key 
std::_Count_pr << persons["46136656J"].name;

//Ejemplo: Acceso a un elemento para actualizar un valor
persons["65653462D"].name = "Dave";


std::cout << "\npersons1 con iterador hacia adelante\n";
for (auto it = persons1.begin(); it != persons1.end(); ++it) {
	std::cout << it->first << "=>" << it->second.name << "\n";
}

std::cout << "\npersons1 con iterador hacia atras\n";
for (auto it = persons1.rbegin(); it != persons1.rend(); ++it) {
	std::cout << it->first << "=>" << it->second.name << "\n";
}

//Mas ejemplos de map

//constructor sin argumentos
std::map <char, int> first;

first['a'] = 10;
first['b'] = 30;

//constructor con iteradores sobre otro map
std::map <char, int> second(first.begin(), first.end());

//constructor por copia
std::map <char, int> third(second);


int main()
{

	std::vector <int> v1{ 1, 2, 3, 4 };
	std::vector <int> v2{ 3, 4, 5, 6 };

	AddVectors;




}
