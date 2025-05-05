#ifndef TABLERO_H
#define TABLERO_H

class Tablero {
	
	private:
		int filas;
		int columnas;
		// intentar hacer una matriz dinamica de ceros y unos. Vi que se puede usar punteros dobles char** tablero;
	public:
		Tablero(int filas, int columnas);
		~Tablero();

		int getFilas() const;
		int getColumnas() const;
	
	
};
	


#endif // TABLERO_H