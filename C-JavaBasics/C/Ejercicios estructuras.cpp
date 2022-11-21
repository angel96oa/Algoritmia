#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//
////-------------EJEMPLOS------------//
//
//struct persona{
//	char nombre[20];
//	char direccion[50];
//	char telefono[10];
//	char DNI[10];
//	int edad;
//	float peso;
//	float notas[3];
//};
//
//struct libro{
//	char titulo[20];
//	int paginas;
//	char texto[10][500];
//	double precio;
//};
//
//struct libroA{
//	char titulo[20];
//	int paginas;
//	char texto[10][500];
//	double precio;
//};	
//
//typedef struct libroA t_libA;
//
//struct libroB{
//	char titulo[20];
//	double precio;
//};
//
//typedef struct libroB t_libB;
//
//struct personaA{
//	char nombre[20];
//	char DNI[10];
//	t_libA libro;
//};
//
//struct personaB{
//	char nombre[20];
//	t_libB libro;
//};
//
//typedef struct persona t_pers;
//typedef struct libro t_lib;
//typedef struct personaA t_persA;
//typedef struct personaB t_persB;
//
//void imprimir(struct persona x);
//void mayor(t_pers persona1, t_pers persona2);
//void media(t_pers persona1, t_pers persona2, t_pers persona3);
//void iniciar(t_lib *libro);
//void imprimirLibro(t_lib libro);
//void inicializarPers(t_persA *persona);
//void caro(t_persA persona1, t_persA persona2);
//void imprimirPersA(t_persA persona);
//void comparar(t_persB persona1, t_persB persona2, t_persB persona3);
//void inicializarPers(t_persB persona1);
//void libroCaro(t_persB personas[], int tam);
//void imprimirPers(t_persB persona1);

//int main(){
	
//	//ejercicio 1

//	struct persona q;
//	
//	strcpy(q.nombre, "pepe");
//	strcpy(q.direccion, "calle 123");
//	strcpy(q.telefono, "123457899");
//	strcpy(q.DNI, "12345F");
//	q.edad = 19;
//	q.peso = 90.4;
//	int i;
//	for(i=0; i<3; i++){
//		q.notas[i] = i;
//	}
//	
//	imprimir(q);

   //ejercicio 2
   
//   t_pers persona1;
//   strcpy(persona1.nombre, "pepe");
//   strcpy(persona1.direccion, "calle 234");
//   strcpy(persona1.telefono, "123456");
//   strcpy(persona1.DNI, "123123D");
//   persona1.edad = 18;
//   persona1.peso = 70.3;
//   int i;
//   for(i=0; i<3; i++){
//   	persona1.notas[i] = i+2;
//   }
//   
//   t_pers persona2;
//   strcpy(persona2.nombre, "juan");
//   strcpy(persona2.direccion, "calle 465");
//   strcpy(persona2.telefono, "23434332");
//   strcpy(persona2.DNI, "3434343C");
//   persona2.edad = 43;
//   persona2.peso = 79.4;
//   
//   for(i=0; i<3; i++){
//   	persona2.notas[i] = i+3;
//   }
//   
//   mayor(persona1, persona2);

   //ejercicio 3
   
