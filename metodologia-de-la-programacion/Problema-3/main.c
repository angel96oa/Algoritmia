#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main(void) {

    //VARIABLES
    int i, j, orden, longitud, elemento, m, suma, sol = 0;
    char numero[15], subconjunto[50];

    //longitud del vector
    printf("Ingrese longitud del vector: ");
    scanf("%d", &longitud);

    //Controla que la longitud no sea negativa
    if (longitud <= 0) {
        printf("Longitud incorrecta, intentelo de nuevo \n");
        return 0;
    }
    //VARIABLES dependientes de la longitud
    char mascara[longitud];
    int valores[longitud];

    //Elementos para nuestro vector
    printf("Introduzca elementos del vector:\n");
    for (i = 0; i < longitud; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &elemento);
        valores[i] = elemento;
        fflush(stdin);
    }

    //Numero con lo que compararemos
    printf("Seleccione numero para comparar: ");
    scanf("%d", &m);

    //Ordena los elementos del vector
    for (i = 0; i < longitud - 1; i++) {
        for (j = 1; j < longitud; j++) {
            if (valores[j] < valores[j - 1]) {
                orden = valores[j];
                valores[j] = valores[j - 1];
                valores[j - 1] = orden;
            }
        }
    }

    //Imprime vector Ordenado correctamente
    printf("VECTOR ORDENADO: \n");
    for (i = 0; i < longitud; i++) {
        printf("Elemento %d: %d \n", i, valores[i]);
    }

    printf("\nSubconjuntos cuya suma es %d \n", m);
    for (i = 0; i < longitud; i++) mascara[i] = '0' - 1;
    i = 0;

    while (i >= 0) {
        mascara[i]++;
        if (mascara[i] == '2') {
            mascara[i] = '0' - 1;
            i--;
        } else {
            suma = 0;

            for (j = 0; j < longitud; j++)
                if (mascara[j] == '1')
                    suma += valores[j];
            if (suma == m && i == longitud - 1) {
                sol++;
                strcpy(subconjunto, "");
                for (j = 0; j < longitud; j++)
                    if (mascara[j] == '1') {
                        snprintf(numero, 256, " %d", valores[j]);
                        strcat(subconjunto, numero);
                    }
                printf("Solucion %d:", sol);
                printf(subconjunto);
                printf("\n");
            }

            if (!(suma > m || i == longitud - 1)) i++;
        }
    }
    
    printf("Numero total de soluciones %d \n\n",sol);
    system("pause");
}
