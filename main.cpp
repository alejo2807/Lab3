#include "Avatar.h"
#include "Tablero.h"
#include "Controlador.h"
// g++ main.cpp Tablero.cpp ClaseVista.cpp Controlador.cpp Avatar.cpp -o p
int main()
{	
	//Creamos el tablero, el avatar y la vista
	Tablero tableroMain; 
	Avatar avatarMain(tableroMain, 0, 0);
	ClaseVista vistaMain; 
	
	//Creamos el controlador, pasandole el tablero, el avatar y la vista
	Controlador controlador(tableroMain, avatarMain, vistaMain); //Creamos el controlador
	
	do
	{
		controlador.iniciarJuego(); //Iniciamos el juego
	}
	while(controlador.getEstaJugando()); //Mientras el juego no haya terminado, seguimos jugando
	
	return 0;
}
