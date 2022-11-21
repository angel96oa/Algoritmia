#include <stdio.h>
#include <stdlib.h>

void mostrarArray(int v[], int tam);
void escribirArray(int array[], int tam);


int main(){
	//int[] array = new int[5]; --> en java
	//int array[]; --> error
	
	//declaracion e inicialización
//	int array2[3];
//	int array[] = {10, 20, 30};
//	
////	//muestro
//	int i;
//	for(i = 0 ; i < 3 ; i++){
//		//printf("%d, array[i]); --> 102030
//		printf("[%d]", array2[i]); //--> [10][20][30]
//	}
//	printf("\n");
//	printf("\n");
//	//otras formas de mostrar
//	//invertido
////	int i;
//	for(i=3-1 ;i >= 0; i--){
//		printf("[%d]", array2[i]); //--> [10][20][30]
//	}
//	printf("\n");
//	printf("\n");
////	
//	//hasta la mitad
////	int i;
//	for(i=0; i < 3/2 ; i++){
//		printf("[%d]", array2[i]); //--> [10][20][30]
//	}
//	printf("\n");
//	printf("\n");
////	
////	//desde la mitad
////	int i;
//	for(i=3/2;i<3;i++){
//		printf("[%d]", array2[i]); //--> [10][20][30]
//	}
//	printf("\n");
//	printf("\n");
//	
////	//cada dos
////	int i;
//	for(i = 0 ; i < 3 ; i=i+2){
//		printf("[%d]", array2[i]); //--> [10][20][30]
//	}
//	printf("\n");


//introducir datos, modificar el array (y lo mostramos)

//pedir
//int i;

//for(i = 0 ; i < 3 ; i++){
//	scanf("%d", &array2[i]);
	//mostrar entero normal
//	printf("[%d]", array[i]);
//}

//printf("\n");

//-----------------------//

//random

//for(i = 0; i < 3 ; i ++){
//	array[i] = rand()%100;
//	//mostrar
//	printf("[%d]", array[i]);
//}

//printf("\n");

////----------------------//

////algun calculo

//for(i=0;i<3;i++){
//	array[i] = (((i*2)/3)%2==0);
//	//mostrar
//	printf("[%d]", array[i]);
//}

//-------------------------------------------------------//

int array[3] = {10, 20, 30};

mostrarArray(array, 3); //-->10,20,30
printf("%d");
mostrarArray(&array[1], 2); //-->20,30
printf("%d");
mostrarArray(array, 2); //-->10,20
printf("%d");
mostrarArray(&array[0], 3); //--> 10,20,30
printf("%d");
escribirArray(array, 3);



}

void mostrarArray(int v[], int tam){
	int i;
	for(i=0;i<tam;i++){
		printf("[%d]", v[i]);
	}
	printf("%d");
}

void escribirArray(int array[], int tam){
	int i;
	for(i=0; i<tam ; i++){
		array[i] = rand()%100;
		
	}
}

