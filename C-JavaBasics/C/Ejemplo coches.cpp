#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int costeVehiculo(float Km, int coste);
float costeLitro(float Km, float precioLitro);
void velocidadMedia(float Km, float tiempo);
int raizCuadrada(int n, float x);

int main(){
	//ejercicio 1
//	float Km = 230;
//	int costeTotal = 50;
//	float precioLitro = 0.5;
//	float tiempo = 3700;
//	
//	int dev;
//	dev = costeVehiculo(Km, costeTotal);
//	printf("%d", dev);
//	printf("\n");
//	float dev2;
//	dev2 = costeLitro(Km, precioLitro);
//	printf("%f", dev2);
//    printf("\n");
//    velocidadMedia(Km, tiempo);
    
    //ejercicio 2
    
//	int i;
//	int j;
//	int cifra1;
//	int cifra2;
//	printf("Introduzca cifra superior: ");
//	scanf("%d", &cifra1);
//	fflush(stdin);
//	printf("Introduzca cifra inferior: ");
//	scanf("%d", &cifra2);
//	fflush(stdin);
//	int cifra = cifra1 - cifra2;
//	printf("El numero es %d", cifra);
//	printf("\n");
//	
//	for(j=cifra2; j<=cifra1; j++){
//		int n=j;
//		int suma=0;
//		for(i=0; i<=n/2;i++){
//			if(n%2==0){
//				suma = suma +i;
//			}
//		}
//		if(suma == n){
//			printf("Es perfecto");
//		} 
//		}
//	}

    //ejercicio 3
    
//    printf("Introduzca lado1: ");
//    int lado1;
//    scanf("%d", &lado1);
//    fflush(stdin);
//    printf("Introduzca lado2: ");
//    int lado2;
//	scanf("%d", &lado2);
//    printf("Introduzca lado3: ");
//    fflush(stdin);
//	int lado3;
//    scanf("%d", &lado3);
//    fflush(stdin);
//	
//	if(lado1 == lado2 && lado1 == lado3 && lado2 == lado3){
//		printf("equilatero");
//	} else if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
//		printf("escaleno");
//	} else {
//		printf("isosceles");
//	}

   //ejercicio 4
   
//   printf("Introduzca numero: ");
//   int n;
//   scanf("%d", &n);
//   fflush(stdin);
//   
//   printf("Introduzca aproximancion: ");
//   float x;
//   scanf("%f", &x);
//   fflush(stdin);
//   int dev;
//   dev = raizCuadrada(n, x);
//   printf("%d", dev);

   //ejercicio 5
   
//   int max=0;
//   int min=0;
//   int media;
//   int contadorNegativos=0;
//   
//   int d;
//   scanf("%d", &d);
//   fflush(stdin);
//   
//   if(d == 0 || d > 0 || d < 0){
//   	int x;
//   	do{
//   		scanf("%d", &d);
//   		fflush(stdin);
//   		
//   		if(d > max){
//   			max = d;
//   		}
//   		
//   		if(d < min){
//   			min = d;
//   		}
//   		
//   		media = (media + d)/2;
//   		
//   		if(d<0){
//   			contadorNegativos++;
//   		}
//   		
//   		
//   	}while(d != 0);
//   }
//   
//   printf("maximo: %d", max);
//   printf("\n");
//   printf("minimo: %d", min);
//   printf("\n");
//   printf("media: %d", media);
//   printf("\n");
//   printf("numero de negativos: %d", contadorNegativos);

    //ejercicio 6
    
    
    


}
		

int costeVehiculo(float Km, int coste){
	int costeTotal = (Km * coste)/100;
	return costeTotal;
	
}

float costeLitro(float Km, float precioLitro){
	float costeLitro = (Km * precioLitro)/100;
	return costeLitro;
}

void velocidadMedia(float Km, float tiempo){
float velocidad = (Km / tiempo) * 3600;
printf("%f Km/h", velocidad);
	
}
	
int raizCuadrada(int n, float x){
	 return ((n/x) + x)/2;
}	
	
	
	
	
	
	
	
	
	
	
	
