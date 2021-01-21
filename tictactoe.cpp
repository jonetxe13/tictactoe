#include <iostream>
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

void situacion(){
	if (tablero[0][0] == tablero[1][0] && tablero[1][0] == tablero[2][0]){cout << "has ganado\n";}
	else if (tablero[0][1] == tablero[1][1] && tablero[1][1] == tablero[2][1]){cout << "has ganado\n";}
	else if (tablero[0][2] == tablero[1][2] && tablero[1][2] == tablero[2][2]){cout << "has ganado\n";}
	else if (tablero[0][0] == tablero[0][1] && tablero[0][1] == tablero[0][2]){cout << "has ganado\n";}
	else if (tablero[1][0] == tablero[1][1] && tablero[1][1] == tablero[1][2]){cout << "has ganado\n";}
	else if (tablero[2][0] == tablero[2][1] && tablero[2][1] == tablero[2][2]){cout << "has ganado\n";}
	else if (tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2]){cout << "has ganado\n";}
	else if (tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0]){cout << "has ganado\n";}
	else {cout << "siguiente movimiento\n";}
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

	while(true){
		DibujarTablero();
		jugador();
		situacion();
	}
	char stop;
	cin << stop;
	if(stop == ' '){
		break;
	} 
	return 0;
}

