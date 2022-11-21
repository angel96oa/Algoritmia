#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int operaciones(int longitud, int valores[], int m);
int main(void) {
	
    //VARIABLES
    int i, j, aux, longitud, elemento, m;

    //longitud del vector
    printf("Ingrese longitud del vector: ");
    scanf("%d", &longitud);

    //Controla que la longitud no sea negativa
    if (longitud <= 0) {
        printf("Longitud incorrecta, intentelo de nuevo \n");
        return 0;
    }

    int valores[longitud + 1];

    valores[0] = 0;
    //Elementos para nuestro vector
    printf("Introduzca elementos del vector:\n");
    for (i = 1; i < longitud + 1; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &elemento);
        valores[i] = elemento;
        fflush(stdin);
    }

    //Media con la que compararemos
    printf("Seleccione numero comparar: ");
    scanf("%d", &m);

    m = m + 1;

    //Ordena los elementos del vector
    for (i = 0; i < longitud+1; i++) {
        for (j = 1; j < longitud+1; j++) {
            if (valores[j] < valores[j - 1]) {
                aux = valores[j];
                valores[j] = valores[j - 1];
                valores[j - 1] = aux;
            }
        }
    }

    operaciones(longitud, valores, m);
    
    system("pause");
}

int operaciones(int longitud, int valores[], int m) {

    //VARIABLES
    int i, j;
    int suma1 = 0, suma2 = 0;

    //Matriz donde compararemos los subconjuntos de los candidatos con lo que queremos optimizar.
    int v[longitud + 1][m];

    //Inicializamos la matriz y el vector a 0
    for (i = 0; i < longitud + 1; i++) {
        for (j = 0; j < m; j++) {
            v[i][j] = 0;
        }
    }

    //Rellenamos la matriz
    for (i = 0; i < longitud + 1; i++) {
        for (j = 0; j < m; j++) {
            if (i == 0) {
                if (j < valores[0]) {
                    v[0][j] = 0;
                } 
				else {
                    v[0][j] = valores[0];
                }
            } 
			else {
                if (j < valores[i]) {
                    v[i][j] = v[i - 1][j];
                } 
				else {
                    suma1 = v[i - 1][j];
                    suma2 = v[i - 1][j - valores[i]] + valores[i];

                    if (suma1 >= suma2) {
                        v[i][j] = suma1;
                    } 
					else {
                        v[i][j] = suma2;
                    }
                }
            }
        }
    }

    //Mostramos de una forma mas ordenada y entendible la matriz
    for (i = -1; i <= longitud; i++) {
        if (i == -1) {
            printf("   \t");
            for (j = 0; j < m; j++) {
                printf("%4d", j);
            }
            printf("\n");
        } 
		else {
            printf("%d -\t", valores[i]);
            for (j = 0; j < m; j++) {
                printf(" %3d", v[i][j]);
            }
        }
        printf("\n");
    }

    printf("\n\nEl subconjunto de numeros que mas se aproxima a %d es: ", m - 1);

    i = longitud;
    j = m - 1;
    
    //Nos muestra el subconjunto mas cercano
    printf("{ ");
    while (i >= 0 && j >= 0) {
        if (v[i][j] != v[i - 1][j]) {
            printf("%d ", valores[i]);
            j = j - valores[i];
        }
        // Tambien debemos subir una fila cuando cogemos un numero, puesto que no se pueden repetir
        i--;
    }
    printf("} \n");
}
