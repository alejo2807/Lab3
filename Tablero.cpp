#include "Tablero.h"
#include <iostream>
#include <ctime> //para usar la función time
#include <cstdlib> //para usar la función rand y srand


Tablero::Tablero(int filas, int columnas)
{
	this->filas = filas;
	this->columnas = columnas;
	
}



Tablero::~Tablero()
{
}




void Tablero::rellenarTablero()
{
	//Una semilla es un número que se utiliza para inicializar un generador de números aleatorios.
	//La función srand() se utiliza para establecer la semilla del generador de números aleatorios.
	//La funcion srand() genera una secuencia de números pseudoaleatorios.
	//Esto significa que cada vez que se ejecute el programa, se generarán diferentes secuencias de números "aleatorios".
	//La función time(0) devuelve el tiempo actual en segundos desde el 1 de enero de 1970. Y este numero se lo pasamos como parametro  
	//a srand() ya que al cambiar cada segundo, la semilla que iniciamos siempre cambia, lo cual hace tableros diferentes (secuencias diferentes)
	srand(time(0)); 
	int matrizTablero[filas][columnas]; //Declaramos la matriz de enteros con el tamaño de filas y columnas que le pasamos al constructor
	
	//Llenamos la matriz con números aleatorios entre 0 y 1. 
	//Esto se realiza mediante el operador modulo, ya que al dividir un número entre 2, el residuo puede ser 0 o 1.
	//Como se nos pide que la matriz sea de 0s y 1s, utilizamos este metodo para llenar la matriz, que representa el tablero.
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			matrizTablero[i][j] = rand() % 2; //Genera un número aleatorio que puede ser 0 o 1
		}
	}
	
	std::cout << "Matriz 1:" << std::endl;
	//Imprimimos la matriz en pantalla
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			std::cout << matrizTablero[i][j] << " "; //Imprimimos el valor de la matriz en la posición i,j
		}
		std::cout << std::endl; //Salto de línea para la siguiente fila
	}	
}

void Tablero::mostrarTablero()
{
	int matrizTablero[filas][columnas]; //Declaramos la matriz de enteros con el tamaño de filas y columnas que le pasamos al constructor
	rellenarTablero(); //Llamamos a la función que llena la matriz con números aleatorios entre 0 y 1
	
	std::cout << "Matriz 2:" << std::endl;
//Imprimimos la matriz en pantalla
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			std::cout << matrizTablero[i][j] << " "; //Imprimimos el valor de la matriz en la posición i,j
		}
		std::cout << std::endl; //Salto de línea para la siguiente fila
	}
	
}