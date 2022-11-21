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
char cadena[100]; //cadena será el nombre de mi directorio
sprintf(cadena,"%c:\\copia_%c\\",a[0],a[cont - 1]); //guardo en cadena un string con sprintf

//PARA CREAR DIRECTORIO
BOOL direc = CreateDirectory(cadena,0); //creo el directorio en el directorio actual con el nombre de la cadena

printf("Directorio de origen %c:\\\n",a[cont - 1]); //este es el directorio que quiero copiar
printf("Directorio de destino %c:\\copia_%c\\\n",a[0],a[cont - 1]); //en este directorio destino copio el directorio origen
if (direc == TRUE){ // si se ha creado correctamente el directorio
    printf("Creado el directorio %c:\\copia_%c\\\n",a[0],a[cont - 1]);
                  }
    if(SetCurrentDirectory(cadena)==TRUE){ //compruebo que puedo cambiar de directorio y cambio de directorio

    //PARA MOSTRAR DIRECTORIO ACTUAL
    DWORD nBufferLength=GetCurrentDirectory(0,NULL); 
    char* lpBuffer=(LPTSTR)malloc(nBufferLength); 
    int tam=GetCurrentDirectory(nBufferLength,lpBuffer);

    printf("Directorio de trabajo actual %s\\\n",lpBuffer);
}
}
