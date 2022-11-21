/* 
 * File:   main.c
 * Author: Irene, María y Lucía.
 *
 * Created on 28 de diciembre de 2016, 13:41
 */

#include <stdio.h>
#include <stdlib.h>

//Estructuras de datos para la entrada del programa

struct procesos {
    char nombreproceso; //Nombre del proceso
    int tiempollegada; //Tiempo llegada
    int tiempoejecucion; //Tiempo ejecucion
    int terminado; //0 no esta terminado, 1 esta terminado
    int tatiende; //proceso atendido por primera vez

};

//Estructura de datos para la salida del programa.

struct salida {
    char nproceso; //Nombre del proceso
    int tpermanencia; //Tiempo de permanencia del proceso
    int trespuesta; //Tiempo de respuesta del proceso
    int tespera; //Tiempo de espera del proceso
    int tatiende; //Tiempo en el que la cpu atiende por primera vez al proceso 
    int tsalida; //Tiempo de salida del proceso.
};


//funciones
int Comprueba_Error(int numero_procesos, int quantum, struct procesos p[], int contador_procesos);

void SJF(int numero_procesos, struct procesos p[], struct salida s[], int vorden[]);

void Round_Robin(int numero_procesos, int quantum, struct procesos p[], struct salida s[], int vorden[]);

int cola_SJF(int numero_procesos, int tiempo_ejecucion_proceso, struct procesos p[], int contador_procesos, int vcola[]);

int dizquierda(int k, int vcola[]);

void dderecha(int k, int vcola[], int contador_procesos);

int tiempof(struct procesos p[], int numero_procesos);

void Mostrar_resultados(struct salida ssjf[], struct salida srr[], int total_procesos, struct procesos p[], int vordensjf[], int vordenrr[], float uso_cpu);

void grafico(FILE *Salida, struct procesos p[], int numprocesos, int vorden[]);

