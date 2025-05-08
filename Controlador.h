#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "Avatar.h"
#include "Tablero.h"
#include "ClaseVista.h"


class Controlador {
	
	private:
		//Atributos
		Tablero& tableroRef; //Referencia al tablero
		Avatar& avatarRef; //Referencia al avatar
		ClaseVista vista; //Referencia a la vista
		
	public:
		//Constructor
		Controlador( Tablero& tablero, Avatar& avatar, ClaseVista _vista) : tableroRef(tablero), avatarRef(avatar), vista(_vista) {};
		void iniciarJuego(); //Inicia el juego y llama a las funciones necesarias.
		
};







#endif // CONTROLADOR_H