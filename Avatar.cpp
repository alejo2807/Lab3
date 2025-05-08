#include "Avatar.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


Avatar::Avatar(string name, Tablero& tableroReferencia, int posFila, int posColumna) : name(name), tableroReferencia(tableroReferencia), posFila(0), posColumna(0) {}


void Avatar::iniciarPosicionRandom()
{
	this->posFila = rand() % 10; //Fila aleatoria entre 0 y 9
	this->posColumna = rand() % 10; //Columna aleatoria entre 0 y 9
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
	else { return false; } 

}

bool Avatar::verificarSalida()
{
	if(tableroReferencia.getSalidaFila() == posFila && tableroReferencia.getSalidaColumna() == posColumna) //verificamos si la posicion es la salida
	{
		return true; //El avatar ha encontrado la salida
	}
	else{ return false; } //El avatar no ha encontrado la salida
}

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
	moverPosicion(posFila, -1); //Se le resta 1 a la fila para mover el avatar hacia arriba
}

void Avatar::moverAbajo()
{
	moverPosicion(posFila, 1); //Se le suma 1 a la fila para mover el avatar hacia abajo
}

void Avatar::moverIzquierda()
{
	moverPosicion(posColumna, -1); //Se le resta 1 a la columna para mover el avatar hacia la izquierda
}

void Avatar::moverDerecha()
{
	moverPosicion(posColumna, 1); //Se le suma 1 a la columna para mover el avatar hacia la derecha
}

