#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "Avatar.h"
#include "Tablero.h"
#include "ClaseVista.h"
#include <cstdlib>
#include <ctime>


class Controlador {
	
	private:
		//Atributos
		Tablero& tableroRef; //Referencia al tablero
		Avatar& avatarRef; //Referencia al avatar
		ClaseVista vista;
		bool estaJugando; 
		
	public:
		//Constructor
		Controlador(Tablero& tableroRef, Avatar& avatarRef, ClaseVista _vista);
		void iniciarJuego(); //Inicia el juego y llama a las funciones necesarias.
		
		//getter
		bool getEstaJugando() const { return estaJugando; } //Retorna el estado del juego
		
		
};







#endif // CONTROLADOR_H