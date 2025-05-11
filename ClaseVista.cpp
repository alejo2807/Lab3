#include "ClaseVista.h"
#include <iostream> 

using namespace std;

ClaseVista::ClaseVista(){}

void ClaseVista::mostrarJuego(const int (&matrizTablero)[FILAS][COLUMNAS], int posicionFila, int posicionColumna )
{
	cout << "Laberinto:" << endl;
	//Imprimimos la matriz en pantalla
	for (int i = 0; i < FILAS; i++)
	{
		for (int j = 0; j < COLUMNAS; j++)
		{
			if(posicionFila == i && posicionColumna == j) //Si la posición es la del jugador, imprimimos una "A" en vez de un 1 o 0
			{
				cout << "A "; //Imprimimos el valor de la matriz en la posición i,j
			}
			else if(matrizTablero[i][j] == 1) cout << "1 "; //Imprimimos el valor de la matriz en la posición i,j
			else  cout << "0 "; //Imprimimos el valor de la matriz en la posición i,j
		}
		cout << endl; //Salto de línea para la siguiente fila
	}	
	
	
}

void ClaseVista::mostrarMenuInicio()
{	
	cout << "-----------------------------------------" << endl;
	cout << "🦇 Bienvenido a La Ciudad De La Furia 🦇"<<endl;
	cout << "-----------------------------------------"<<endl;
	cout << "Tu objetivo es salir con vida de este tenebroso laberinto...\n¿Podras conseguirlo?" <<endl;
	cout << "-----------------------------------------" <<endl;
	cout << "Menu de inicio:" << endl;
	cout << "1. Jugar" << endl;
	cout << "2. Salir" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "Ingrese una opcion: "<<endl;
	cout << "-----------------------------------------" << endl;

}

void ClaseVista::mostrarMenuMovimiento()
{
	cout << "------------------------------------------" << endl;
	cout << "🦇 Menu de movimiento: 🦇 " << endl;
	cout << "------------------------------------------" << endl;
	cout << "1. Arriba" << endl;
	cout << "2. Abajo" << endl;
	cout << "3. Izquierda" << endl;
	cout << "4. Derecha" << endl;
	cout << "5. Salir (si el laberinto no tiene solucion)" << endl;
	cout << "------------------------------------------" << endl;
	cout << "Ingrese una opcion: "<< endl;
	cout << "------------------------------------------" << endl;
}

void ClaseVista::mostrarMenuReglas()
{
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "🦇 Reglas del juego: 🦇" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "1. El avatar se mueve por el laberinto, y debe encontrar la salida." << endl;
	cout << "2. El avatar puede moverse en cualquier direccion (arriba, abajo, izquierda, derecha)." << endl;
	cout << "3. Los ceros son precipicios, y los unos son caminos." << endl;
	cout << "4. La posicion del avatar se representa con una 'A' en el laberinto" << endl;
	cout << "5. El juego termina si el usuario decide salir o encuentra la salida." << endl;
	cout << "6. El juego es aleatorio, por lo que cada vez que se juega, el laberinto es diferente." << endl;
	cout << "Buena suerte, agente. 🦇" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
}
