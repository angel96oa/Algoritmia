
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    //
    //    //-ejercicio 1-//
    //    int x = 0;
    //    
    //    int y;
    //    printf("introduce valor entero: ");
    //    scanf("%d", &y);
    //    fflush(stdin);
    // 
    //    int z = rand()%1000;
    // 
    //    //Proceso
    //    
    //    if(y%2 == 2){
    //        y++;
    //    }
    //    
    //    //salida
    //    
    //    printf("Variable x = %d\n Variable y = %d \n", x, y);
    //    
    //    //Depuración
    //    printf("es 41");//en este caso es el aleatorio que ha salido
    //  
    //--ejercicio 2--//

    //    int x;
    //    printf("introduzca un numero: \n");
    //    scanf("%d\n", &x);
    //    fflush(stdin);

    //    if (x > 0) {
    //        printf("positivo");
    //    }

    //--ejercicio 3--//

    //    int x;
    //    printf("introduzca un entero: \n");
    //    scanf("%d", &x);
    //    fflush(stdin);
    //    
    //    if (x >= 0) {
    //        printf("Mayor o igual");
    //    } else {
    //        printf("menor");
    //    }

    //--ejercicio 4--//
    //
    //    int x;
    //    scanf("%d", &x);
    //    fflush(stdin);

    //    if (x > 0) {
    //        printf("mayor");
    //    } else if (x == 0) {
    //        printf("igual");
    //    } else {
    //        printf("menor");
    //    }
    //    
    //--ejercicio 5--//

    //    int x;
    //    scanf("%d", &x);
    //    if (x%2 == 0){
    //        printf("par");
    //    }
    //    
    //--ejercicio 6--//
    //    
    //    int x;
    //    scanf("%d", &x);
    //    fflush(stdin);
    //    int y = x%10;
    //    printf("%d", y);

    //--ejercicio 7--//

    //    int x;
    //    scanf("%d", &x);
    //    fflush(stdin);
    //    
    //    x = x / 10;
    //    printf("%d", x);  
    //    
    //--ejercicio 8--//

    //    int x;
    //    scanf("%d", &x);
    //    fflush(stdin);
    //    int y;
    //    scanf("%d", &y);
    //    fflush(stdin);
    //    if(x%y==0){
    //        printf("multiplo");
    //    }

    //--ejercicio 9--//
    //
    //    float x;
    //    scanf("%f", &x);
    //    fflush(stdin);
    //    if((int) x != x){
    //        printf("es decimal");
    //    } else {
    //        printf("es entero");
    //    }


    //--ejercicio 10--//
    //
    //    int i;
    //    int x;
    //
    //    for (i = 0; i < 10; i++) {
    //        scanf("%d", &x);
    //        fflush(stdin);
    //
    //        printf("%d\n", x);
    //    }

    //--ejercicio 11--//
    //
    //    int x;
    //
    //    scanf("%d", &x);
    //    fflush(stdin);
    //
    //    while (x != 0) {
    //        printf("%d", x);
    //
    //        scanf("%d", &x);
    //        fflush(stdin);
    //    }


    //--ejercicio 12--//

    //    int x;
    //    int c = 0;
    //    scanf("%d", &x);
    //    fflush(stdin);
    //
    //    while (c < 4) {
    //        if (x > 0) {
    //            c++;
    //        }
    //
    //        scanf("%d", &x);
    //        fflush(stdin);
    //    }

    //--ejercicio 13--//