int main(int argc, char* argv[]) {
    //Declaración de las variables
    int total, quantum, suma, i = 0, j, tf, k, m;
    float uso_cpu;

    //Comprobamos si se ha introducido un unico fichero como parametro
    if (argc == 1) {
        printf("Falta fichero.\nIntroduce el nombre del fichero ejecutable,seguido del fichero de texto\n");
        printf("Ejemplo: proyecto.exe quantum3.txt\n");
        exit(1);
    }
    if (argc != 2) {
        printf("Fichero incorrecto, has introducido mas de un parámetro.\nIntroduce un unico fichero de texto como parametro.\nEjemplo: proyecto.exe quantum3.txt");
        exit(2);
    } else {

        //Lectura

        FILE *fp;
        fp = fopen(argv[1], "r");
        if (fp == NULL)//Si no es un fichero da error
        {
            printf("Error.\nIntroduce un fichero de texto valido\n");
            exit(3);
        }

        fscanf(fp, "%d\n", &total);
        fscanf(fp, "%d\n", &quantum);


        //estructuras de entrada y de salida
        struct procesos p[total]; //Entrada de los procesos
        struct salida ssjf[total]; //Salida SJF
        struct salida srr[total]; //Salida RR

        //Leemos los datos del fichero y lo guardamos en la struct p
        while (!feof(fp)) {
            fscanf(fp, "%c:%d:%d\n", &p[i].nombreproceso, &p[i].tiempollegada, &p[i].tiempoejecucion);
            p[i].tatiende = 0;
            p[i].terminado = 0;
            i++;

        }
        //Comprueba errores en el fichero de entrada
        if (Comprueba_Error(total, quantum, p, i) == 1) {
            printf("ERROR!!!!!!\n");
            exit(5);
        } else {
            tf = tiempof(p, total); //Calculo tiempo final
            suma = 0;

            //Imprime los datos del fichero de entrada
            printf("total=%d\nquantum=%d\n", total, quantum);
            for (m = 0; m < total; m++) {
                printf("%c:%d:%d\n", p[m].nombreproceso, p[m].tiempollegada, p[m].tiempoejecucion);
            }
            //porcentaje de uso de la cpu
            for (j = 0; j < total; j++) {
                suma = suma + p[j].tiempoejecucion;
            }
            uso_cpu = ((float) suma / (float) tf)*100;


            //Indica los procesos que se encuentran en la cpu.
            //Si t<tf, no hay ningun proceso en la cpu, entonces vorden[t]=-1
            //cuando un proceso entra en la cpu el vector vale vorden[t]=numero del proceso
            //Este vector nos permite dibujar la grafica tanto en el RR como SJF

            int vordensjf[tf + 1]; //vorden SJF
            int vordenrr[tf + 1]; //vorden RR

            //Inicialización
            for (k = 0; k < (tf + 1); k++) {
                vordensjf[k] = -1;
                vordenrr[k] = -1;
            }
            //Ejecucion de los algoritmos
            SJF(total, p, ssjf, vordensjf);
            Round_Robin(total, quantum, p, srr, vordenrr);
            Mostrar_resultados(ssjf, srr, total, p, vordensjf, vordenrr, uso_cpu);
        }
        return 0;
    }
}
//Comprueba los posibles errores producidos al leer el fichero
int Comprueba_Error(int num_p, int q, struct procesos p[], int contador_p) {

    int i;

    //Comprobacion datos procesos
    for (i = 0; i < contador_p; i++) {
        //Comprueba que el caracter del proceso no es delimitador ni salto de linea ni que este vacio
        if ((p[i].nombreproceso == ':') || (p[i].nombreproceso == '\n') || (p[i].nombreproceso == ' ') || (&p[i].nombreproceso == NULL)) {
            printf("ERROR en el nombre del proceso de la linea %d\n", i + 1);
            return 1;
        }
        //Comprueba que el tiempo de llegada esta entre 0 y 100 y no es ni un delimitador ni un salto de linea ni que este vacio

        if (p[i].tiempollegada < 0 || p[i].tiempollegada > 100 || (p[i].tiempollegada == ':') || (p[i].tiempollegada == '\n') || (p[i].tiempollegada == ' ') || (&p[i].tiempollegada == NULL)) {
            printf("ERROR en el tiempo de llegada del proceso de la linea %d\n", i + 1);
            return 1;
        }//Comprueba que el tiempo de ejecucion esta entre 0 y 100 y no es ni un delimitador ni un salto de linea ni que este vacio
        if ((p[i].tiempoejecucion < 0) || (p[i].tiempoejecucion > 100) || (p[i].tiempoejecucion == ':') || (p[i].tiempoejecucion == '\n') || (p[i].tiempoejecucion == ' ') || (&p[i].tiempoejecucion == NULL)) {
            printf("ERROR en el tiempo de ejecucion del proceso de la linea %d\n", i + 1);
            return 1;
        }
    }

    if (contador_p != (num_p)) {
        printf("El numero de procesos del fichero no coincide con el numero real de procesos\n");
        return 1;
    }
    if ((num_p) <= 0) {
        printf("El numero de procesos es negativo o cero\n");
        return 1;
    }
    if (q >= 10) {
        printf("No has introducido q o q>10\n");
        return 1;
    }
    if ((q) <= 0) {
        printf("El q negativo o cero\n");
        return 1;
    }
    return 0;

}
//Realiza el algoritmo SJF
void SJF(int numprocesos, struct procesos p[], struct salida s[], int vorden[]) {
    //Declaración de Variables
    int tiempo = -1, i, j, k; //Tiempo=-1 porque hacemos un do-while, y sumamos +1.
    int tf; //Tiempo final de la ejecucion
    int cp = 0; //Contador de procesos que se encuentran en la cola
    int vcola[numprocesos]; //Cola del SJF. La cola se ordena de menor a mayor tiempo de ejecucion.
    //el que menos tarda es el que se encuentra en vcola[0] y el que mas tarde en vcola[cp].

    int cpu = 0; //si la cpu esta libre(0) o ocupado(1)
    int tcpu; //tiempo que lleva la cpu con el proceso
    int pcpu; //Numero del proceso que se encuentra en la cpu.

    //tiempo final del algoritmo como condicion de salida del do-while
    tf = tiempof(p, numprocesos);

    do {
        tiempo++;

        for (j = 0; j < numprocesos; j++) {
            if (tiempo == p[j].tiempollegada)//El proceso j es el que acaba de llegar
            {
                //Modificamos el contador de procesos 
                cp++;
                vcola[cola_SJF(numprocesos, p[j].tiempoejecucion, p, cp, vcola)] = j;
            }
        }
        if (cpu == 1)//Hay un proceso en la cpu
        {
            if (tcpu == p[pcpu].tiempoejecucion) //proceso terminado
            {
                tcpu = 0;
                s[pcpu].tsalida = tiempo;
                cpu = 0; //cpu libre

                //tiempos de espera y permanencia del proceso que se esta ejecutando
                s[pcpu].tpermanencia = s[pcpu].tsalida - p[pcpu].tiempollegada;
                s[pcpu].tespera = s[pcpu].tpermanencia - p[pcpu].tiempoejecucion;

                if (cp != 0)//Hay procesos en la cola
                {
                    pcpu = vcola[0];
                    vorden[tiempo] = pcpu; //lo guardamos en vorden[tiempo]
                    s[pcpu].tatiende = tiempo;

                    //tiempo de respuesta del proceso
                    s[pcpu].trespuesta = s[pcpu].tatiende - p[pcpu].tiempollegada;
                    cpu = 1;
                    tcpu = 1;
                    s[vcola[0]].nproceso = p[vcola[0]].nombreproceso;
                    cp = dizquierda(cp, vcola);

                }

            } else
                tcpu++;
        } else//No hay proceso en cpu
        {
            if (cp != 0)//procesos en la cola
            {
                pcpu = vcola[0];
                vorden[tiempo] = pcpu; //lo guardamos en vorden[tiempo]
                s[pcpu].tatiende = tiempo;

                //Calculo del tiempo de respuesta del proceso
                s[pcpu].trespuesta = s[pcpu].tatiende - p[pcpu].tiempollegada;
                cpu = 1;
                tcpu = 1;
                s[vcola[0]].nproceso = p[vcola[0]].nombreproceso;
                cp = dizquierda(cp, vcola);
            }
        }
    } while (tiempo != tf);
}
//muestra los resultados en dos ficheros,Siendo uno de ellos el fichero "Round_Robin", y el otro "Shortest_Job_First"
void Mostrar_resultados(struct salida s_sjf[], struct salida s_rr[], int num_procesos, struct procesos p[], int vordensjf[], int vordenrr[], float uso_cpu) {
    //ficheros de salida
    FILE *sjf, *rr;
    sjf = fopen("SJF", "w");
    rr = fopen("RR", "w");
    //Declaracion de variables
    int i, j, k;
    int sumatr = 0;
    int sumate = 0;
    int sumatp = 0;
    float mediatr, mediate, mediatp;

    //**************************************************************************
    //SJF
    //Calculo de las medias

    printf("\n\nGRÁFICO SJF\n\n");
    fprintf(sjf, "\n\nGRÁFICO SJF\n\n");
    grafico(sjf, p, num_procesos, vordensjf);

    for (j = 0; j < num_procesos; j++) {
        sumatr = sumatr + s_sjf[j].trespuesta;
        sumate = sumate + s_sjf[j].tespera;
        sumatp = sumatp + s_sjf[j].tpermanencia;
    }
    mediatr = (float) sumatr / (float) num_procesos;
    mediate = (float) sumate / (float) num_procesos;
    mediatp = (float) sumatp / (float) num_procesos;

    //datos de salida de los procesos para el SJF
    printf("Resultados SJF\n\n");
    fprintf(sjf, "Resultados SJF\n\n");

    printf("Uso de la CPU=%.2f%%\n", uso_cpu);
    fprintf(sjf, "Uso de la CPU=%.2f%%\n", uso_cpu);
    for (i = 0; i < num_procesos; i++) {
        printf("\nProceso:%c\tTiempo Permanencia:%d\tTiempo Respuesta:%d\tTiempo Espera:%d\n", s_sjf[i].nproceso, s_sjf[i].tpermanencia, s_sjf[i].trespuesta, s_sjf[i].tespera);
        fprintf(sjf, "\nProceso:%c\tTiempo Permanencia:%d\tTiempo Respuesta:%d\tTiempo Espera:%d\n", s_sjf[i].nproceso, s_sjf[i].tpermanencia, s_sjf[i].trespuesta, s_sjf[i].tespera);
    }
    printf("\nLas medias son:\n\nMedia Tiempo de Permanencia=%.2f\nMedia Tiempo de Respuesta=%.2f\nMedia Tiempo de Espera=%.2f\n", mediatp, mediatr, mediate);
    fprintf(sjf,"\nLas medias son:\n\nMedia Tiempo de Permanencia=%.2f\nMedia Tiempo de Respuesta=%.2f\nMedia Tiempo de Espera=%.2f\n\n\n", mediatp, mediatr, mediate);
    printf("\n********************************************************************************\n\n");
    //**************************************************************************
    //RR
    //Calculo de las medias

    printf("\n\nGráfico RR\n\n");
    fprintf(rr, "\n\nGráfico RR\n\n");

    grafico(rr, p, num_procesos, vordenrr);

    for (j = 0; j < num_procesos; j++) {
        sumatr = sumatr + s_rr[j].trespuesta;
        sumate = sumate + s_rr[j].tespera;
        sumatp = sumatp + s_rr[j].tpermanencia;
    }
    mediatr = (float) sumatr / (float) num_procesos;
    mediate = (float) sumate / (float) num_procesos;
    mediatp = (float) sumatp / (float) num_procesos;

    //datos de salida de los procesos para el RR.

    printf("Resultados RR\n\n");
    fprintf(rr, "Resultados RR\n\n");

    printf("Uso CPU=%.2f%%\n", uso_cpu);
    fprintf(rr, "Uso CPU=%.2f%%\n", uso_cpu);
    for (i = 0; i < num_procesos; i++) {
        printf("\nProceso:%c\tTiempo Permanencia:%d\tTiempo Respuesta:%d\tTiempo Espera:%d\n", s_rr[i].nproceso, s_rr[i].tpermanencia, s_rr[i].trespuesta, s_rr[i].tespera);
        fprintf(rr, "\nProceso:%c\tTiempo Permanencia:%d\tTiempo Respuesta:%d\tTiempo Espera:%d\n", s_rr[i].nproceso, s_rr[i].tpermanencia, s_rr[i].trespuesta, s_rr[i].tespera);
    }
    printf("\nLas medias son:\n\nMedia Tiempo de Permanencia=%.2f\nMedia Tiempo de Respuesta=%.2f\nMedia Tiempo de Espera=%.2f\n", mediatp, mediatr, mediate);
    fprintf(rr,"\nLas medias son:\n\nMedia Tiempo de Permanencia=%.2f\nMedia Tiempo de Respuesta=%.2f\nMedia Tiempo de Espera=%.2f\n\n\n", mediatp, mediatr, mediate);

}
//Calcula y devuelve el tiempo en el que la cpu termina de ejecutar todos los procesos del fichero de entrada
int tiempof(struct procesos p[], int numero_procesos) {
    //El tiempo final es igual a la suma de todos los tiempos de ejecucion de los procesos
    //mas el tiempo de llegada del primer proceso que llega a la cola.
    int i, j, tf;
    int suma = 0;
    int min = p[0].tiempollegada;
    for (i = 1; i < numero_procesos; i++) {
        if (p[i].tiempollegada < min)
            min = p[i].tiempollegada;
    }
    for (j = 0; j < numero_procesos; j++) {
        suma = suma + p[j].tiempoejecucion;
    }
    tf = suma + min;
    return tf;
}
//Calcula el indice de la cola a la que le corresponde un proceso que acaba de llegar al sistema y desplaza la cola segun sea necesario
int cola_SJF(int numprocesos, int tejec, struct procesos p[], int cp, int vcola[]) {
    int i;

    if (cp > numprocesos) {
        printf("%d", cp);
        printf("\nERROR!!!!! hay mas procesos de los descritos\n");
        exit(4);
    }
    cp--;
    //No hay procesos
    if (cp == 0)

        return cp;
        //hay un proceso en la cola como mínimo
    else {
        //El proceso que entra es el que mas tarda
        if (tejec > p[vcola[cp - 1]].tiempoejecucion) {
            return cp;
        }
        //proceso de la cola que es menor que el proceso que acaba de llegar
        for (i = 0; i < cp; i++) {
            if (tejec < p[vcola[i]].tiempoejecucion) {
                cp++;
                dderecha(i, vcola, cp);
                return i;
            }
        }
    }

}
//Desplaza cada uno de los elementos del vector cola desde k hasta el principio hacia la izquierda, Eliminando asi el primer elemento de la cola (vcola[0])
int dizquierda(int pos, int vcola[]) {
    int i = 0;
    for (i; i < pos; i++) {
        vcola[i] = vcola[i + 1];
    }
    return (pos - 1);

}
//Desplaza cada uno de los elementos del vector cola desde k hasta el final del vector hacia la derecha
void dderecha(int pos, int vcola[], int cp) {
    int i;
    //Hay que ir de derecha a izquierda mirando la cola
    for (i = cp; i > (pos); i--) {
        vcola[i] = vcola[i - 1];
    }
}
//Realiza elalgoritmo RR
void Round_Robin(int numprocesos, int quantum, struct procesos p[], struct salida datos[], int vorden[]) {

    struct procesos cola[numprocesos]; //Cola de los procesos
    int contcola = 0;
    int i = 0;
    int tiempo = 0; //tiempo total
    int terminados = 0; //procesos terminados
    int sincro = 0; //los procesos no se ejecuten antes de tiempo
    int contsalida = 0; //Contador salida
    int restas = 0; //Controla el tiempo que ejecuta un proceso
    int anadidos = 0; //Controla el numero de procesos que se añaden

    while (terminados != numprocesos) {
        vorden[tiempo] = -1;
        anadidos = 0;

        for (i = 0; i < numprocesos; i++) {
            //incorpora los procesos a cola la primera vez
            if (p[i].tiempollegada == tiempo) {
                if (contcola == 0) vorden[tiempo] = i;
                cola[contcola] = p[i];
                contcola++;
                anadidos++;

            }
        }
        if (cola[0].tatiende == 0) cola[0].tatiende = tiempo;

        if (contcola > 0) {

            if (sincro > 0) {
                cola[0].tiempoejecucion = cola[0].tiempoejecucion - 1;
                restas++;
                if (cola[0].tiempoejecucion == 0) restas = quantum;
            } else sincro++;
        }
        //recalcula la cola cada vez que se cumple el quantum 
        if (restas == quantum) {
           restas = 0;
            if (cola[0].tiempoejecucion == 0) {

                cola[0].terminado = 1;
                for (i = 0; i < numprocesos; i++) {

                    if (p[i].nombreproceso == cola[0].nombreproceso) {

                        terminados++;

                        datos[contsalida].nproceso = p[i].nombreproceso;
                        datos[contsalida].tpermanencia = tiempo - p[i].tiempollegada;
                        datos[contsalida].tespera = datos[contsalida].tpermanencia - p[i].tiempoejecucion;
                        datos[contsalida].trespuesta = cola[0].tatiende - p[i].tiempollegada;
                        contsalida++;
                    }
                }
                if (contcola > 0 && cola[0].terminado == 1) {
                    for (i = 0; i < contcola; i++) {
                        cola[i] = cola[i + 1];
                    }
                    contcola--;
                }
                if (cola[0].tatiende == 0) cola[0].tatiende = tiempo;
            } else {
                //calcula la nueva cola
                struct procesos aux, ultimo, penultimo;
                int i;
                anadidos++;

                aux = cola[0];
                if (contcola > 0) {
                    for (i = 0; i < contcola; i++) {
                        cola[i] = cola[i + 1];
                    }
                    cola[contcola - 1] = aux;

                }
                
                if (anadidos > 1) {

                    ultimo = cola[contcola - 1];
                    penultimo = cola[contcola - 2];

                    if (ultimo.nombreproceso < penultimo.nombreproceso) {

                        cola[contcola - 2] = ultimo;
                        cola[contcola - 1] = penultimo;
                    }
                }
                if (cola[0].tatiende == 0) cola[0].tatiende = tiempo;
            }          
            for (i = 0; i < numprocesos; i++) {
                if (p[i].nombreproceso == cola[0].nombreproceso)
                    vorden[tiempo] = i;
            }
        }
        tiempo++;
    }
}
//Muestra en pantalla el reparto temporal de cada uno de los algoritmos
void grafico(FILE *Salida, struct procesos p[], int numprocesos, int vorden[]) {
    //Declaracion de Variables
    int tf;
    int  t = 0;
    int i, j;
    int np; //Numero del proceso
    
    //Calculo del tiempo final
    tf = tiempof(p, numprocesos);   
    //Establecemos la linea vertical de la grafica
    printf("CPU");
    fprintf(Salida, "CPU");
    for (i = 0; i < 5; i++) {
        printf("\n");
        printf(" ");
        printf("|");
        fprintf(Salida, "\n");
        fprintf(Salida, " ");
        fprintf(Salida, "|");

    }
    //Ponemos los caracteres
    printf(" ");
    fprintf(Salida, " ");
    while (t < tf) {
        if (vorden[t] != -1) {
            if (t < 10) {
                printf("%c", p[vorden[t]].nombreproceso);
                fprintf(Salida, "%c", p[vorden[t]].nombreproceso);
                printf(" ");
                fprintf(Salida, " ");
            } else {
                printf("%c", p[vorden[t]].nombreproceso);
                fprintf(Salida, "%c", p[vorden[t]].nombreproceso);
                printf("  ");
                fprintf(Salida, "  ");
            }
        } else {
            if (t >= 10) {
                printf("   ");
                fprintf(Salida, "   ");
            } else {
                printf("  ");
                fprintf(Salida, "  ");
            }
        }
        t++;
    }
  
    printf("\n");
    printf(" ");
    printf("|");
    fprintf(Salida, "\n");
    fprintf(Salida, " ");
    fprintf(Salida, "|");
    t = 0;
    while (t <= tf) {
        if (vorden[t] != -1) {
            if (t < 10) {
                printf("|");
                printf("_");
                fprintf(Salida, "|");
                fprintf(Salida, "_");
            } else {
                printf("|");
                printf("__");
                fprintf(Salida, "|");
                fprintf(Salida, "__");
            }
        } else {
            if (t >= 10) {
                printf("___");
                fprintf(Salida, "___");
            } else {
                printf("__");
                fprintf(Salida, "__");
            }
        }
        t++;
    }
    printf("|");
    printf("\n ");
    fprintf(Salida, "|");
    fprintf(Salida, "\n ");
    t = 0;
    while (t <= tf) {
        printf("%d ", t);
        fprintf(Salida, "%d ", t);
        t++;
    }
    printf("T\n");
    fprintf(Salida, "T\n");

}
