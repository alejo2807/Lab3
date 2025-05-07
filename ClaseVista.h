#ifndef CLASEVISTA_H
#define CLASEVISTA_H

class ClaseVista 
{
	public:
	
		ClaseVista(); //Constructor
		static const int FILAS = 10;
		static const int COLUMNAS = 10;
		void mostrarJuego(int matrizTablero[FILAS][COLUMNAS], int posicionFila, int posicionColumna); //muestra el tablero
	
};

#endif // CLASEVISTA_H