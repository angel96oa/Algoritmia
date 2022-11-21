#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N 100

void inicializar(char cad[]);
void centroDerecha(char cad[]);
void centroIzquierda(char cad[]);
void mostrarX(char cad[], int x);
void invertir(char cad[]);
void mostrar(char cad[]);
void espacios(char cad[]);
void minusculas(char cad[]);
void comparar(char vector1[], char vector2[]);
void obtenerCadena(char cadena[]);
void mostrarCadena(char cadena[]);
void contarParejas(char cadena[]);
int longitud(char cad[]);
void concatenar(char cad1[], char cad2[]);

int main(){
	srand(time(NULL));
//----------------EJEMPLOS----------------//
	
	//ejercicio 1
	
//	char c = 'v';
//	printf("%d, %c", c, c);
//	printf("\n");
//	c +=1;
//	printf("%d, %c", c, c);

   //ejercicio 2
   
//   char c1 = 'c';
//   char c2 = 'f';
//   
//   printf("%d, %d", c1, c2);
//   printf("\n");
//   
//   char c3 = c1 + c2;
//   
//   printf("%c, %d", c3, c3);

//-------EJERCICIOS INICIALES---------//

   //ejercicio 1
   
//   char array[50];
// array[49] = '\0';
//   inicializar(array);
//   centroDerecha(array);
   
   //ejercicio 2
   
//    char array[50];
//    array[50] = '\0';	
//    incializar(array);
//	centroIzquierda(array);    
   
   //ejercicio 3
   
//   char array[50];
//   inicializar(array);
//   int X;
//   mostrarX(array, X);
//   

  //ejercicio 4
  
//  char cad[50];
//  inicializar(cad);
//  mostrar(cad);
//  printf("\n");
//  invertir(cad);

  //ejercicio 5
//  char cad[3] = {1, 129, '\0'};
//  mostrar(cad);
//  printf("\n");
//  espacios(cad);

  //------------------EJERCICIOS BASICOS--------------------//

  //ejercicio 6
  
//  char cadena[N];
//  obtenerCadena(cadena);
//  mostrarCadena(cadena);
//  contarParejas(cadena);
  
  //ejercicio 7
  
//  char vector1[50];
//  vector1[49] = '\0';
//  char vector2[50];
//  vector2[49] = '\0';
//  
//  inicializar(vector1);
//  inicializar(vector2);
//  
//  comparar(vector1, vector2);

  //ejercicio 8
  
//  printf("introduzca M: ");
//  int M;
//  scanf("%d", &M);
//  int N;
//  N = 2 * M;
//  printf("N vale %d", N);
//  
//  char vector1[N];
//  vector1[N-1] = '\0';
//  inicializar(vector1);
//  
//  char vector2[M];
//  vector2[M-1] = '\0';
//  inicializar(vector2);
//
//  vector1[N] = strcat(vector1, vector2);


  //ejercicio 9
  char vector[N] = "Hola";
  int dev= longitud(vector);
  printf("%d", dev);
  printf("\n");
  
  char vector1[N] = " buenos dias";
  concatenar(vector, vector1);
  
    
  
   
}

void inicializar(char cad[]){
	int i;

   for(i=0; cad[i]!= '\0'; i++){
   	cad[i] = rand()% 256;
   }
   
   
}

void mostrar(char cad[]){
	int i;
	
	for(i=0; cad[i]!='\0'; i++){
		printf("[%c]", cad[i]);
	}
	
}

void centroDerecha(char cad[]){
   int i;
   
   int longitud = 0;
   for(i=0; cad[i]!= '\0'; i++){
       longitud++;
    }
    
	int centro = longitud/2;
	printf("su centro es %c\n", cad[centro]);
	
	for(i=centro; i<=longitud; i++){
		printf("%c", cad[i]);
	}
}

void centroIzquierda(char cad[]){
	int i;
	int longitud=0;
	for(i=0; cad[i] != '\0'; i++){
		longitud++;
	}
	int centro = longitud/2;
	printf("su centro es %d\n", cad[centro]);
	
	for(i=0; i<=centro; i++){
		printf("%c", cad[i]);
	}
}

void mostrarX(char cad[], int x){
	int i;
	for(i=0; cad[i]!= '\0'; i++){
	if(x< (cad[i] == '\0' )){
		for(i=x; i< cad[i] != '\0'; i++){
			printf("%c", cad[i]);
		}
		printf("\n");	
		}
	}
	}
	
	
