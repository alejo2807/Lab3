#include "Avatar.h"
#include <iostream>

using namespace std;


//Parte Privada
bool Avatar::mover(int &fila, int &columna, int cambioFila, int cambioColumna)
{
	int nuevaFila = fila + cambioFila; //Calculamos la nueva fila
	int nuevaColumna = columna + cambioColumna; //Calculamos la nueva columna
	
	//minimo y maximo son los limites del tablero, las constantes que definimos en la clase Avatar
	if((nuevaFila>=minimo && nuevaFila<maximo && nuevaColumna>=minimo && nuevaColumna<maximo) && (tableroReferencia.getMatrizTablero()[nuevaFila][nuevaColumna] == 1))
	{
		fila = nuevaFila; //Movemos el avatar a la nueva fila
		columna = nuevaColumna; //Movemos el avatar a la nueva columna
		return true; //Retornamos true si el movimiento fue exitoso
	}
	else
	{
		return false; //Retornamos false si el movimiento no fue exitoso
	}
}


//Parte Publica
Avatar::Avatar(Tablero &tableroReferencia, int posFila, int posColumna) : tableroReferencia(tableroReferencia), posFila(0), posColumna(0) {}


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

void Avatar::moverArriba()
{
	if(mover(posFila, posColumna, -1, 0))
	{
		cout << "Te has movido hacia arriba." << endl; 
	} 
	else cout << "No puedes moverte hacia arriba, hay un precipicio en esa posicion." << endl; 
	
}

void Avatar::moverAbajo()
{
	if(mover(posFila, posColumna, 1, 0))
	{
		cout << "Te has movido hacia abajo." << endl; 
	} 
	else cout << "No puedes moverte hacia abajo, hay un precipicio en esa posicion." << endl; 
}

void Avatar::moverIzquierda()
{
	if(mover(posFila, posColumna, 0, -1))
	{
		cout << "Te has movido hacia la izquierda." << endl; 
	} 
	else cout << "No puedes moverte hacia la izquierda, hay un precipicio en esa posicion." << endl; 

}

void Avatar::moverDerecha()
{
	if(mover(posFila, posColumna, 0, 1))
	{
		cout << "Te has movido hacia la derecha." << endl; 
	} 
	else cout << "No puedes moverte hacia la derecha, hay un precipicio en esa posicion." << endl; 
}
