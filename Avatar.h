#ifndef AVATAR_H
#define AVATAR_H
#include <string>
#include "Tablero.h"
using namespace std;	

class Avatar {
	
	private:
	
		//Atributos
		string name;
		//Posicion del avatar en el tablero
		int posFila;
		int posColumna;
		//La clase avatar tiene una referencia a la clase Tablero para verificar la posicion del avatar
		Tablero& tableroReferencia;
		
		//Limites del tablero. Lo usamos para el movimiento del avatar
		static const int minimo = 0; //Limite inferior del tablero (0)
		static const int maximo = 10; //Tamaño del tablero (10x10)
		
	public:

		//Constructor 
		Avatar(string name, Tablero& tableroReferencia, int posFila, int posColumna);

		//Funciones iniciales y de verificacion
		void iniciarPosicionRandom();
		bool verificarPosicion(); 
		bool verificarSalida(); //verifica si el avatar ha encontrado la salida
		
		//Movimiento del avatar
		//El parametro posicionNueva es la posicion a modificar, por eso se pasa por referencia
		//El parametro cambio es el valor a sumar o restar a la posicion
		void moverPosicion(int& posicionNueva, int cambio); //mueve el avatar a una nueva posicion
		void moverArriba();
		void moverAbajo();
		void moverIzquierda();
		void moverDerecha();
		
		//Getters 
		string getName() {return this->name;}; 
		int getPosFila() {return this->posFila;};
		int getPosColumna() {return this->posColumna;}; 

		
};







#endif // AVATAR_H