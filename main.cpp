#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Avatar.h"
#include "Tablero.h"
#include <string>

int main()
{
	Tablero tablero(3, 3); // Creamos un tablero de 3x3
	tablero.rellenarTablero(); // Llenamos el tablero con números aleatorios
	tablero.mostrarTablero(); // Mostramos el tablero en pantalla	
	
	
	
	
	
	
	
	
	
	
	
}




/*
int main() {


	srand(time(0)); //semilla del tiempo

	std::cout << "3 números generados con la semilla del tiempo " << ":\n";
	std::cout << rand() << std::endl;
	std::cout << rand() << std::endl;
	std::cout << rand() << std::endl;

	return 0;
}

*/
