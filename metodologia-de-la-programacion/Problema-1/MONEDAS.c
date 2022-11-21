#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	float cantidad=0;
    int i = 0, j = 0;
    scanf("%f", &cantidad);
    cantidad = cantidad * 100;
    int v[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int w[15]={0};
    printf("%0.2f\n",cantidad);
    while ((cantidad > 0)) {
        if ((cantidad - v[i])>=0) {
            cantidad = cantidad - v[i];
            w[i]++;
        } else
            i++;
    }
    for(i=0;i<15;i++){
        printf("Hay %d monedas de %0.2f\n",w[i],(float)v[i]/100);
    }
}


