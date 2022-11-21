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
DWORD FunHiloSec(LPDWORD param); // llamada a la función hilo secundario
int main(int argc, char* argv[]) { // el main es el proceso primario

    HANDLE HiloSec;       // parametros
    DWORD IDHiloSec;       // para crear
    DWORD parametro;      // el hilo secundario


    parametro = atoi(argv[1]); // Devuelve 0 si no puede pasar de char* a int

    printf("Soy el proceso %d\n",GetCurrentProcessId()); // me dvuelve el identificador del proceso
    printf("Comienza el hilo primario (ID %d)\n",GetCurrentThreadId()); // me devuelve el identificador del hilo primario

    HiloSec = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE) FunHiloSec, &parametro, 0, &IDHiloSec); // Creación del hilo
    WaitForSingleObject(HiloSec,INFINITE); // el hilo primario espera hasta que acabe el hilo secundario (empieza a ejecutar hilo sec)
    CloseHandle(HiloSec); //cierra el hilo sec
    printf("Finaliza el hilo primario (ID %d)\n",GetCurrentThreadId());

    return (EXIT_SUCCESS);
}

DWORD FunHiloSec(LPDWORD param){ // implementación del hilo secundario
    int i;
    int n=0;
    printf("Comienza el hilo secundario (ID %d)\n",GetCurrentThreadId()); // me devuelve el identificador del hilo secundario
    for(i=0;i<*param;i++){
        n++;
    }
    printf("Valor final de la variable: %d\n",n);
    printf("Finaliza el hilo secundario (ID %d)\n",GetCurrentThreadId());


}