void invertir(char cad[]){    //invertir una cadena usando una auxiliar
	int longitud = strlen(cad); 
	int i;
	int j = longitud - 1;
	for(i=0; i<longitud/2; i++){
		int  aux = cad[i];
		cad[i] = cad[j];
		cad[j] = aux;
		j--;
	}
	
}

void espacios(char cad[]){
	int i;
	for(i=0; cad[i] != '\0'; i++){
		if(cad[i] == 9 && cad[i] == 12 && cad[i] == 26 && cad[i] == 129 && cad[i] == 141 && cad[i] == 143 && cad[i] == 144 && cad[i] == 157 && cad[i] == 173){
			cad[i] = 1;
		}
	}
	
	for(i=0; cad[i] != '\0'; i++){
		printf("%c", cad[i]);
	}
}

void minusculas(char cad[]){
	int i;
	for(i=0; cad[i] != '\0'; i++){
		cad[i] = rand()% (96 + 123);
	}
	
	int max = 0;
	for(i=0; cad[i]!='\0'; i++){
		if(cad[i]<max){
			max = cad[i];
		}
		printf("[%c]", max);
		
	}
}

//void comparar(char vector1[], char vector2[]){
//	int i;
//	do{
//		for(i=0; vector1[i] != '\0'; i++){
//			
//		}
//	}while(vector1[i] == vector2[i]);
//}

void obtenerCadena(char cadena[]){
	gets(cadena);
}

void mostrarCadena(char cadena[]){
	puts(cadena);
}

void contarParejas(char cadena[]){
	int i;
	int contador=0;
	for(i=0; i<strlen(cadena) - 1; i++){
		if(cadena[i] == cadena[i+1]){
			contador++;
			i++;
		}
	}
	printf("%d parejas\n", contador);
	
	int contador1[26];
	
	printf("\n");
	
	for(i=0; i<26; i++){
		contador1[i] = 0;
	}
	
	for(i=0; i< strlen(cadena)-1; i++){
		
		if(cadena[i] == cadena[i+1]){
			
			switch(cadena[i]){
				
				case 'a':
					contador1[0]++;
					break;
				case 'b':
					contador1[1]++;
					break;
				case 'c':
					contador1[2]++;
					break;
				case 'd':
					contador1[3]++;
					break;
				case 'e':
					contador1[4]++;
					break;
				case 'f':
					contador1[5]++;
					break;
				case 'g':
					contador1[6]++;
					break;
				case 'h':
					contador1[7]++;
					break;
				case 'i':
					contador1[8]++;
					break;
				case 'j':
					contador1[9]++;
					break;
				case 'k':
					contador1[10]++;
					break;
				case 'l':
					contador1[11]++;
					break;
				case 'm':
					contador1[12]++;
					break;
				case 'n':
					contador1[13]++;
					break;
				case 'o':
					contador1[14]++;
					break;
				case 'p':
					contador1[15]++;
					break;
				case 'q':
					contador1[16]++;
					break;
				case 'r':
					contador1[17]++;
					break;
				case 's':
					contador1[18]++;
					break;
				case 't':
					contador1[19]++;
					break;
				case 'u':
					contador1[20]++;
					break;
				case 'v':
					contador1[21]++;
					break;
				case 'w':
					contador1[22]++;
					break;
				case 'x':
					contador1[23]++;
					break;
				case 'y':
					contador1[24]++;
					break;
				case 'z':
					contador1[25]++;
					break;
			}
			i++;
		}
	}
	
	for(i=0; i<26; i++){
		printf("[%d]", contador1[i]);
	}
	
}

int longitud(char cad[]){
	int i;
	int longitud=0;
	for(i=0; i<cad[i] != '\0'; i++){
		longitud++;
	}
	return longitud;
}

void concatenar(char cad1[], char cad2[]){
	int i;
	for(i=0; cad1[i] != '\0'; i++){
		cad1[i] = cad1[i];
	}
	for(i= cad1[N]; cad2[i] != '\0'; i++){
		cad1[N] = cad2[i];
	}
	cad1[N] = '\0';  
	
	for(i=0; cad1[i] != '\0'; i++){
		printf("%c", cad1[i]);
	}
}








