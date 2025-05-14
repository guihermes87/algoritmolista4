#include <stdio.h>
#include <time.h>
#include <locale.h>


int main(){
setlocale(LC_ALL,"Portuguese");


int a[50];
int i, qPar = 0;

    printf("Informe os valores do Vetor:");

        for (i=0;i<50;i++){
        printf ("a[%d] = ",i);
        scanf("%d", &a[i]);


}

    printf("Elementos pares em A:\n\t");

        for (i =0;i<50;i++){

        if (a[i] %2==0) {
        printf("%d\t", a[i]);
        qPar++;

        }
    }

    printf("Número de elementos pares: %i\n", qPar);

    return 0;
}
