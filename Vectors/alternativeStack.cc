#include <iostream>


struct nodo
{
	int valor;
	nodo *next;
};

void addStack(nodo *&pila, int num)
{
	//creas un nuevo espacio de memoria para el siguiente nodo
	nodo *newNodo = new nodo();
	//guardas el valor del nuevo nodo en num
	newNodo->valor = num;
	//el puntero del nuevo nodo haces que apunte al siguiente
	newNodo->next = pila;
	pila = newNodo;

}
void extractStack(nodo *&pila, int &num)
{
	nodo *aux = pila;
	num = aux->valor;
	//si queremos eliminar este nodo, pila ha de apuntar al siguiente nodo
	pila = aux->next;
	delete aux;


}



int main()
{
	//queremos que pila empiece apuntando a null
	nodo *pila = nullptr;
	int n;
	//respuesta del player
	char rpt;
	do
	{
		std::cout << "introduce un numero" << std::endl;
		std::cin >> n;
		addStack(pila, n);
		std::cout << "Quieres añadir otro elemento a la pila? (s/n): ";
		std::cin >> rpt;

	} while (rpt == 'S' || rpt == 's');

	std::cout << "sacando todos los elementos de la pila" << std::endl;
	//mientras no sea el final de la pila
	while (pila != nullptr)
	{
		extractStack(pila, n);
		if (pila != nullptr) {
			std::cout << n << ",";
		}
		else {
			std::cout << n;
		}
	}

	return 0;
}