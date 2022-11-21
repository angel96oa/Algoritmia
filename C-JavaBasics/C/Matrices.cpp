#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define F 3
#define C 5

void rellenarMatriz(int matriz[][C], int filas, int col);
void mostrarMatriz(int matriz[][C], int filas, int col);
void mostrarFilaMin(int m[][C], int filas, int col);

int main(){
	srand(time(NULL));
	//int matriz[][]; --> asi no
	int matriz[F][C]; //-->tiene F filas y C columnas, pero ningun valor
	int matriz2[][C] = {{1,2,3}, {4,5,6}};
	
	rellenarMatriz(matriz, F,C);
	printf("\n");
	mostrarMatriz(matriz, F,C);
	printf("\n");
	mostrarFilaMin(matriz, F,C);
}

void mostrarFilaMin(int m[][C], int filas, int col){
	int min, fila;
	int i, j;
	
	min = m[0][0]; 
	fila = 0;
	
	for(i=0;i<filas;i++){
		
		for(j=0;j<col;j++){
			
			if(m[i][j] < min){
				min = m[i][j]; fila = i;
				
			}
		}
	}
	
	for(i=0; i < col; i++){
		printf("[%d]", m[fila][i]);
	}
}

void mostrarMatriz(int matriz[][C], int filas, int col){
	int i, j;
	for(i=0; i<filas; i++){
		for(j=0; j<col;j++){
			printf("[%d]", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
}

void rellenarMatriz(int matriz[][C], int filas, int col){
	int i, j;
	for(i=0; i<filas; i++){
		for(j=0; j<col;j++){
			matriz[i][j] = rand()%10;	
		}
	}
}
