//   t_pers persona1;
//   printf("Introduzca nombre: ");
//   gets(persona1.nombre);
//   fflush(stdin);
//   printf("Introduzca direccion: ");
//   gets(persona1.direccion);
//   fflush(stdin);
//   printf("Introduzca telefono: ");
//   gets(persona1.telefono);
//   fflush(stdin);
//   printf("Introduzca DNI: ");
//   gets(persona1.DNI);
//   fflush(stdin);
//   printf("Introduzca edad: ");
//   scanf("%d", &persona1.edad);
//   fflush(stdin);
//   printf("Introduzca peso: ");
//   scanf("%f", &persona1.peso);
//   fflush(stdin);
//   printf("Introduzca notas: ");
//   scanf("%f", &persona1.notas[0]);
//   fflush(stdin);
//   scanf("%f", &persona1.notas[1]);
//   fflush(stdin);
//   scanf("%f", &persona1.notas[2]);
//   fflush(stdin);
//   
//   t_pers persona2;
//   printf("introduzca nombre: ");
//   gets(persona2.nombre);
//   fflush(stdin);
//   printf("introduzca direccion: ");
//   gets(persona2.direccion);
//   fflush(stdin);
//   printf("introduzca telefono: ");
//   gets(persona2.telefono);
//   fflush(stdin);
//   printf("Introduzca DNI: ");
//   gets(persona2.DNI);
//   fflush(stdin);
//   printf("introduzca edad: ");
//   scanf("%d", &persona2.edad);
//   fflush(stdin);
//   printf("introduzca peso: ");
//   scanf("%f", &persona2.peso);
//   fflush(stdin);
//   printf("introduzca notas: ");
//   scanf("%d", &persona2.notas[0]);
//   fflush(stdin);
//   scanf("%d", &persona2.notas[1]);
//   fflush(stdin);
//   scanf("%d", &persona2.notas[2]);
//   fflush(stdin);
//   
//   t_pers persona3;
//   printf("Introduzca nombre: ");
//   gets(persona3.nombre);
//   fflush(stdin);
//   printf("Introduzca direccion: ");
//   gets(persona3.direccion);
//   fflush(stdin);
//   printf("Introduzca telefono: ");
//   gets(persona3.telefono);
//   fflush(stdin);
//   printf("Introduzca DNI: ");
//   gets(persona3.DNI);
//   fflush(stdin);
//   printf("Introduzca peso: ");
//   scanf("%f", &persona3.peso);
//   fflush(stdin);
//   printf("Introduzca notas: ");
//   scanf("%d", &persona3.notas[0]);
//   fflush(stdin);
//   scanf("%d", &persona3.notas[1]);
//   fflush(stdin);
//   scanf("%d", &persona3.notas[2]);
//   fflush(stdin);
//   
//   media(persona1, persona2, persona3);

    //ejercicio 4
    
//    t_lib libro;
//    iniciar(&libro);
//    imprimirLibro(libro);

    // ejercicio 5
    
//    t_persA persona1;
//    inicializarPers(&persona1);
//    t_persA persona2;
//    inicializarPers(&persona2);
//    
//    caro(persona1, persona2);

    //ejercicio 6
    
//    t_persB persona1;
//    printf("Introduzca nombre de persona: ");
//    gets(persona1.nombre);
//    fflush(stdin);
//    printf("Introduzca titulo del libro: ");
//    gets(persona1.libro.titulo);
//    fflush(stdin);
//    printf("Introduzca precio del titulo: ");
//    scanf("%lf", &persona1.libro.precio);
//    fflush(stdin);
//    
//    t_persB persona2;
//    printf("Introduzca nombre de persona: ");
//    gets(persona2.nombre);
//    fflush(stdin);
//    printf("Introduzca titulo del libro: ");
//    gets(persona2.libro.titulo);
//    fflush(stdin);
//    printf("Introduzca precio del titulo: ");
//    scanf("%lf", &persona2.libro.precio);
//    fflush(stdin);
//    
//    t_persB persona3;
//    printf("Introduzca nombre de persona: ");
//    gets(persona3.nombre);
//    fflush(stdin);
//    printf("Introduzca titulo del libro: ");
//    gets(persona3.libro.titulo);
//    fflush(stdin);
//    printf("Introduzca precio del titulo: ");
//    scanf("%lf", &persona3.libro.precio);
//    fflush(stdin);
//    
//    comparar(persona1, persona2, persona3);

     //ejercicio 7
     
//     t_persB personas[3];
//     
//     int i;
//     for(i=0; i<3; i++){
//     	inicializarPers(personas[i]);
//     }
//     
//	 for(i=0; i<3; i++){
//     	imprimirPers(personas[i]);
//     }

     //ejercicio 8
     
     
     
    
     
