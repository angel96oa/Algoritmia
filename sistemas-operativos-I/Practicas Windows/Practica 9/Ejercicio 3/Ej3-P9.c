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
int cont=0;
char n;
char a[32];
//n=i;
for(i=97;i<126;i++){ // 97 ==> 'a' en ascii


          n=i;

    if(uDriveMask & 1){

     //   printf(" %c:/ ",n);
        a[cont]=n;
        cont++;
    }

    uDriveMask >>= 1 ; //desplazamos a la derecha la máscara de bits
}
//printf("\n");
//printf("Primera unidad %c:/\n",a[0]);
//printf("Ultima unidad %c:/\n",a[cont - 1]);
char cadena[100];
sprintf(cadena,"%c:\\copia_%c\\",a[0],a[cont - 1]); //guardo en cadena un string con sprintf
//BOOL direc = CreateDirectory(cadena,0); //creo el directorio en el directorio actual con el nombre de la cadena
printf("Directorio de origen %c:\\\n",a[cont - 1]); //este es el directorio que quiero copiar
printf("Directorio de destino %c:\\copia_%c\\\n",a[0],a[cont - 1]); //en este directorio destino copio el directorio origen

/*if (direc == TRUE){ // si se ha creado correctamente el directorio
    printf("Creado el directorio %c:\\copia_%c\\\n",a[0],a[cont - 1]);
                  }*/

    /*if(SetCurrentDirectory(cadena)==TRUE){ //compruebo que puedo cambiar de directorio (me dice el directorio actual de trabajo)

    DWORD nBufferLength=GetCurrentDirectory(0,NULL); //pongo el nuevo directorio de trabajo para cambiarlo por el antiguo
    char* lpBuffer=(LPTSTR)malloc(nBufferLength); // Paso del directorio actual c:\ al nuevo directorio que he creado e:
    int tam=GetCurrentDirectory(nBufferLength,lpBuffer);

    printf("Directorio de trabajo actual %s\\\n",lpBuffer);
}*/

    sprintf(cadena,"%c:\\",a[cont-1]);
    SetCurrentDirectory(cadena); // cambio el directorio actual (por defecto es e:\ por ejemplo)

    HANDLE hFind; //comenzamos la estructura de búsqueda de ficheros
    WIN32_FIND_DATA datos;

    hFind = FindFirstFile( "*.*", &datos); // empleamos el patrón *.* como primer parámetro

    if(hFind != INVALID_HANDLE_VALUE){ // comprueba si se ha creado hFind con su respectivo patrón de búsqueda
        while (FindNextFile(hFind,&datos)) // mientras encuentre ficheros
        {
            if(!(datos.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)){ //si no es el fichero un directorio
               SYSTEMTIME tiempo;
               FileTimeToSystemTime(&datos.ftLastWriteTime, &tiempo);
               int tam=(datos.nFileSizeHigh * MAXDWORD + datos.nFileSizeLow);
               printf("%2d/%2d/%4d %2d:%2d %2s %d\n",tiempo.wDay,tiempo.wMonth,tiempo.wYear,tiempo.wHour + 1,tiempo.wMinute,datos.cFileName,tam); //datos.cFileName es el fichero que encuentra o que va encontrando
            }
        }
        FindClose(hFind);
    }
    return(EXIT_SUCCESS);
}