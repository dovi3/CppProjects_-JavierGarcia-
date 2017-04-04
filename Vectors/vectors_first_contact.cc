#include <vector>


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



int main()
{

	std::vector <int> v1{ 1, 2, 3, 4 };
	std::vector <int> v2{ 3, 4, 5, 6 };

	AddVectors;




}
