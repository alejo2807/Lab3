#include "Avatar.h"
#include "Tablero.h"
#include "Controlador.h"
// g++ main.cpp Tablero.cpp ClaseVista.cpp Controlador.cpp Avatar.cpp -o p
int main()
{	
	Tablero tableroMain; //Creamos el tablero
	Avatar avatarMain("Avatar", tableroMain, 0, 0); //Creamos el avatar
	ClaseVista vistaMain; //Creamos la vista
	
	//Creamos el controlador, pasandole el tablero, el avatar y la vista
	Controlador controlador(tableroMain, avatarMain, vistaMain); //Creamos el controlador
	controlador.iniciarJuego(); //Iniciamos el juego
	return 0;
}