// }
//   
//
//void imprimir(struct persona q){
//	printf("Hola, mi nombre es %s, %s, y vivo en la direccion %s, telefono %s.\nTengo %d anios y %f kilos.\n mis notas son: ", q.nombre, q.DNI, q.direccion, q.telefono, q.edad, q.peso);
//	int i;
//	for(i=0; i<3; i++){
//		printf("%f, ", q.notas[i]);
//	}
//}
//
//
//void mayor(t_pers persona1, t_pers persona2){
//	
//	if(persona1.edad > persona2.edad){
//		imprimir(persona1);
//	} else {
//		imprimir(persona2);
//	}
//}
//
//void media(t_pers persona1, t_pers persona2, t_pers persona3){
//	
//	int mayor;
//	int media1 = (persona1.notas[0] + persona1.notas[1] + persona1.notas[2]) /3;
//	int media2 = (persona2.notas[0] + persona2.notas[1] + persona2.notas[2]) /3;
//	int media3 = (persona3.notas[0] + persona3.notas[1] + persona3.notas[2]) /3;
//	
//	if(media1>media2){
//		if(media1>media3){
//			imprimir(persona1);
//		}
//	} else if( media2 > media1){
//		if(media2> media3){
//			imprimir(persona2);
//		}
//	} else {
//		imprimir(persona3);
//	}
//	
//}
//
//void iniciar(t_lib *libro){
//	
//	printf("introduzca titulo: ");
//	gets((*libro).titulo);
//	fflush(stdin);
//	printf("Introduzca nº paginas: ");
//	scanf("%d", &(*libro).paginas);
//	fflush(stdin);
//	printf("Introduzca precio: ");
//	scanf("%lf", &(*libro).precio);
//	fflush(stdin);
//	int i;
//	printf("Introduzca texto: ");
//	for(i=0; i<10; i++){
//		gets((*libro).texto[i]);
//	}
//	fflush(stdin);
//	
//	
//}
//
//void imprimirLibro(t_lib libro){
//	
//	printf("titulo: ");
//	puts(libro.titulo);
//	printf("paginas: %d", libro.paginas);
//	printf("precio: %lf €", libro.precio);
//	printf("Texto: ");
//	int i;
//	for(i=0; i<10; i++){
//		puts(libro.texto[i]);
//	}
//}
//
//void inicializarPers(t_persA *persona){
//	
//	printf("Introduzca nombre: ");
//	gets((*persona).nombre);
//	fflush(stdin);
//	printf("Introduzca DNI: ");
//	gets((*persona).DNI);
//	fflush(stdin);
//	printf("Datos sobre el libro\n");
//	printf("Introduzca titulo: ");
//	gets((*persona).libro.titulo);
//	fflush(stdin);
//	printf("Introduzca paginas: ");
//	scanf("%d", &(*persona).libro.paginas);
//	fflush(stdin);
//	printf("Introduzca el precio: ");
//	scanf("%lf", &(*persona).libro.precio);
//	fflush(stdin);
//	printf("Introduzca texto: ");
//	int i;
//	for(i=0; i<10; i++){
//		gets((*persona).libro.texto[i]);
//	}
//	
//}
//
//void imprimirPersA(t_persA persona){
//	puts(persona.nombre);
//	puts(persona.DNI);
//	puts(persona.libro.titulo);
//}
//
//void caro(t_persA persona1, t_persA persona2){
//	if(persona1.libro.precio > persona2.libro.precio){
//		imprimirPersA(persona1);
//	} else {
//		imprimirPersA(persona2);
//	}
//}
//
//
//void comparar(t_persB persona1, t_persB persona2, t_persB persona3){
//	if(persona1.libro.titulo == persona2.libro.titulo || persona1.libro.titulo == persona3.libro.titulo || persona2.libro.titulo == persona1.libro.titulo || persona2.libro.titulo == persona3.libro.titulo || persona3.libro.titulo == persona1.libro.titulo || persona3.libro.titulo == persona2.libro.titulo){
//		printf("hay personas con el mismo libro");
//	} else {
//		printf("no lo hay");
//	}
//}
//
//void inicializarPers(t_persB persona1){
//	
//    scanf("%s", persona1.nombre);
//    fflush(stdin);
//    
//    scanf("%s", persona1.libro.titulo);
//    fflush(stdin);
//    
//    scanf("%lf", &persona1.libro.precio);
//    fflush(stdin);
//
//}
//
//void imprimirPers(t_persB persona1){
//	puts(persona1.nombre);
//	puts(persona1.libro.titulo);
//	printf("%lf", persona1.libro.precio);
//}
//
//
//void libroCaro(t_persB personas[], int tam){
//
//	int i;
//	double max=0;
//	int contador = 0;
//	for(i=0; i<tam; i++){
//		if(personas[i].libro.precio > max){
//			max = personas[i].libro.precio;
//			contador++;
//		}
//	}
//	printf("el libro mas caro es de personas[%d]", personas[contador]);
//
//}
//



//-------------------EXAMEN------------------//
 struct tarea{
     char nombre[30];
     int horas;
 };

 struct tobrero{
     char nombre[30];
     char dni[10];
     struct tarea oficio;
 };

struct fabrica{
    char nombre[30];
     struct tobrero plantilla[10];
     int numero_plantilla;
 };

typedef struct fabrica t_fabrica;
typedef struct tobrero t_obrero;
typedef struct tarea t_tarea;

     int a=1;
     void prueba (int b, int *c);
     
     
     int max;
     int min;
     
     void calcularMaximo(int v[], int tam, int *max);
     void calcularMinimo(int v[], int tam, int *min);
     void MaximoMinimo(int v[], int tam, int *max, int *min);
     int horas(t_obrero obrero);
     int horasTarea(t_fabrica fabrica);
     int horasTrabajo(t_fabrica fabrica, char tarea[]);
     void imprimir(t_obrero obrero);
     void imprimirTodo(t_fabrica fabrica);
     
