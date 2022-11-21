#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum color {azul, verde};
typedef enum color e_color;

struct ordenador{
	int RAM;
	float HD;
	char modelo[50];
	e_color color;
};

typedef struct ordenador t_ord;

struct Persona{
	int edad;
	char nombre[50];
	float notas[2];
	t_ord MiPC;
	e_color color;
}; //ojo con el punto y coma, siempre va al final de cada estructura

typedef struct Persona t_persona;

void imprimir(t_persona x);
void inicializar(t_persona* x);
void copiar(t_persona z, t_persona* y);
void procesar(t_persona pers[], int tam);

int main(){

//	struct Persona p;

	//------------------------------------------------//

//	p.edad = 18;
//	strcpy(p.nombre, "pepe");
//	int i;
//	for(i=0; i<2; i++){
//		p.notas[i] = i;
//	}

	//------------------------------------------------//

//	printf("Edad: ");
//	scanf("%d", &p.edad);
//	fflush(stdin);
//	printf("Nombre: ");
//	gets(p.nombre);

	//------------------------------------------------//

//	printf("Nombre: %s \t Edad: %d\n", p.nombre, p.edad);

	//------------------------------------------------//

//	t_persona q;
//	q=p; //copia p en q
//	printf("Nombre: %s \t Edad: %d\n", q.nombre, q.edad);
//	
	//------------------------------------------------//

//	imprimir(p);
//	inicializar(&p);
//	imprimir(p);
//	
//	t_persona r;
//	copiar(p, &r);
//	imprimir(r);
	
	//------------------------------------------------//
	
//	t_persona personas[3];
//	
//	
//	for(i=0; i<3; i++){
//		inicializar(&personas[i]);
//		imprimir(personas[i]);
//	}	


//ESTRUCTURAS ANIDADAS Y ENUMERACIONES
   
   t_persona p;
   p.edad = 50;
   strcpy(p.nombre, "pepe");
   p.MiPC.RAM = 50;
   p.MiPC.HD = 7.5;
   strcpy(p.MiPC.modelo, "i7");
   
   t_persona q = {50, "pepe",{2,1},  {8, 5, "i4", verde}, azul};



}

void imprimir(t_persona x){ //SOLO LEER
	printf("Nombre: %s \t Edad: %d\t", x.nombre, x.edad);
	int i;
	for(i=0; i<2; i++){
		printf("[%d]", x.notas[i]);
	}
	printf("\n");
}

void inicializar(t_persona* x){  //ES POSIBLE LEER, AUNQUE NO ES RECOMENDABLE, SE USA PARA MODIFICAR
	
	(*x).edad = 20; //es como cuando se ponia (*x)++
	x -> edad = 20;
	
	strcpy((*x).nombre, "luis");
	strcpy(x -> nombre, "luis");
	
	scanf("%d", &(*x).edad);
    fflush(stdin);
	scanf("%d", &x -> edad);
	fflush(stdin);
	
	gets((*x).nombre); 
	fflush(stdin);
	gets(x -> nombre);
	fflush(stdin);
}

void copiar(t_persona z, t_persona* y){

	y -> edad = z.edad;
	strcpy(y -> nombre, z.nombre);
	int i;
	for(i=0; i<2; i++){
		y -> notas[i] = z.notas[i];
	}

}

void procesar(t_persona pers[], int tam){
	int i;
	for(i=0; i<tam; i++){
		pers[i].edad = 18;
		strcpy(pers[i].nombre, "pepe");
		//scanf("%d", &pers[i].edad); --> asi tambien se puede
	}
}








