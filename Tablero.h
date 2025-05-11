/*
	Clase: Tablero
	Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
	Universidad del Valle
	
	Información CRC:
	Clase: Tablero
	
	Responsabilidades:
	
		- Representar el laberinto del juego como una matriz bidimensional.
		- Generar un camino principal y rellenar el tablero con caminos y
		obstáculos.
		- Proveer funciones para consultar la estructura del laberinto y la
		posición de salida.
		
	Colaboradores:
	
		- Colabora con la clase Avatar, que consulta la matriz del tablero para
		validar movimientos.
		- Colabora con la clase Controlador, que invoca los métodos de
		generación de caminos.

	Autores: Juan Jose Atuesta, David Alejandro Garcia, Sergio Garcia Ramos, Paula Mariana Murillo
	Correos Autores: atuesta.juan@correounivalle.edu.co
	- david.grueso@correounivalle.edu.co
	- sergio.garcia.ramos@correounivalle.edu.co
	- murillo.paula@correounivalle.edu.co
	
	Fecha: Mayo 2025

*/

#ifndef TABLERO_H
#define TABLERO_H

class Tablero {
	
	private:
		static const int FILAS = 10; //usamos static const para almacenar el tamaño de las filas y columnas
		static const int COLUMNAS = 10; //Aunque en este caso sea 10, si luego se quiere cambiar a 20 solo basta con cambiarlo en estas 2 lineas
		//Podriamos dejar la matriz definida asi: int matrizTablero[10][10], pero esto generaria problemas si lo quisieras cambiar luego.
		//por lo tanto, la definimos asi:
		int matrizTablero[FILAS][COLUMNAS]; //Declaramos la matriz con las ctes de arriba


	public:
		//Constructor
		Tablero();
		
		//Funciones
		void caminoPrincipal();
		void rellenarTableroCompleto();
		
		//getter de la matriz tablero
		const int (&getMatrizTablero() const )[FILAS][COLUMNAS]  { return matrizTablero; } //retorna la matriz del tablero
		int getSalidaFila() { return FILAS - 1; } //retorna la fila de la salida.
		int getSalidaColumna() { return COLUMNAS - 1; } //retorna la columna de la salida.
};
	


#endif // TABLERO_H