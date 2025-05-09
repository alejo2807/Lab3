#include "Controlador.h"
#include <iostream>
#include <string>

using namespace std;

Controlador::Controlador(Tablero& tablero, Avatar& avatar, ClaseVista _vista) : tableroRef(tablero), avatarRef(avatar), vista(_vista) 
{
	estaJugando = true; //Inicializamos la variable estaJugando en true, para que el juego comience
}


void Controlador::iniciarJuego()
{
	vista.mostrarMenuInicio(); 
	int opcion;
	cin >> opcion;
	
	if(opcion == 1) //Si elige jugar
	{	
		
		srand(time(0)); //Iniciamos la semilla para generar numeros aleatorios
		tableroRef.caminoPrincipal(); //Llamamos a la funcion que genera el camino principal del laberinto
		tableroRef.rellenarTableroCompleto(); //Llamamos a la funcion que rellena el tablero completo
		avatarRef.iniciarPosicionRandom();
		vista.mostrarJuego(tableroRef.getMatrizTablero(), avatarRef.getPosFila(), avatarRef.getPosColumna()); //Mostramos el tablero con la posicion del avatar
		
		while(estaJugando) //Mientras el juego este en curso
		{
			vista.mostrarMenuMovimiento(); //Mostramos el menu de movimiento
			int opcionMovimiento;
			cin >> opcionMovimiento; //Leemos la opcion del usuario
			switch(opcionMovimiento) //Verificamos la opcion elegida por el usuario
			{
				case 1: avatarRef.moverArriba(); break; //Mover hacia arriba
				case 2: avatarRef.moverAbajo(); break; //Mover hacia abajo
				case 3: avatarRef.moverIzquierda(); break; //Mover hacia la izquierda
				case 4: avatarRef.moverDerecha(); break; //Mover hacia la derecha
				default: cout << "Opcion invalida. Intente de nuevo" << endl; break; //Si la opcion no es valida, mostramos un mensaje de error
			}
			
			vista.mostrarJuego(tableroRef.getMatrizTablero(), avatarRef.getPosFila(), avatarRef.getPosColumna()); //Mostramos el tablero con la posicion del avatar
			
			if(avatarRef.verificarSalida()) //Verificamos si el avatar ha encontrado la salida
			{
				cout << "Felicidades, has encontrado la salida!" << endl; //Si el avatar ha encontrado la salida, mostramos un mensaje de felicitaciones
				estaJugando = false; //Cambiamos la variable estaJugando a false, para salir del bucle
			}	
		}
	}
	
	else if(opcion == 2) //Si elige salir
	{
		cout << "Adios!" << endl; 
	}
	
	else 
	{
		cout << "Opcion invalida. Intente de nuevo" << endl; //Mostramos un mensaje de error
	}
	
}

//notas adicionales sobre la semilla de numeros aleatorios:
//Una semilla es un número que se utiliza para inicializar un generador de números aleatorios.
//La función srand() se utiliza para establecer la semilla del generador de números aleatorios.
//La funcion srand() genera una secuencia de números pseudoaleatorios.
//Esto significa que cada vez que se ejecute el programa, se generarán diferentes secuencias de números "aleatorios".
//La función time(0) devuelve el tiempo actual en segundos desde el 1 de enero de 1970. Y este numero se lo pasamos como parametro  
//a srand() ya que al cambiar cada segundo, la semilla que iniciamos siempre cambia, lo cual hace tableros diferentes (secuencias diferentes) 