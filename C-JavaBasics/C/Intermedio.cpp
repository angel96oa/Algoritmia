#include <stdio.h>
#include <stdlib.h>


//ejercicio basico 1

int funcion1(int x, int y, int z);
void funcion2(int x, int y);
void funcion3(int numero);
int funcion4(int numero);
void doble();
int doble2();
void doble3(int numero);
int doble4(int numero);
void IVA();
void IVA2(int precio, float IVA);
void IVA3(int precio);
float IVA4();
float IVA5(int precio, float IVA);
float IVA6(int precio);


int main(int argc, char** argv){
	
	//--ejercicio 1--//
//	int x, b, y;
//	
//	scanf("%d", &x);
//	fflush(stdin);
//	
//	scanf("%d", &b);
//	fflush(stdin);
//	
//	scanf("%d", &y);
//	fflush(stdin);
//	
//	int dev;
//	
//	dev = funcion1(x, b, y);
//	
//	if( x == 1){
//		printf("Son iguales");
//	}

 //--ejercicio 2--//

//int act, nac;
//
//scanf("%d", &act);
//fflush(stdin);
//
//scanf("%d", &nac);
//fflush(stdin);

//funcion2(act, nac);

//--ejercicio 3--//

//int numero;
//scanf("%d", &numero);
//fflush(stdin);
//printf("\n\n");
//
//funcion3(numero);

//--ejercicio 4--//

//int numero;
//scanf("%d", &numero);
//fflush(stdin);
//
//int dev;
//
//dev = funcion4(numero);
//
//printf("%d", dev);

//--ejercicio 5--//

//doble();
//
//int dev;
//dev = doble2();
//printf("%d", dev);
//
//printf("tercera funcion\n");
//int numero3;
//scanf("%d", &numero3);
//fflush(stdin);
//doble3(numero3);
//
//int numero4;
//printf("cuarta funcion\n");
//scanf("%d", &numero4);
//fflush(stdin);
//int dev2;
//dev2 = doble4(numero4);
//printf("%d", dev2);

//ejercicio 6

//parte 1
//IVA();

//parte 2

//	printf("introduzca precio: ");
//	int precio;
//	scanf("%d", &precio);
//	fflush(stdin);
//	
//	printf("Introduzca IVA: ");
//	float IVA;
//	scanf("%f", &IVA);
//	fflush(stdin);
//	
//	IVA2(precio, IVA);

//parte 3

//	printf("introduzca precio: ");
//	int precio;
//	scanf("%d", &precio);
//	fflush(stdin);
//	
//	IVA3(precio);

//parte 4;

//float dev;
//
//dev = IVA4();
//printf("%f", dev);

//parte 5
//float dev;
//
//printf("Introduzca precio: ");
//int precio;
//scanf("%d", &precio);
//fflush(stdin);
//
//printf("Introduzca IVA: ");
//float IVA;
//scanf("%f", &IVA);
//fflush(stdin);
//
//dev = IVA5(precio, IVA);
//printf("%f", dev);

//parte 6

//float dev;
//
//printf("introduzca precio: ");
//int precio;
//scanf("%d", &precio);
//fflush(stdin);
//
//dev = IVA6(precio);
//
//printf("%f", dev);
		
}


//ejercicio basico 1

int funcion1(int x, int y, int z){
	
	if(x+y==z) return 1; //verdadero
	else return 0; //falso
	
}

//ejercicio basico 2

void funcion2(int actual, int nacimiento){
	
	int edad;
	edad = actual - nacimiento;
	
	printf("%d", edad);
	
}

//ejercicio basico 3

void funcion3(int numero){
	
	int i;
	int resultado;
	int multiplicando = 0;
	
	for(i = 0; i < 11 ; i++){
		resultado = numero * multiplicando;
		multiplicando++;
		printf("%d\n", resultado);
	}
	
}

//ejercicio basico 4

int funcion4(int numero){
	if(numero < 1){
		return -1;
	}else{
		
	int i;
	int resultado = 0;
	
	for(i = 1 ; i <= numero ; i++){
		resultado = resultado + i;
	}
	
	return resultado;
	}
}

//ejercicio basico 5

void doble(){
	printf("Primera funcion\n");
	int numero;
	int doble;
	
	scanf("%d", &numero);
	fflush(stdin);
	
	doble = numero * 2;
	
	printf("%d", doble);
	printf("\n\n");
}

int doble2(){
	printf("segunda funcion\n");
	int numero;
	int doble;
	
	scanf("%d",&numero);
	fflush(stdin);
	
	doble = numero * 2;
	
	return doble;
	printf("\n\n");
}

void doble3(int numero){
	
	int doble;
	doble = numero * 2;
	
	printf("%d", doble);
	printf("\n\n");
}

int doble4(int numero){
	int doble;
	doble = numero *2;
	
	return doble;
	printf("\n\n");
}


//--ejercicio 6--//

void IVA(){
	printf("introduzca precio: ");
	int precio;
	scanf("%d", &precio);
	fflush(stdin);
	
	printf("Introduzca IVA: ");
	float IVA;
	scanf("%f", &IVA);
	fflush(stdin);
	
	printf("precio Final: ");
	float precioFinal;
	precioFinal= precio + (precio*(IVA/100));
	
	printf("%f\n", precioFinal);
	
}

void IVA2(int precio, float IVA){
	
	printf("precio Final: ");
	float precioFinal;
	precioFinal = precio + (precio*IVA/100);
	printf("%f\n", precioFinal);
	
}

void IVA3(int precio){
	
	printf("Introduzca IVA: ");
	float IVA;
	scanf("%f", &IVA);
	fflush(stdin);
	
	printf("precio Final: ");
	float precioFinal;
	precioFinal = precio + (precio*IVA/100);
	printf("%f\n", precioFinal);
	
}

float IVA4(){
	
	printf("introduzca precio: ");
	int precio;
	scanf("%d", &precio);
	fflush(stdin);
	
	printf("Introduzca IVA: ");
	float IVA;
	scanf("%f", &IVA);
	fflush(stdin);
	
	printf("precio Final: ");
	float precioFinal;
	precioFinal = precio + (precio*IVA/100);
	
	return precioFinal;
	
}

float IVA5(int precio, float IVA){
	
	printf("precio Final: ");
	float precioFinal;
	precioFinal = precio + (precio*IVA/100);
	return precioFinal;
	
}

float IVA6(int precio){
	
	printf("Introduzca IVA: ");
	float IVA;
	scanf("%f", &IVA);
	fflush(stdin);
	
	printf("precio Final: ");
	float precioFinal;
	precioFinal = precio + (precio*IVA/100);
	
	return precioFinal;
}











