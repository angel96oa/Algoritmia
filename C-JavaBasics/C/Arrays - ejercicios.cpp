#include <stdio.h>
#include <stdlib.h>
#define	N	3
	void copiar(int array[], int array2[]);
	void invertir(int array[], int array2[]);
	void invertir2(int array[]);
	void ordenar(int array[]);
	void ordenar(int array[], int tam);
	int Comparar(int array1[], int array2[], int tam1,int tam2);
	void concatenar(int array1[], int array2[], int tam1, int tam2);
	void insertar(int array[]);
	int insertar(int array[], int arrayAux[], int tam);
	
	
int main(){
	//ejercicio 1//
//	int array[5];
//	
//	int i;
//	for(i = 0; i<5; i++){	
//		scanf("%d", &array[i]);
//		fflush(stdin);	
//	}
//	for(i=0;i<5;i++){
//	printf("[%d]", array[i]);	
//	}
	
	//ejercicio 2
	
//	int array[3] = {20, 54, 32};
//	int i;
//	for(i=2; i<3;i++){
//		printf("[%d]", array[i]);
//	}
	
	//ejercicio 3
//	
//	int array[4] = {10, 15, 30 , 41};
//	int i;
//	for(i=0; i<4; i++){
//		if(array[i] % 2 ==0){
//			printf("[%d]", array[i]);
//		}
//	}
	
	//ejercicio 4
	
//	int array[7];
//	int i;
//	for(i = 0; i < 7 ; i++){
//		scanf("%d", &array[i]);
//		fflush(stdin);
//	}
//	for(i=0; i < 7 ;i++){
//		if(i%2==0){
//			printf("[%d]", array[i]);
//		}
//	}

    //ejercicio 5
    
//    int array[3];
//    int i;
//    
//    for(i = 0; i<3; i++){
//    	
//    	scanf("%d", &array[i]);
//    	fflush(stdin);
//    	
//    	if(array[i] > 0){
//    		
//    		printf("[%d] es positivo\n", array[i]);
//    		
//    	} else if(array[i] == 0){
//    		
//    		printf("[%d] es cero\n", array[i]);
//    		
//    	} else ("[%d] es negativo\n", array[i]);
//    	
//    }
//    printf("\n\n");
//    for(i=0;i<3;i++){
//    	printf("[%d]", array[i]);
//    }


    //ejercicio 6
//    
//    int array[5] = {1,2, 200, 6, 60};
//    int i;
//    for(i=0; i<5; i++){
//    	if(array[i] > 50){
//    		printf("[%d]", array[i]);
//    	}
//    }

    //ejercicio 7
    
//    int array[3] = {1,2,3};
//    int i;
//    int suma=0;
//    for(i=0;i<3;i++){
//    	suma = suma + array[i];
//    }
//    printf("%d", suma);
//    
    //ejercicio 8
//    
//    int array[4] = {20, 10, 40, 20};
//    int i;
//    int suma = 0;
//    int media;
//    for(i=0;i<4;i++){
//    	suma = suma + array[i];
//    }
//    media = suma/i;
//    printf("%d", media);
    
    //ejercicio 9
    
//    int array[3] = {1,2,3};
//    int i;
//    int producto = 1;
//    for(i=0;i<3;i++){
//    	producto = producto * array[i];
//    }
//    printf("%d", producto);
// 

   //ejercicio 10
   
//   int array[5] = {2,3,9,6,7};
//   int i;
//   int max=array[0];
//   for(i = 0; i < 5; i++){
//   	if(array[i]>max){
//   		max = array[i];
//   	}
//   }
//   printf("%d", max);
//    
    //ejercicio 11
    
//   int array[5] = {2,3,9,6,7};
//   int i;
//   
//   int max=array[0];
//   int posicion=0;
//   
//   for(i = 0; i < 5; i++){
//   	if(array[i]>max){
//   		max = array[i];
//   		posicion++;	
//   	}
//   }
//   
//   printf("%d", posicion);
//

//----------------EJERCICIOS INTERMEDIOS-------------------//	
	
	//EJERCICIO 12
	
//	int array[3] = {1,2,3};
//	int array2[3];
//	
//	copiar(array, array2);
	
	//ejercicio 13
	
//	int array[3] = {1,2,3};
//	int array2[3];
//	
//	invertir(array, array2);
	
	
	//ejercicio 14
	
//	int array[3] = {1,2,3};
//	invertir2(array);
//	
	//ejercicio 15
	
//	int array[N] = {2,3,1};
//	ordenar(array, N);

    //ejercicio 16
	
//	int array1[N] = {1,2,3};
//	int array2[N] = {3,2,1};
//	int dev1;
//	
//	dev1 = Comparar(array1, array2, N, N);
//	printf("%d\n", dev1);
//	
//	printf("\n");
//	
//	int array3[N] = {1,2,3};
//	int array4[N] = {1,2,3};
//	int dev2;
//	
//    dev2 = Comparar(array3, array4, N, N);
//	printf("%d", dev2);

    //ejercicio 17
    
//    int array1[N] = {1,2,3};
//    int array2[N] = {4,5,6};
//    
//    concatenar(array1, array2, N, N);
	
	//ejercicio 18
	
	int array[N] = {1,2,3};
	int arrayAux[N+1];
	int i;
	for(i=0; i<N; i++){
		printf("[%d]", array[i]);
	}
	printf("\n");
	int dev = insertar(array, arrayAux, N);
	
	if (dev == 1){
		for(i=0; i<N+1; i++){
			printf("[%d]", arrayAux[i]);
		}	
	}
	
}
	void copiar(int array[], int array2[]){
	
	int i=0;
	
	for(i=0;i<3;i++){
		array2[i] = array[i];
	}
	for(i=0;i<3; i++){
	printf("[%d]", array2[i]);	
	
	}
	printf("\n");
	for(i=0;i<3; i++){
	printf("[%d]", array[i]);	
	
	}
	

	
}

