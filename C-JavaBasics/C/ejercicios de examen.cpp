#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float consumoAlos100(float totalKm, float costeTotal, float precioLitro, float* consumoLitros, float* consumoEuros);
float velocidadMedia(float totalKm, int horas, int minutos);
int costeVehiculo(float Km, int coste);
float costeLitro(float Km, float precioLitro);
void velocidadMedia(float Km, float tiempo);
int raizCuadrada(int n, float x);
void numeroPrimo(int numero);
void factorizar(int numero);

int main(){
	//ejercicio 1
    
//	float totalKm;
//	float costeTotal;
//	float precioLitro;	
//	int horas, minutos;
//	
//	float consumoLitros, consumoEuros, velocidad;
//	
////	// PRUEBA 1
//	totalKm = 100;
//	costeTotal = 100;
//	precioLitro = 1;
//	consumoAlos100(totalKm, costeTotal, precioLitro, &consumoLitros, &consumoEuros);
//	
//	printf ("Kilometros totales recorridos = %f\n", totalKm);
//	printf ("Coste total = %f\n", costeTotal);
//	printf ("Precio de un litro de gasolina = %f\n\n", precioLitro);	
//	printf ("Este vehiculo consume, cada 100 kilometros:\n");
//	printf ("\t%f litros de gasolina\n", consumoLitros);
//	printf ("\t%f euros\n\n", consumoEuros);		
//	
//	horas = 1;
//	minutos = 30;
//	
//	velocidad = velocidadMedia (totalKm, horas, minutos);
//	
//	printf ("Tiempo empleado: %d horas y %d minutos\n", horas, minutos);
//	printf ("Velocidad media: %.2f m/s\n", velocidad);
//	
//	printf ("\n\n\n");
////	
////	// PRUEBA 2
//	totalKm = 1000;
//	costeTotal = 1000;
//	precioLitro = 5;
//	consumoAlos100(totalKm, costeTotal, precioLitro, &consumoLitros, &consumoEuros);
//	
//	printf ("Kilometros totales recorridos = %f\n", totalKm);
//	printf ("Coste total = %f\n", costeTotal);
//	printf ("Precio de un litro de gasolina = %f\n\n", precioLitro);	
//	printf ("Este vehiculo consume, cada 100 kilometros:\n");
//	printf ("\t%f litros de gasolina\n", consumoLitros);
//	printf ("\t%f euros\n\n", consumoEuros);		
//	
//	horas = 2;
//	minutos = 45;
//	
//	velocidad = velocidadMedia (totalKm, horas, minutos);
//	
//	printf ("Tiempo empleado: %d horas y %d minutos\n", horas, minutos);
//	printf ("Velocidad media: %.2f m/s\n", velocidad);
//    
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
    
//    printf("Introduzca coeficientes: ");
//    float a, b, c;
//    int i;
//    scanf("%f", &a);
//    fflush(stdin);
//    scanf("%f", &b);
//    fflush(stdin);
//    scanf("%f", &c);
//    fflush(stdin);
//    printf("(%f)x^2 + (%f)x + (%f) = 0\ncoeficientes: %f %f %f", a, b, c, a, b, c);
//    printf("\n");
//    float x1;
//    float x2;
//   if(a>0){
//    
//    int d;
//    d = b*b - 4*a*c;
//    if(d>= 0){
//    
//    x1 = (-b+sqrt(d))/(2*a);
//    
//    x2 = (-b-sqrt(d))/(2*a);
//    
//    printf("Las soluciones son: \n%f\n%f", x1, x2);
//       } else {
//	printf("Raiz numero imaginario");
//     }
//   } else if(a==0) {
//   	x1 = 0;
//   	x2 = (-b)/a;
//   	printf("Solucion: %f\n%f", x1, x2);
//   } else {
//   	x1 = sqrt(-b/a);
//   	x2 = -sqrt(-b/a);
//   }
   
   //ejercicio 7
   
//   printf("Introduzca numero a calcular: ");
//   int numeroCalcular;
//   scanf("%d", &numeroCalcular);
//   fflush(stdin);
//   numeroPrimo(numeroCalcular);
//   factorizar(18);
//   printf("\n");
//   factorizar(29);
//   printf("\n");  
//   factorizar(33);
//   printf("\n");
//   factorizar(31);
   
   //ejercicio 8
   
   
    int numero, suma, aux, sumaCifras, numCifras;  //creas las variables
 
    scanf("%d", &numero);     //introduces el numero, siempre el primero fuera, luego para seguir en el bucle pones otro dentro
    fflush(stdin);            //vacias el buffer


    suma = 0;                //inicializas suma a 0
    while ( numero != 0) {

        aux = numero;        //dices que aux es el primero, para luego poder trabajar con el bucle y no sobreescribirlo
        sumaCifras = 0;      //inicias ambas a cero
        numCifras = 0;

        while (aux != 0){
            sumaCifras = sumaCifras + aux % 10;    //el modulo de la division es lo que se suma
            aux = aux / 10;                        //el nuevo aux es dividido entre 10, ya que le quitas una cifra
            numCifras++;                           //al contador le sumas 1
        }

        if(numCifras == sumaCifras) {
            suma = suma + numero;
        }

        scanf("%d", &numero);
        fflush(stdin);

    }

    printf("%d", suma);

   
}
		

