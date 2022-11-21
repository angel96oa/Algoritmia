#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	//caracteres 
//	
//	char c = 'a';
//	printf("%c\n", c); //'a'
//	printf("%d\n", c); //97
//	
//	char c2 = 97;
//	printf("%c, %d\n", c2, c2);
//	
//	int x = 97;
//	printf("%c, %d\n", x, x);
//	x = 'b';
//	printf("%c, %d\n", x, x);
//	
//	char c3 = 'a' + 1;
//	printf("%c, %d\n", c3, c3);
//	
//	
//	c3 = 'a' + 'b';
//	printf("%c, %d\n", c3, c3);
//	
//	//pedir caracter
//	
//	scanf("%c", &c);
//	fflush(stdin); //el fflush es obligatorio
//	
//	c = getchar();
//	fflush(stdin); //en este caso, el getchar hace lo mismo que el scanf
//	
//	if(c >= 'A' && c<= 'Z'){ //comprueba silo introducido es mayuscula
//		printf("es mayuscula");
//	}
//	if(c>= 65 && c<=90){
//		printf("es mayuscula"); //es lo mismo, ya que las letras tienen un numero asignado
//	}
//	printf("\n");
//	getchar(); //se usa para hacer una pausa
//	
//	int i;
//	for(i=0; i<256; i++){
//		printf("%d, %c\n", i, i); //muestra toda la tabla ascii
//	}
	
	//cadenas
	
	//char cad[2] = {'s', 'i'}; --> así no
	char cad2[3] = {'s', 'i', '\0'}; //hay que poner SIEMPRE el '\0', ya que es el caracter nulo, indica el fin
	char cad3[] = {'s', 'i', '\0'};
	char cad3B[] = "si";    //tanto cad3 y cad3B valen igual, aunque es mas recomendable 3B
	char cad4[50] = {'s', 'i', '\0'};
	//en cad4 el tamaño es 50, hay 3 caracteres y la longitud es de 2
	
	//para borrar caracteres, segun pongas el \0 se borran unos u otros
	
	cad4[0] = '\0';
	
	char nombre[50];
	
	scanf("%s", nombre);
	fflush(stdin);
//	printf("%s\n", nombre);
	
//	gets(nombre);
//	
//	printf("%s\n", nombre);
//	
//	puts(nombre); //añade \n
	
	//funciones de cadenas
	
	//lA FUNCIÓN NO CONTROL NADA
	//tenemos que pasarle nosotros todo
	//bien configurado
	
	//longitud --> nos imprime por pantalla la longitud de cadena
	int longitud = strlen(nombre);
	printf("%d\n", longitud);
	
	
	//copiar cadena
	
	//nombre = 'pepe'; --> asi no, ya que de esta forma está intentando meter pepe en la primera casilla de la cadena
	strcpy(nombre, "pepe"); //de esta forma, mete cada caracter en su correspondiente 'casilla'
	printf("%s", nombre);
	
	//Concatenar
	
	//strcat(cad1, cad2); //de esta forma, concatena cad1 y cad 2 en cad1, ojo con el tamaño de cad1
	//cad1 = cad1 + cad2; (esto es lo que hace en java)
	
	//comparar => compareTo
	
	//strcmp(cad1, cad2);
	// > 0 => mayor cad1
	// == 0 => iguales
	// <0 => mayor cad2
	
		
}

//funciones
void pedirCadena(char cad[]){
	gets(cad);
	fflush(stdin);
}

void mostrarCaracterACaracter(char cad[]){
	int i;
	//hay que poner cad[i] != '\0', ya que el caracter nulo está dentro de la cadena, no forma parte del indice
	//Tambien se puede poner i<strlen(cad), aunque es mas recomendable poner el cad[i] != '\0'
	for(i=0; cad[i] != '\0'; i++){
		printf("%c", cad[i]);
	}
}









