/*
 * File:   main.c
 * Author: usuario
 *
 * Created on 27 de noviembre de 2015, 8:25
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*
 *
 */

DWORD FunHiloSec2(LPDWORD param); // llamada a la función que lleva a cabo el objto (en este caso el hilo)
int veces = 2; //numero de veces que hará el bucle
int i=0; //variable compartida (HAY QUE PONERLA GLOBAL PARA QUE SIRVA EL VALOR PARA TODOS LOS HILOS QUE SE VAN A EJECUTAR)

int main(int argc, char* argv[]) { // el main es el proceso primario
                                   // creo dos hilos (objetos) empleando las mismas declaraciones pero con arrays
    HANDLE HiloSec[2];             // descriptor
    DWORD IDHiloSec[2];            // identificador
    DWORD parametro[2]={1,2};      // parametro


    printf("Soy el proceso %d\n",GetCurrentProcessId()); // me devuelve el identificador del proceso
    printf("Comienza el hilo primario (ID %d)\n",GetCurrentThreadId()); // me devuelve el identificador del hilo primario

    HiloSec[0] = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE) FunHiloSec2, &parametro[0], 0, &IDHiloSec[0]); // declaramos el identificador del hilo secundario 1, llamada al primer hilo
    HiloSec[1] = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE) FunHiloSec2, &parametro[1], 0, &IDHiloSec[1]); // declaramos el identificador del hilo secundario 2, llamada al segundo hilo
    WaitForMultipleObjects(2,HiloSec,TRUE,INFINITE);int i=0; // salta a la funcion de los hilos secundarios y el primario espera
    CloseHandle(HiloSec[0]); // cierro el hilo secundario 1
    CloseHandle(HiloSec[1]); // cierro el hilo secundario 2

    printf("Finaliza el hilo primario (ID %d)\n",GetCurrentThreadId());

    return (EXIT_SUCCESS);
}

DWORD FunHiloSec2(LPDWORD param){ // implementación del hilo secundario

    int n;

    printf("Comienza el hilo %d (ID %d)\n",*param,GetCurrentThreadId());
    if(*param == 1){
            for(n=0;n<veces;n++){
                i++;
                printf("Hilo %d, incrementa, %d\n",*param,i);
            }
    }
    else{
            for(n=0;n<veces;n++){
                i--;
                printf("Hilo %d, decrementa, %d\n",*param,i);
            }
        }

     printf("Finaliza el hilo %d (ID %d)\n",*param,GetCurrentThreadId());

}