float consumoAlos100(float totalKm, float costeTotal, float precioLitro, float* consumoLitros, float* consumoEuros){
	*consumoEuros = (costeTotal * 100) / totalKm;
	*consumoLitros = *consumoEuros / precioLitro;
}

float velocidadMedia(float totalKm, int horas, int minutos){
	float distanciaMetros = totalKm * 1000;
	float tiempoSegundos = horas * 3600 + minutos * 60;
	
	return distanciaMetros / tiempoSegundos;
}
	
int raizCuadrada(int n, float x){
	 return ((n/x) + x)/2;
}	


void factorizar(int numero){
	int i, j;               //creas dos variables
	int a[50];              //creas un array de enteros para ir guardando los resultados
	i=2;                    //empiezas la i en 2 ya que es por lo que vas a ir dividiendo
	j=0;                    //la j será la posicion donde se iran guardando los resultados en el array a
	while(numero>1){        //mientras el numero que quieres factorizar sea mayor que 1, el bucle funcionará
		if(numero%i==0){    //la condicion es que el modulo de la division entre el numero y el 2 es que sea 0
		  
		  numero=numero/i;  //el nuevo numero será el resultado de la operacion entre el numero que teniamos y la i
          a[j]=i;           //guardamos en la posicion de la j la i, que serán los distintos factores que al multiplicarlos, nos daran el numero original
          j++;              //aumentamos la j, para guardar el resultado proximo en la siguiente posicion del array
          i=2;              //mantenemos la i en 2, para que siga dividiendo
          
       }
       else {
          i++;              //si el modulo de la division entre 2 no da 0, la aumentamos
    } 
}
for(i=0; i<j; i++){
	printf("\nfactor %d = %d",i+1,a[i]);    //en el momento en el que hayamos salido del bucle, imprimimos los valores con un bucle for, en el caso de i +1, se pone asi porque empieza por el factor 1, al contrario que el array que empieza en el 0
}
}

void numeroPrimo(int numero){
	int i;
	int primos=0;
	for(i=1; i<=numero; i++){ //OJO CUIDADO CON EL 0, PARA CALCULAR LOS NUMEROS PRIMOS SE EMPIEZA EN I=1 YA QUE SI EMPIEZA EN i=0 EL ORDENADOR PETA Y EXPLOTA
		if(numero%i == 0){
			primos++;
		}
	}
	if(primos == 2){
		printf("Es primo");
		factorizar(numero);
	} else {
		printf("No lo es");
	}
}	
	

