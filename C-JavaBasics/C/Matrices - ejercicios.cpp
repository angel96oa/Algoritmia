#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 4


void inicializar(int matriz[][N], int fila, int col);
void mostrar(int matriz[][N], int fila, int col);
void inicializar2(int matriz[][M], int fila, int col);
void diagonal(int matriz[][N], int fila, int col);
void mostrarDiagonal(int matriz[][N], int fila, int col);
void diagonal2(int matriz[][N], int fila, int col);
void inicializar3(int matriz[][N], int fila, int col);
void productoEscalar(int matriz[][N], int fila, int col, int numero);
void cambiar(int matriz[][N], int fila, int col);
void menor(int matriz[][N], int fila, int col);
void fila(int matriz[][N], int fila, int col);
void columna(int matriz[][N], int fila, int col);
void total(int matriz[][N], int fila, int col);

int main(){
	srand(time(NULL));
	
	//-----------------------------EJERCICIOS BÁSICOS----------------------------//
//	//ejercicio 1
//	int matriz[N][N];
//	inicializar(matriz, N, N);
//	mostrar(matriz, N, N);

    //ejercicio 2
//    
//    int matriz[N][M];
//    
//    inicializar2(matriz, N, M);
//    mostrar(matriz, N, M);
//    
    //ejercicio 3
    
//    int matriz[N][N];
//    diagonal(matriz, N, N);
//	mostrar(matriz, N, N);
//	
	//ejercicio 4
	
//	int matriz[N][N] = {{1,2,3}, {1,2,3}, {1,2,3}, {1,2,3}, {1,2,3}};
//	diagonal2(matriz, N, N);

    //ejercicio 5
    
//    int matriz[N][N];
//    inicializar3(matriz, N, N);
//    mostrar(matriz, N, N);

    //ejercicio 6
    
//    int matriz[N][N];
//    inicializar3(matriz, N, N);
//    printf("antes: ");
//    printf("\n");
//    mostrar(matriz, N, N);
//    productoEscalar(matriz, N, N, 4);
//    printf("despues: ");
//    printf("\n");
//    mostrar(matriz, N, N);

//------------------EJERCICIOS INTERMEDIOS--------------------//
	
	//ejercicio 7
	
//	int matriz[N][N];
//	inicializar3(matriz, N, N);
//	mostrar(matriz, N, N);
//	printf("\n");
//	printf("\n");
//    cambiar(matriz, N, N);
//    mostrar(matriz, N, N);

   //ejercicio 8
   
//   int matriz[N][N];
//   inicializar3(matriz, N, N);
//   mostrar(matriz, N, N);
//   printf("\n");
//   menor(matriz, N, N);
//   printf("\n");
   
   //ejercicio 9
   
   int matriz[N][N];
   inicializar3(matriz, N, N);
   mostrar(matriz, N, N);
   printf("\n");
   fila(matriz, N, N);
//   printf("\n");
//   columna(matriz, N, N);
//   printf("\n");
//   total(matriz, N, N);
   
   


	
}

void inicializar(int matriz[][N], int fila, int col){
	
	int i, j;
	
	for(i=0; i<fila; i++){
		
		for(j=0; j<col; j++){
			matriz[i][j] = i + j;
		}
		
	}
}

void mostrar(int matriz[][N], int fila, int col){
	int i, j;
	for(i=0; i<fila; i++){
		
		for(j=0; j<col; j++){ //--> cuidado con las i y las j, cada una en su sitio
			printf(" [%d]", matriz[i][j]);
		}
		printf("\n");
	}
}

void inicializar2(int matriz[][M], int fila, int col){
	int i, j;
	for(i=0; i<fila; i++){
		for(j=0; j<col; j++){
			matriz[i][j] = i;
		}
	}
}

void diagonal(int matriz[][N], int fila, int col){
	int i, j;
	for(i=0; i<fila; i++){
		for(j=0; j<col; j++){
			if(i==j){
				matriz[i][j] = 1;
			} else {
			matriz[i][j] = 0;
		}
		
		} 
	}
}


void mostrarDiagonal(int matriz[][N], int fila, int col){
	int i, j;
	for(i=0; i<fila; i++){
		printf("[%d]", matriz[i][i]);
	}
}

void diagonal2(int matriz[][N], int fila, int col){
int i, j;
int suma = 0;
int suma2 = 0;
	for(i=0; i<fila; i++){
		
		for(j=0; j<col; j++){
			
			if(i==j){
				suma = suma + matriz[i][i]; 
			}
			
		}
		
	}
	printf("%d", suma);
	printf("\n");
	
	for(i = fila; i<=0; i--){
		for(j=col-1; j<=0; j--){
			suma2 = suma2 + matriz[i][i];
		}
	}
}


void inicializar3(int matriz[][N], int fila, int col){
	int i, j;
	for(i=0; i<fila; i++){
		for(j=0; j<col; j++){
			matriz[i][j] = rand()%20;
		}
	}
}

void productoEscalar(int matriz[][N], int fila, int col, int numero){
	int i, j;
	for(i=0; i<fila; i++){
		for(j=0; j<col; j++){
			matriz[i][j] = matriz[i][j] * numero;
		}
	}
}

void cambiar(int matriz[][N], int fila, int col){
	int i, j;
	
	for(i=0; i<fila; i++){
		
		for(j=0; j<col; j++){
			
			if(matriz[i][j] > 10){
				
				matriz[i][j] == 10;
				
			} else {
				
				matriz[i][j] == 1;
				
			}
		}
	}
}

void menor(int matriz[][N], int fila, int col){
	
	int i, j;
	int filas = 0;
	int min = matriz[0][0];
	
	for(i=0; i<fila; i++){
		
		for(j=0; j<col; j++){
			if(matriz[i][j] < min){
				min = matriz[i][j];
				filas = i;
			}
		}
	
	}
	for(i=0; i < col; i++){
		printf("[%d]", matriz[filas][i]);
	}
}

void fila(int matriz[][N], int fila, int col){
	int i, j;
	
	int media;
	int min;
	int max;
	int horizontal[col];
	int vertical[fila];
	
	//suma
for(fila=0;fila<4;fila++)
{
    int suma=0;
    for(i=0;i<5;i++)
    {
        suma+=matriz[i][j];
    }
    vertical[fila]=suma;
}
for(i=0;i<5;i++)
{
    printf("%d",horizontal[i]);
}
	//media
	
	
	//min
	
	
	//max
	
}

void columna(int matriz[][N], int fila, int col){
	
}

void total(int matriz[][N], int fila, int col){
	
}

















