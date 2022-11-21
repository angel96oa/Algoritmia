
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // --> al usar los aleatorios, debido a la funcion semillero es necesario poner srand(time(NULL)); para que así si que sea totalmente aleatorio

int main(int argc, char** argv) {
    
	//--ejercicio 1--//
    
//    float x;
//    int nuevoNumero;
//    
//    scanf("%f", &x);
//    fflush(stdin);
//    
//    if(x > 0){
//    	printf("positivo\n");
//    	nuevoNumero = (int) x;
//    	
//    } 
//    
//    printf("%d", nuevoNumero);

   //--ejercicio 2--//
   
//   float x;
//   int i;
//   float max;
//   
//   scanf("%f", &x);
//   fflush(stdin);
//   max = x;
//   
//    for(i = 1 ; i<3 ; i++){
//     scanf("%f", &x);
//     fflush(stdin);
//     
//     if(x > max){
//     	max = x;
//     }
//    }
//    printf("El mayor es %f", max);
    
    //--ejercicio 3--//
    
//    int x;
//    scanf("%d", &x);
//    fflush(stdin);
//    
//    int y;
//    scanf("%d", &y);
//    fflush(stdin);
//    
//    if(x%y == 0){
//    	printf("es multiplo");
//    } else {
//    	printf("No es multiplo");
//    }
//    
    //--ejercicio 4--//
    
    
    
    //--ejercicio 5--//
//    
//    int x;
//    int doble;
//    
//    do{
//    scanf("%d", &x);
//	doble = 2 * x;
//	printf("%d\n", doble);	
//    } while(x != 0);

   //--ejercicio 6--//
   
//   int x;
//   int y;
//   char c;   
//   	
//   do{
//   	scanf("%d", &x);
//   	fflush(stdin);
//   	scanf("%d", &y);
//   	fflush(stdin);
//   	
//   	printf("(%d,%d)\n", x, y);
//   	
//   	printf("continuar?: ");
//   	scanf("%c", &c);
//   	fflush(stdin);
//   	
//   }
//   while (c != 'n' || c != 'N'); //--> preguntar
//   
   //--ejercicio 7--//
   
//   int x;
//   int contador;
//   int suma = 0;
//   
//   do{
//   	
//   	scanf("%d", &x);
//   	fflush(stdin);
//   	
//   	if(x < 0){
//   		contador++;
//   	}
//   	
//   	suma = suma + x;
//   	
//   } while (contador < 5);
//   
//   printf("%d", suma);
//   
   //--ejercicio 8--//
   
//   int x;
//   int i;
//   int suma = 0;
//   float media;
//   
//   for(i = 0 ; i < 8 ; i++){
//   	
//   	scanf("%d", &x);
//   	fflush(stdin);
//   	
//   	suma = suma + x;
//   }
//   
//   media = (float) suma / 8;
//   printf("\n%f", media);

  //--ejercicio 9--//
  
//  int x;
//  int producto = 1;
//  
//  do{
//  	scanf("%d", &x);
//  	fflush(stdin);
//  	producto = producto * x;
//  	printf("%d\n", producto);
//  	
//  } while(x != 0);
//   
//   printf("producto final: %d", producto); // --> preguntar
   
   //--ejercicio 10--//
   
//   int x;
//   int impar;
//   
//   do{
//   	scanf("%d", &x);
//   	fflush(stdin);
//   	if(x %2 == 0){
//   		printf("par\n");
//   	}else {
//   		impar++;
//   		printf("Impar\n");
//   	}
//   }while(impar<5);
//   
//   printf("Numero maximo de impares permitidos");
//   
   
   //--ejercicio 11--//
   
//   int x;
//   
//   do{
//   	
//   	scanf("%d", &x);
//   	fflush(stdin);
//   	
//   	if(x % 5 == 0){
//   		printf("%d es mutiplo\n", x);
//   	}
//   	
//   } while (x != 0);
//   
//   printf("Fin");
//   
   
   //--ejercicio 12--//
   
//   int x;
//   int i;
//   int c;
//   
//   for(i = 0 ; i < 5 ; i++){
//	
//	scanf("%d", &x);
//	fflush(stdin);
//	if(x % 2 == 0){
//		c++;
//	}
//}
//	if(c>0){
//		printf("Se han introducido numeros pares\n");
//	} else {
//		printf("No se ha introducido ninguno par\n");
//	}
// 
   
   //--ejercicio 13--//
   
//   int x;
//   
//   do{
//   	scanf("%d", &x);
//   	fflush(stdin);
//   	if(x == 0){
//   		printf("se ha introducido un 0\n");
//   	}
//   }while(x != 0);
   
   
   //--ejercicio 14--//
   
//   int x;
//   int c;
//   int max;
//   
//   scanf("%d", &x);
//   fflush(stdin);
//   
//   if(x%2==0){
//   		c++;
//   	}
//   	
//   max = x;   
//   
//   do{
//   	
//   	scanf("%d", &x);
//   	fflush(stdin);
//   	
//   	if(x%2==0){
//   		c++;
//   	}
//   	
//   	if(x > max){
//   		max = x;
//   	}
//   		
//   	} while (c < 5);
//   	
//   	printf("El maximo es %d\n", max);
   	
   	//--ejercicio 15--//
   	
//   	int x;
//   	int i;
//   	int max;
//   	int posicion = 0;
//   	
//   	scanf("%d", &x);
//   	fflush(stdin);
//   	
//   	max = x;
//   	posicion++;
//   	
//   	for(i = 1 ; i < 10 ; i++){
//   		
//   		scanf("%d", &x);
//   		fflush(stdin);
//   		
//   		if(x > max){
//   			max = x;
//   			posicion++;
//   		}
//   		
//   		
//   	}
//   	
//   	printf("El numero maximo es %d en la posicion %d", max, posicion);
   	
   	//--ejercicio 16--//
   	
//   int x, longitud=0;
//   
//   scanf("%d", &x);
//   	fflush(stdin);
//   	
//   do{
//   	   	
//   		x = x/10;
//   		longitud++;
//   		
//   	}while(x>0);
//   	
//   	printf("%d", longitud);
   
   
   //--ejercicio 17--// --> preguntar
   
//   int x; 
//   float y;
//   float sumatorio = 0;
//   
//   scanf("%d", &x);
//   fflush(stdin);
//   
//   do{
//   	
//   	y = (x / 10);
//   	sumatorio = sumatorio + y;
//   	
//   }while(x < 0);
//   
//   printf("%f", sumatorio);

   //--ejercicio 18--//
   
   int x;
   int r;
   
   do{
   	
   	printf("1. Saludo\n");
   	printf("2. Numero aleatorio\n\n");
   	
   	scanf("%d", &x);
   	fflush(stdin);
   	
   	switch(x){
   		
   		case 1:
   			printf("Hola!\n");
   			break;
   		case 2:
   			r= rand()%100;
   			printf("%d\n", r);
   			break;
   		default:
   			printf("error\n");
   			break;
   				
   	} 
   
}while (x != 0);
}
