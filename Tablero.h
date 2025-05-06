#ifndef TABLERO_H
#define TABLERO_H

class Tablero {
	
	private:
		int filas;
		int columnas;
	
	public:
	
		Tablero(int filas, int columnas);
		~Tablero();
		
		void rellenarTablero();
		void mostrarTablero();
	
};
	


#endif // TABLERO_H