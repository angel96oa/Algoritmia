/*
 * File:   main.c
 * Author: usuario
 *
 * Created on 4 de diciembre de 2015, 9:23
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


/*
 *
 */
int main(int argc, char *argv[]) {

DWORD uDriveMask = GetLogicalDrives();

int i;
int cont=0; //el contador para referirnos a 
char n; //para dejar el valor del número es ASCII (de decimal a char)
char a[32]; // el vector donde se almacenan las unidades de 1 lógicos de la mascara
//n=i;
for(i=65;i<95;i++){ // 65 ==> A en ascii

          n=i;

    if(uDriveMask & 1){ //comparamos si el valor de la posicion de la mascara es 1

        printf(" %c:\\ ",n);
        a[cont]=n;
        cont++;
    }

    uDriveMask >>= 1 ; //desplazamos a la derecha la máscara de bits para seguir comparando
}
printf("\n");
printf("Primera unidad %c:\\\n",a[0]); //para referirnos a la primera posición del array
printf("Ultima unidad %c:\\\n",a[cont - 1]); //para referirnos a la ultima posicion del array gracias al contador
    return (EXIT_SUCCESS);
}