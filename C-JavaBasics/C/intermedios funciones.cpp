#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int factorial(int numero);
int rango(int numero1, int numero2);
int primo(int entero);

int main(int argc, char** argv) {
	
	//ejercicio 1
//printf("introduzca numero: ");
//int numero;
//scanf("%d", &numero);
//fflush(stdin);
//
//int dev = factorial(numero);
//printf("%d", dev);

    //ejercicio 2
//    int numero1;
//    scanf("%d", &numero1);
//    fflush(stdin);
//    
//    int numero2;
//    scanf("%d", &numero2);
//    fflush(stdin);
//    
//    int rango1;
//    rango1 = rango(numero1, numero2);
//    
//    int factorial1;
//    factorial1 = factorial(rango1);
//    printf("%d", factorial1);

//ejercicio 3

//int entero;
//scanf("%d", &entero);
//fflush(stdin);
//
//int dev;
//dev = primo(entero);
//printf("%d", dev);
//
//ejercicio 4
int entero1;
scanf("%d", &entero1);
fflush(stdin);

int entero2;
scanf("%d", &entero2);
fflush(stdin);

int rango1;
rango1 = rango(entero1, entero2);

int dev;
dev = primo(rango1);
printf("%d", dev);

//ejercicio 5






}

int factorial(int numero){
	int n = numero;
	int factorial = 1;
	do{
		factorial =  numero*n;
		n--;
	}while( n > 1);
	
	return factorial;
}

int rango(int numero1, int numero2){
	int rango;
	rango = numero1 - numero2;
	return rango;
}

int primo(int entero){
	int i; 
	int a = 0;
	for(i = 1 ; i<=entero ; i++){
		if(entero%i == 0){
			a++;
		}
	}
	if(a == 2){
		return 1;
	}else {
		return 0;
	}
	
	
	
}









