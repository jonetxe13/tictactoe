#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <cstdlib>
#include <vector>

using namespace std;

bool turnoDeX = false;

char tablero[][3] = {{'_', '_', '_'},{'_', '_', '_'},{'_', '_', '_'}};


char jugador(){

    char player;
	if (turnoDeX == false){ player = 'X';}
	else if (turnoDeX == true){player = 'O';}
	else {player = ' ';}
	return player;
}

string situacion(){
	
	string ganador;
 
	if (tablero[0][0] == tablero[1][0] && tablero[1][0] == tablero[2][0] && tablero[0][0] != '_'){ganador = "has ganado\n"; cout << ganador;}
	else if (tablero[0][1] == tablero[1][1] && tablero[1][1] == tablero[2][1] && tablero[0][1] != '_'){ganador = "has ganado\n"; cout << ganador;}
	else if (tablero[0][2] == tablero[1][2] && tablero[1][2] == tablero[2][2] && tablero[0][2] != '_'){ganador = "has ganado\n"; cout << ganador;}
	else if (tablero[0][0] == tablero[0][1] && tablero[0][1] == tablero[0][2] && tablero[0][0] != '_'){ganador = "has ganado\n"; cout << ganador;}
	else if (tablero[1][0] == tablero[1][1] && tablero[1][1] == tablero[1][2] && tablero[1][0] != '_'){ganador = "has ganado\n"; cout << ganador;}
	else if (tablero[2][0] == tablero[2][1] && tablero[2][1] == tablero[2][2] && tablero[2][0] != '_'){ganador = "has ganado\n"; cout << ganador;}
	else if (tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2] && tablero[0][0] != '_'){ganador = "has ganado\n"; cout << ganador;}
	else if (tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0] && tablero[0][2] != '_'){ganador = "has ganado\n"; cout << ganador;}
	else {ganador = "siguiente movimiento\n"; cout << ganador;}
 
	return ganador;
}


void DibujarTablero(){
	
    int fila;
    int columna;
     
	for(int i = 0; i < 3; i++){
	    for (int j = 0; j < 3; j++){
		    cout << tablero[i][j];
		    cout << " ";
		}
		cout << "\n";
	}
	cin >> fila;
	cin >> columna;
        
	tablero[fila][columna] = jugador();
    	turnoDeX = !turnoDeX;
}

int main(){

	cout << "mete la fila y la columna en la que quieres poner la ficha del 0 al 2\n";	
	
	while (true){
		DibujarTablero();
		jugador();
		situacion();
	}
}
