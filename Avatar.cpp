#include "Avatar.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


Avatar::Avatar(string name, Tablero& tableroReferencia, int posFila, int posColumna) : name(name), tableroReferencia(tableroReferencia), posFila(0), posColumna(0) {}


void Avatar::iniciarPosicionRandom()
{
	posFila = rand() % 10; //Fila aleatoria entre 0 y 9
	posColumna = rand() % 10; //Columna aleatoria entre 0 y 9
	if (tableroReferencia.getMatrizTablero()[posFila][posColumna] == 0 || (tableroReferencia.getSalidaFila() == posFila && tableroReferencia.getSalidaColumna() == posColumna)) //verificamos que la posicion no sea un 0, y que no sea la salida
	{
		iniciarPosicionRandom(); //Llamamos a la funcion de nuevo para buscar otra posicion, que no sea un 0, y que no sea la salida
	}
}

bool Avatar::verificarPosicion()
{	
	//verificar que la posicion este dentro de los limites del tablero
	//minimo y maximo son los limites del tablero, las constantes que definimos en la clase Avatar
	if ((posFila >= minimo && posFila < maximo) && (posColumna >= minimo && posColumna < maximo)) 
	{
		//verificar que la posicion sea un 1 en el tablero.
		if(tableroReferencia.getMatrizTablero()[posFila][posColumna] == 1)
		{
			return true;
		}
	}
	return false;
}

bool Avatar::verificarSalida()
{
	if(tableroReferencia.getSalidaFila() == posFila && tableroReferencia.getSalidaColumna() == posColumna) //verificamos si la posicion es la salida
	{
		return true; //El avatar ha encontrado la salida
	}
	else{ return false; } //El avatar no ha encontrado la salida
}



























/*
void Avatar::moverPosicion(int &posicionNueva, int cambio)
{
	//verificar que la posicion este dentro de los limites del tablero
	if((posicionNueva + cambio >= minimo) && (posicionNueva + cambio < maximo)) //verificamos que la nueva posicion este dentro de los limites del tablero
	{
		posicionNueva += cambio; //movemos el avatar a la nueva posicion
	}	
}

void Avatar::moverArriba()
{
	if(verificarPosicion()) //verificamos que la posicion sea valida
	{
		moverPosicion(posFila, -1); //Se le resta 1 a la fila para mover el avatar hacia arriba
	}
	cout << "No puedes moverte hacia arriba, hay un precipicio en esa posicion." << endl; 
	return; //salimos de la funcion}
}

void Avatar::moverAbajo()
{
	if(verificarPosicion()) 
	{
		moverPosicion(posFila, 1); //Se le suma 1 a la fila para mover el avatar hacia abajo
	}
	cout << "No puedes moverte hacia abajo, hay un precipicio en esa posicion." << endl; 
	return;
}

void Avatar::moverIzquierda()
{
	if(verificarPosicion()) 
	{
		moverPosicion(posColumna, -1); //Se le resta 1 a la columna para mover el avatar hacia la izquierda
	}
	cout << "No puedes moverte hacia la izquierda, hay un precipicio en esa posicion." << endl; 
	return;
}


void Avatar::moverDerecha()
{
	if(verificarPosicion()) 
	{
		moverPosicion(posColumna, 1); //Se le suma 1 a la columna para mover el avatar hacia la derecha
	}
	cout << "No puedes moverte hacia la derecha, hay un precipicio en esa posicion." << endl; 
	return;
}

*/