#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

bool turnoDeX = false;

char tablero[][3] = {{'_', '_', '_'},{'_', '_', '_'},{'_', '_', '_'}};

void DibujarTablero(){
	
        char jugador;
	
	if (turnoDeX == false){ jugador = 'X';}
	else if (turnoDeX == true){jugador = 'O';}
	else {jugador = ' ';}

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
        
	tablero[fila][columna] = jugador;
        turnoDeX = !turnoDeX;
}
int main(){

	while(true){
		DibujarTablero();
	}
	return 0;
}

