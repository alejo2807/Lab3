#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Avatar.h"
#include "Tablero.h"
#include <string>

// g++ main.cpp Tablero.cpp -o p
int main()
{
	
	//Una semilla es un número que se utiliza para inicializar un generador de números aleatorios.
	//La función srand() se utiliza para establecer la semilla del generador de números aleatorios.
	//La funcion srand() genera una secuencia de números pseudoaleatorios.
	//Esto significa que cada vez que se ejecute el programa, se generarán diferentes secuencias de números "aleatorios".
	//La función time(0) devuelve el tiempo actual en segundos desde el 1 de enero de 1970. Y este numero se lo pasamos como parametro  
	//a srand() ya que al cambiar cada segundo, la semilla que iniciamos siempre cambia, lo cual hace tableros diferentes (secuencias diferentes)
	srand(time(0)); 
	
	//creacion del tablero del juego
	Tablero tablero;  
	tablero.caminoPrincipal(); // Definimos el camino principal del tablero
	tablero.rellenarTableroCompleto(); // Llenamos el tablero con números aleatorios (0s y 1s)
	//tablero.mostrarTablero(); // Mostramos el tablero en pantalla

	
	
	
	
	
	
	
	
	
	return 0;
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
