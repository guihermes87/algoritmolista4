#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main(){
setlocale(LC_ALL,"Portuguese");

int a[20], b[20];
int i, posicao=4;



    for(i=0;i<20;i++){

    printf("Informe os valores do vetor A[%i] :", i);
    scanf("%i", &a[i]);

}

    for (i=0;i<20;i++) {

    b[i] = a[posicao];
    printf("Vetor %i\t agora é %i \n", a[i], b[i]);
    posicao--;

}

    return 0;

    }
