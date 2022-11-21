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



int main(int argc, char* argv[]) {

    printf("Soy el proceso %d\n",GetCurrentThreadId()); // este es el hilo padre
 
    //PRIMER PROCESO
    STARTUPINFO siStartupInfo1; // creo el proceso 1
    PROCESS_INFORMATION piProcessInfo1; //
    // inicializo a 0 las estructuras
    memset(&siStartupInfo1, 0, sizeof(siStartupInfo1));
    // relleno el campo con el tamaño de la anchura
    siStartupInfo1.cb = sizeof(siStartupInfo1); // rellena el campo con el tamaño de la escritura

    if( !CreateProcess(NULL, // el nombre de la aplicacion lo ponemos en el siguiente argumento
        "C:\\Usuarios\\Luis\\Documentos\\CodeBlocksProjects\\Practica-8\\ej1\\ejercicio1.exe 30", //aplicacion + fichero a abrir
        NULL,
        NULL,
        FALSE,
        CREATE_DEFAULT_ERROR_MODE,
        NULL,
        NULL,
        &siStartupInfo1,
        &piProcessInfo1)) 
	// Si no puedo crear el proceso
    {
        printf( "Error en CreateProcess (%d). \n",GetLastError() );
        return;
    }
    printf("Creado el proceso %d\n",piProcessInfo1.dwProcessId); //creo el proceso hijo
    printf("Creado el hilo primario %d\n",piProcessInfo1.dwThreadId); //creo el hilo primario
    // Espera hasta que termine el proceso hijo
    WaitForSingleObject(piProcessInfo1.hProcess,INFINITE); //se lleva a cabo el proceso hijo y mientras espera e padre

    // Cierra los handles de procesos e hijos
    CloseHandle(piProcessInfo1.hThread);
    CloseHandle(piProcessInfo1.hProcess);


    //SEGUNDO PROCESO
    STARTUPINFO siStartupInfo2; // creo el proceso 2
    PROCESS_INFORMATION piProcessInfo2; //
    // inicializo a 0 las estructuras
    memset(&siStartupInfo2, 0, sizeof(siStartupInfo2));
    // relleno el campo con el tamaño de la anchura
    siStartupInfo2.cb = sizeof(siStartupInfo2); // rellena el campo con el tamaño de la escritura

    if( !CreateProcess(NULL, // el nombre de la aplicacion lo ponemos en el siguiente argumento
        "C:\\Usuarios\\Luis\\Documentos\\CodeBlocksProjects\\Practica-8\\ej1\\ej1.txt", //aplicacion + fichero a abrir
        NULL,
        NULL,
        FALSE,
        CREATE_DEFAULT_ERROR_MODE,
        NULL,
        NULL,
        &siStartupInfo2,
        &piProcessInfo2))
	// Si no puedo crear el proceso
    {
        printf( "Error en CreateProcess (%d). \n",GetLastError() );
        return;
    }
    printf("Creado el proceso %d\n",piProcessInfo2.dwProcessId); //creo el proceso hijo
    printf("Creado el hilo primario %d\n",piProcessInfo2.dwThreadId); //creo el hilo primario
    // Espera hasta que termine el proceso hijo
    WaitForSingleObject(piProcessInfo2.hProcess,INFINITE); //se lleva a cabo el proceso hijo y mientras espera e padre

    // Cierra los handles de procesos e hijos
    CloseHandle(piProcessInfo2.hThread);
    CloseHandle(piProcessInfo2.hProcess);

    printf("Finaliza el proceso %d\n",piProcessInfo1.dwProcessId);
    printf("Finaliza el proceso %d\n",piProcessInfo2.dwProcessId);

    return (EXIT_SUCCESS);
}
