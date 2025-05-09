#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "Avatar.h"
#include "Tablero.h"
#include "ClaseVista.h"


class Controlador {
	
	private:
		//Atributos
		Tablero tableroRef; //Referencia al tablero
		Avatar& avatarRef; //Referencia al avatar
		ClaseVista vista;
		bool estaJugando; 
		
	public:
		//Constructor
		Controlador(Tablero& tableroRef, Avatar& avatarRef, ClaseVista _vista);
		void iniciarJuego(); //Inicia el juego y llama a las funciones necesarias.
		
		
};







#endif // CONTROLADOR_H