/*
	Clase: Controlador
	Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
	Universidad del Valle
	
	Información CRC:
	Clase: Controlador
	
	Responsabilidades:
	
		- Controlar el flujo general del juego.
		- Coordinar la interacción entre el Tablero, el Avatar y la Vista.
		- Administrar el estado del juego (inicio, movimientos, finalización).
		- Procesar la entrada del usuario y actualizar la lógica del juego en consecuencia.
	
	Colaboradores:
	
		- Tablero: para la generación y gestión del laberinto.
		- Avatar: para mover al jugador y verificar su estado.
		- ClaseVista: para mostrar menús y el tablero actualizado.

	Autores: Juan Jose Atuesta, David Alejandro Garcia, Sergio Garcia Ramos, Paula Mariana Murillo
	Correos Autores: atuesta.juan@correounivalle.edu.co
	- david.grueso@correounivalle.edu.co
	- sergio.garcia.ramos@correounivalle.edu.co
	- murillo.paula@correounivalle.edu.co
	
	Fecha: Mayo 2025

*/

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