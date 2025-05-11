#include "Tablero.h"
#include <iostream>
#include <ctime> //para usar la función time
#include <cstdlib> //para usar la función rand 

using namespace std;

Tablero::Tablero()
{
	for(int i = 0; i < FILAS; i++)
	{
		for (int j = 0; j < COLUMNAS; j++)
		{
			matrizTablero[i][j] = 0; //Inicializamos la matriz en 0s, es decir que empieza con precipicios en todas partes
		}
	}
}

void Tablero::caminoPrincipal()
{
	for (int i=0; i<5; i++){ matrizTablero[i][0] = 1; } //Primera parte del camino en la columna cero. Va iterando de 0 a 4, con lo cual la mitad de la columna queda con 1s
	for (int j=1; j<10; j++){ matrizTablero[4][j] = 1; } //Segunda parte del camino en la fila 4. Itera sobre la fila 4, de la columna 1 a la 9, con lo cual queda un camino recto de 1s
	for (int i=4; i<10; i++){ matrizTablero[i][9] = 1; } //Tercera parte del camino en la última columna. Itera en la columa 9, cambiando los valores de la fila 4 a la 9, con lo cual queda un camino recto de 1s

	// Quedaria algo asi (no importa los ceros en este momento, pues aqui solo hemos definido el camino principal):
	// 1 0 0 0 0 0 0 0 0 0
	// 1 0 0 0 0 0 0 0 0 0
	// 1 0 0 0 0 0 0 0 0 0
	// 1 0 0 0 0 0 0 0 0 0
	// 1 1 1 1 1 1 1 1 1 1
	// 0 0 0 0 0 0 0 0 0 1
	// 0 0 0 0 0 0 0 0 0 1
	// 0 0 0 0 0 0 0 0 0 1
	// 0 0 0 0 0 0 0 0 0 1
	// 0 0 0 0 0 0 0 0 0 1

}

void Tablero::rellenarTableroCompleto()
{
	
	for (int i = 0; i < FILAS; i++)
	{
		for (int j = 0; j < COLUMNAS; j++)
		{
			//Modificamos celdas que no son parte del camino principal
			if(matrizTablero[i][j] == 0)
			{
				//En esta linea, generamos un numero aleatorio que puede ser 0, o un numero muy grande
				//Le sacamos el modulo 100 para que el residuo del numero aleatorio sea entre 0 y 99
				//Si el residuo es menor a 70, entonces asignamos un 1 a la celda, si no, asignamos un 0
				//Esto genera un 70% de probabilidad de que la celda sea un 1, y un 30% de que sea un 0
				//De esta manera, hay un 70% de probabilidad de que la celda sea un camino, y un 30% de que sea un precipicio
				if((rand() % 100) < 70)
				{
					matrizTablero[i][j] = 1;
				} 
				else matrizTablero[i][j] = 0;
			}
		}
	}
	
	matrizTablero[9][9] = 1; //Esta linea siempre asegura que la celda de la fila 9 y columna 9 sea la salida al final del laberinto
	//No es necesario, pues en la funcion caminoPrincipal(), ya esta por defecto esa posicion con un 1, pero es una buena práctica por si hay modificaciones en el futuro
}