int main() {
	
	//EJERCICIO 1
	
//    int b=2, c=3;
//    printf("Antes: %d %d %d\n",a,b,c);
//    prueba (c,&b);
//    printf("Despues de: %d %d %d\n",a,b,c);

    //EJERCICIO 2
    
//int sumatorio=0;
//int i;
//for(i=0; i< 1000; i++){
//	
//		sumatorio = sumatorio + i;
//}
//
//printf("Sumatorio: %d", sumatorio);

     //EJERCICIO 3
     
     	
//		 int vector[5] = {2, 4, 3, 1, 6};
//		 int i;
//		 for(i=0; i<5; i++){
//     	 	printf("[%d]", vector[i]);
//     	 	
//     	 }
//     	 	printf("\n");
//     	 calcularMaximo(vector, 5, &max);
//     	 calcularMinimo(vector, 5, &min);
//     	 MaximoMinimo(vector, 5, &max, &min);
//     	 
//     	 for(i=0; i<5; i++){
//     	 	printf("[%d]", vector[i]);
//     	 	
//     	 }

     //EJERCICIO 4
     
      t_fabrica citroen={  "citroen", {  {"joaquin","3234h",{"mecanico",2}},   {"maria", "2234g",{"electrico",14}},    {"luis jose","1234g",{"mecanico",4}}},    3}; 
      int dev;
	  dev = horas(citroen.plantilla[0]);
	  printf("%d", dev);
      printf("\n");
      int dev2;
      dev2=horasTarea(citroen);
      printf("%d", dev2);
      printf("\n");
      int dev3;
      dev3 = horasTrabajo(citroen, "mecanico");
      printf("%d", dev3);
      printf("\n");
      imprimir(citroen.plantilla[1]);
      printf("\n");
      printf("\n");
      imprimirTodo(citroen);
      printf("\n");
 
 
 
 
 
 }
 
	 void prueba (int b,int *c){
    	a=a+1;
    	b=a+3;
    	*c=*c+b+2;
    	printf("Dentro de : %d %d %d \n",a,b,*c);
	 }
	 
     void calcularMaximo(int v[], int tam, int *max){
     	int i;
     	for(i=0; i<tam; i++){
     		if(v[i] > *max){
     			*max = v[i];
     		}
     	}
     	printf("%d\n", *max);
     }
     
     void calcularMinimo(int v[], int tam, int *min){
     	int i;
     	*min = v[0];
     	for(i=0; i < tam; i++){
     		if(v[i] < *min){
     			*min = v[i];
     		}
     	}
     	printf("%d\n", *min);
     }
     
    void MaximoMinimo(int v[], int tam, int *max, int *min){
    	int i;
    	
		for(i=0; i<tam; i++){
    		if(v[i] == *max){
    			v[i] = *min;
    		} else if(v[i] == *min){
    			v[i] = *max;
    		}
    	}
    	
    }
    
    int horas(t_obrero obrero){
    	return obrero.oficio.horas;
    }
    
    
    
    int horasTarea(t_fabrica fabrica){
    	int i;
    	int horaTotal=0;
    	for(i=0; i<fabrica.numero_plantilla; i++){
    		horaTotal = horaTotal + horas(fabrica.plantilla[i]);
    	}
    	return horaTotal;
    }
    
    int horasTrabajo(t_fabrica fabrica, char tarea[]){
    	int i;
    	int suma=0;
    	for(i=0; i<fabrica.numero_plantilla; i++){
    		if(strcmp(tarea, fabrica.plantilla[i].oficio.nombre) == 0){ //el strcmp compara cadenas
    			suma = suma + horas(fabrica.plantilla[i]);
    		}
    	}
    	return suma;
    	
    }
    
    void imprimir(t_obrero obrero){
    	puts(obrero.nombre);
    	puts(obrero.dni);
    	puts(obrero.oficio.nombre);
    	printf("%d", obrero.oficio.horas);
    }
    
    void imprimirTodo(t_fabrica fabrica){
    	int i;
    	for(i=0; i< fabrica.numero_plantilla; i++){
    	puts(fabrica.plantilla[i].nombre);
    	puts(fabrica.plantilla[i].dni);
    	puts(fabrica.plantilla[i].oficio.nombre);
    	printf("%d", fabrica.plantilla[i].oficio.horas);
    	printf("\n");
    	printf("\n");
    	}
    }
    
    


