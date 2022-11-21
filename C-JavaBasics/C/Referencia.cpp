#include <stdio.h>
#include <stdlib.h>

void f(int x, int* invertido);
void doble(int* numero);
void doble2(int numero, int* resultado);
int operacion(int numero, int* doble, int* mitad);
int incremento(int x, int* y, int* z);
void sumaSerie(float numero, float *resultado);


int main(){
	
	//ejercicio 8
	
//	int numero1;
//	scanf("%d", &numero1);
//	fflush(stdin);
//	
//	doble(&numero1);
//	
//	printf("%d", numero1);
//
//int numero;
//int resultado;
//scanf("%d", &numero);
//fflush(stdin);
//
//doble2(numero, &resultado);
//
//printf("%d", resultado);

////ejercicio 9
//int numero;
//scanf("%d", &numero);
//fflush(stdin);
//
//int doble;
//int mitad;
//
//operacion(numero, &doble, &mitad);
//
//printf("%d, %d", doble, mitad);

//ejercicio 10
//int numero1;
//scanf("%d", &numero1);
//fflush(stdin);
//
//int numero2;
//scanf("%d", &numero2);
//fflush(stdin);
//
//int numero3;
//scanf("%d", &numero3);
//fflush(stdin);
//
//
//numero1 = incremento(numero1, &numero2, &numero3);
//printf("%d, %d, %d", numero1, numero2, numero3);

//ejercicio 11

float numero;
scanf("%f", &numero);
fflush(stdin);

float resultado;

sumaSerie(numero, &resultado);
printf("%f", resultado);

//ejercicio 12




//	//ejercicio 13
//	int res;
//	f(123, &res);
//	printf("%d", &res);


}

void f(int x, int* invertido){
	*invertido = 0;
	while(x>0){
		*invertido = *invertido * 10 + (x%10);
		x = x/10;
	}
}

void doble(int* numero){
	*numero = *numero * 2;
}

void doble2(int numero, int* resultado){
	*resultado = numero * 2;
}

int operacion(int numero, int* doble, int* mitad){
*doble = numero * 2;
*mitad = numero / 2;	
}

int incremento(int x, int* y, int* z){
	x++;
	(*y)++;
	(*z)++;
	
	return x;
}

void sumaSerie(float numero, float *resultado){
	int i;
	
	*resultado = 0;
	for(i=1; i <= numero ; i++){
		 *resultado = *resultado + (1 / (float)i);
	}
	
}

void tiempo(int *horas, int *minutos, int *segundos, int incremento){
	
	*segundos = *segundos + incremento;
	if(*segundos > 59){
		int variable = *segundos - 59;
	}
	*segundos = variable;
	
	*minutos= *minutos + 1;
	if(*minutos > 59){
		int variable2 = *minutos - 59;
	}
	*minutos = variable2;
	
	*horas = *horas + 1;
	if(horas > 23){
		horas = 00;
	}
	
	int resultadoFinal;
	resultadoFinal = segundos + minutos/60 + horas/3600;
	return resultadoFinal;
	
}





//EJERCICIO 13 DE FIBONACCI --> algoritmo basico para la sucesion de fibonacci

//
//int n1 = 1;
//int n2 = 1;
//int suma;
//int cont = 0;
//while(cont < 5){
//	suma = n1 + n2;
//	n1 = n2;
//	n2 = suma;
//	cont++;
//}
//
//n2




