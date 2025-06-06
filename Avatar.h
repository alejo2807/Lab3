/*
	Clase: Avatar
	Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
	Universidad del Valle
	
	Información CRC:
	Clase: Avatar
	
	Responsabilidades:
	
		- Representar un avatar dentro de un tablero de juego.
		- Controlar la posición del avatar y permitir movimientos válidos dentro
		del tablero.
		- Verificar si la posición actual es válida o corresponde a la salida.
		- Inicializar la posición del avatar aleatoriamente evitando obstáculos.
		
	Colaboradores:
	
		- Colabora directamente con la clase Tablero, ya que utiliza sus
		métodos para validar posiciones y acceder a la estructura del tablero.

	Autores: Juan Jose Atuesta, David Alejandro Garcia, Sergio Garcia Ramos, Paula Mariana Murillo
	Correos Autores: atuesta.juan@correounivalle.edu.co
	- david.grueso@correounivalle.edu.co
	- sergio.garcia.ramos@correounivalle.edu.co
	- murillo.paula@correounivalle.edu.co
	
	Fecha: Mayo 2025
*/

#ifndef AVATAR_H
#define AVATAR_H
#include "Tablero.h"

using namespace std;	

class Avatar {
	
	private:
	
		//Atributos
		//Posicion del avatar en el tablero
		int posFila;
		int posColumna;
		//La clase avatar tiene una referencia a la clase Tablero para verificar la posicion del avatar
		Tablero& tableroReferencia;
		
		//Limites del tablero. Lo usamos para el movimiento del avatar
		static const int minimo = 0; //Limite inferior del tablero (0)
		static const int maximo = 10; //Tamaño del tablero (10x10)
		
		//Funcion privada para que solo sea accesible desde la clase Avatar
		//Esta funcion se encarga de mover el avatar a una nueva posicion, verificando que la nueva posicion sea valida
		bool mover(int& fila, int& columna, int cambioFila, int cambioColumna); //mueve el avatar a una nueva posicion
		
	public:

		//Constructor 
		Avatar(Tablero& tableroReferencia, int posFila, int posColumna);

		//Funciones iniciales y de verificacion
		void iniciarPosicionRandom(); //arregle esta funcion, con las respectivas verificaciones
		bool verificarPosicion(); //
		bool verificarSalida(); //verifica si el avatar ha encontrado la salida
		
		//Funciones de movimiento. Funciones publicas que llaman a la funcion privada mover para simplificar el movimiento
		void moverArriba(); 
		void moverAbajo(); 
		void moverIzquierda(); 
		void moverDerecha(); 
		
		//Getters 
		int getPosFila() const {return posFila;};
		int getPosColumna() const {return posColumna;}; 

		
};

#endif // AVATAR_H