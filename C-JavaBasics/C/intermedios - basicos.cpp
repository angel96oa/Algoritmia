#include <stdio.h>
#include <stdlib.h>

int incremento(int salario);
int operacion();
int operacion1();

int main(int argc, char** argv){
//	//ejercicio 1
//	int salario;
//	scanf("%d", &salario);
//	fflush(stdin);
//	int dev;
//	incremento(salario);

	//ejercicio 2
	
//	void operacion();
//	
	//ejercicio 3
	int dev;
	dev = operacion1();
	
	
	
	
}

int incremento(int salario){
	int incremento;
	if(salario > 0 && salario <= 9000){
		incremento = salario*0.20;
	} else if (salario > 9001 && salario < 15000){
		incremento = salario*0.10;
	} else if(salario > 15001 && salario < 20000){
		incremento = salario * 0.05;
	} else if (salario > 2000){
		incremento = salario * 0.01;
	}
	int nuevoSalario = salario + incremento;
		
printf("%d", nuevoSalario);
}

int operacion(){
	
int numeroMayor;
scanf("%f", &numeroMayor);
fflush(stdin);

int numeroMenor;
scanf("%f", &numeroMenor);
fflush(stdin);
int resul;
if(numeroMayor % numeroMenor == 0 || numeroMenor % numeroMayor == 0){
	resul = numeroMayor/numeroMenor;
	printf("son divisores y multiplos entre si, la relacion es %d", resul);
}
return resul;
}


int operacion1(){
	
	int numero1;
	scanf("%d", &numero1);
	fflush(stdin);
	
	int numero2;
	scanf("%d", &numero2);
	fflush(stdin);
	
	printf("a) Suma\ne) Resta\ni) Multiplicacion\no) Cociente\nu) Resto\n");
	
	char c;
	switch(c)
	{
		
		case 'a': case 'A':
			int suma;
			suma = numero1 + numero2;
			printf("%d", suma);
			break;
			
		case 'e': case 'E':
			int resta;
		if(numero1 > numero2){
				resta = numero1 - numero2;
			} 
			resta = numero2 - numero1;
			printf("%d", resta);
			break;
			
		case 'i': case 'I':
			int multiplicacion;
			multiplicacion = numero1 * numero2;
			printf("%d", multiplicacion);
			break;
		
		case 'o': case 'O':
			int cociente;
			if(numero1 > numero2){
				cociente = numero1 / numero2;
			}
			cociente = numero2 / numero2;
			printf("%d", cociente);
			break;
		
		
		case 'u': case 'U':
			int resto;
			if(numero1 > numero2){
				resto = numero1%numero2;
			}
			resto = numero2%numero1;
			printf("%d", resto);
			break;
		
		
		default:
			printf("Error");
			break;
}
}

























