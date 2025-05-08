#include "ClaseVista.h"
#include <iostream> //Para usar cout y endl
#include <string>
using namespace std;

ClaseVista::ClaseVista()
{
}

void ClaseVista::mostrarJuego(const int (&matrizTablero)[FILAS][COLUMNAS], int posicionFila, int posicionColumna )
{
	cout << "Laberinto:" << endl;
	//Imprimimos la matriz en pantalla
	for (int i = 0; i < FILAS; i++)
	{
		for (int j = 0; j < COLUMNAS; j++)
		{
			if(posicionFila == i && posicionColumna == j) //Si la posición es la del jugador, imprimimos un "P" en vez de un 1 o 0
			{
				cout << "A "; //Imprimimos el valor de la matriz en la posición i,j
			}
			else if(matrizTablero[i][j] == 1) cout << "1 "; //Imprimimos el valor de la matriz en la posición i,j
			else  cout << "0 "; //Imprimimos el valor de la matriz en la posición i,j
		}
		cout << endl; //Salto de línea para la siguiente fila
	}	
	
	
}

void ClaseVista::mostrarMenu()
{
}