//    int x;
//    char c;
//
//    do {
//        scanf("%d", &x);
//        fflush(stdin);
//        printf("%d\n", x);
//        
//
//        printf("Continuar?: ");
//        scanf("%c", &c);
//        fflush(stdin);
//        
//    } while (c == 'y');



        //--ejercicio 14--//

    int x;
    int i;
    int y = 0;    
    for( i = 0; i < 5; i++){
        scanf("%d", &x);
        fflush(stdin);
        y = y + x;
        printf("%d", y);  
    } 
    
        //--ejercicio 15--//

        //    int q = 1;
        //
        //    int x;
        //    scanf("%d", &x);
        //    fflush(stdin);
        //
        //    q *= x;
        //
        //    int r;
        //    scanf("%d", &r);
        //    fflush(stdin);
        //
        //    q *= r;
        //
        //    int t;
        //    scanf("%d", &t);
        //    fflush(stdin);
        //
        //    q *= t;
        //
        //    int g;
        //    scanf("%d", &g);
        //    fflush(stdin);
        //
        //    q *= g;
        //
        //    int l;
        //    scanf("%d", &l);
        //    fflush(stdin);
        //
        //    q *= l;
        //
        //    printf("%d", q);

        //--ejercicio 16--//

        //    int x;
        //    scanf("%d", &x);
        //    fflush(stdin);
        //
        //    int z;
        //    scanf("%d", &z);
        //    fflush(stdin);
        //
        //    int y;
        //    scanf("%d", &y);
        //    fflush(stdin);
        //
        //    int q;
        //    scanf("%d", &q);
        //    fflush(stdin);
        //
        //    int p;
        //    scanf("%d", &p);
        //    fflush(stdin);
        //
        //    if (x > 0) {
        //        printf("%d, ", x);
        //    }
        //    if (z > 0) {
        //        printf("%d, ", z);
        //    }
        //    if (y > 0) {
        //        printf("%d, ", y);
        //    }
        //    if (q > 0) {
        //        printf("%d, ", q);
        //    }
        //    if (p > 0) {
        //        printf("%d", p);
        //    }

        //--ejercicio 17--//
        //    
        //    int x;
        //    scanf("%d", &x);
        //    fflush(stdin);
        //    
        //    int y;
        //    scanf("%d", &y);
        //    fflush(stdin);
        //    
        //    int z;
        //    scanf("%d", &z);
        //    fflush(stdin);
        //    
        //    int a;
        //    scanf("%d", &a);
        //    fflush(stdin);
        //    
        //    int b;
        //    scanf("%d", &b);
        //    fflush(stdin);
        //    
        //    if(x > 0){
        //        printf("positivo\n");
        //    } else {
        //        printf("negativo\n");
        //    }
        //    
        //    if(y > 0){
        //        printf("positivo\n");
        //    } else {
        //        printf("negativo\n");
        //    }
        //    
        //    if(z > 0){
        //        printf("positivo\n");
        //    } else {
        //        printf("negativo\n");
        //    }
        //    
        //    if(a > 0){
        //        printf("positivo\n");
        //    } else {
        //        printf("negativo\n");
        //    }
        //    
        //    if(b > 0){
        //        printf("positivo\n");
        //    } else {
        //        printf("negativo\n");
        //    }

        //    //--ejercicio 18--// 
        //    int c = 0;
        //    
        //    int x;
        //    scanf("%d", &x);
        //    fflush(stdin);
        //    
        //    int y;
        //    scanf("%d", &y);
        //    fflush(stdin);
        //    
        //    int z;
        //    scanf("%z", &z);
        //    fflush(stdin);
        //    
        //    int a;
        //    scanf("%a", &a);
        //    fflush(stdin);
        //    
        //    int b;
        //    scanf("%b", &b);
        //    fflush(stdin);
        //    
        //    if(x > 0){
        //        c++;
        //    }
        //    if(y > 0){
        //        c++;
        //    }
        //    if(z > 0){
        //        c++;
        //    }
        //    if(a > 0){
        //        c++;
        //    }
        //    if(b > 0){
        //        c++;
        //    }
        //    printf("%d", c);


        //--ejercicio 19--//

        //    int x;
        //    scanf("%d", &x);
        //    fflush(stdin);
        //
        //    switch (x) {
        //        case 1:
        //            printf("Menu Principal");
        //            break;
        //        case 2:
        //            printf("Menu secundario");
        //            break;
        //        case 3:
        //            printf("salida");
        //            break;
        //        default:
        //            printf("error");
        //    }
    }
























