/*
	Clase: ClaseVista
	Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
	Universidad del Valle
	
	Información CRC:
	Clase: ClaseVista
	
	Responsabilidades:
	
		- Mostrar el estado del juego en consola, incluyendo el laberinto y la
		posición del avatar.
		- Presentar menús interactivos al usuario para iniciar el juego,
		moverse o consultar reglas.
		- Facilitar la experiencia visual del usuario dentro del entorno del
		laberinto.
		
	Colaboradores:
	
		- Colabora indirectamente con la clase Tablero (a través de la matriz
		que recibe).
		- Colabora con la clase Avatar, ya que muestra su posición actual en
		el laberinto.

	Autores: Juan Jose Atuesta, David Alejandro Garcia, Sergio Garcia Ramos, Paula Mariana Murillo
	Correos Autores: atuesta.juan@correounivalle.edu.co
	- david.grueso@correounivalle.edu.co
	- sergio.garcia.ramos@correounivalle.edu.co
	- murillo.paula@correounivalle.edu.co
	
	Fecha: Mayo 2025
*/

#ifndef CLASEVISTA_H
#define CLASEVISTA_H

class ClaseVista 
{
	public:
	
		ClaseVista(); //Constructor
		static const int FILAS = 10;
		static const int COLUMNAS = 10;
		void mostrarJuego(const int (&matrizTablero)[FILAS][COLUMNAS], int posicionFila, int posicionColumna); //muestra el tablero
		void mostrarMenuInicio(); 
		void mostrarMenuMovimiento(); 
		void mostrarMenuReglas();
};

#endif // CLASEVISTA_H