void invertir(int array[], int array2[]){
int i;
	int d;
	for(i=0, d=2; i<3, d>=0; i++, d--){
		array2[d]=array[i];
	}
	for(i =0; i<3;i++){
		printf("[%d]", array2[i]);
	}
}

void invertir2(int array[]){

 int i;
	for(i=3-1; i>=0; i--){
		array[i]=array[i];
			printf("[%d]", array[i]);
		}
		
}


	
void ordenar(int array[], int tam){
	
	int ordenado;
	int i;
	do{
		ordenado = 1;
		
		for(i=0; i< N-1; i++){
			if(array[i] > array[i+1]){
			
			int aux = array[i];
			array[i] = array[i+1]; //dibujo de los 3 cuadrados relacionandose entre si
			array[i+1] = aux;
			
			ordenado = 0;	
			}
		}
	} while (!ordenado);
	
	
	for(i=0; i<tam; i++){
		printf("[%d]", array[i]);
	}
}

int Comparar(int array1[], int array2[], int tam1, int tam2){

	int i;
	
	if(tam1 == tam2){
		
		for(i=0;i<tam1;i++){
			if (array1[i] != array2[i]){
				return 0;
			}
		}
		
		
		return 1;
			
	} else {
		return 0;
	}
}
	
	void concatenar(int array1[], int array2[], int tam1, int tam2){
		int tam3 = tam1 + tam2;
		int array3[tam3];
		int i;
		int j;
		
		for (i=0; i < tam1; i++){
			array3[i] = array1[i];
		}
		
		for(i=tam1, j = 0; i<tam2, j <tam2; i++, j++){
			array3[i] = array2[j];
		}
		
		for(i=0;i< tam1; i++){
			printf("[%d]", array1[i]);
		}
		printf("\n");
		for(i=0;i< tam2; i++){
			printf("[%d]", array2[i]);
		}
		printf("\n");
		for(i=0;i< tam3; i++){
			printf("[%d]", array3[i]);
		}
		
	}
	
	int insertar(int array[], int arrayAux[], int tam){
		
		int i;
		
		int elemento;
		printf("Inserta un elemento: ");
		scanf("%d", &elemento);
		fflush(stdin);
		
		int posicion;
		printf("Inserta posicion: ");
		scanf("%d", &posicion);
		fflush(stdin);
		
		if (posicion < 0 || posicion >= tam + 1){
			return 0;
		}
		else{
			for (i = 0 ; i < posicion; i++){
				arrayAux[i] = array[i];
			}	
			
			arrayAux[posicion] = elemento;
			
			for (i = posicion + 1 ; i < tam + 1; i++){
				arrayAux[i] = array[i];
			}
			
			return 1;
		}
		 
	}


	




	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
