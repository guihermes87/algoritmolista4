#include <stdio.h>
#include <time.h>
#include <locale.h>


int main(){
setlocale(LC_ALL,"Portuguese");


int a[20];
int i, qPar = 0;

    printf("Informe os valores do Vetor:");

    for (i=0;i<20;i++){
    printf ("a[%d] = ",i);
    scanf("%d", &a[i]);


}

    printf("Elementos pares em A:\n");

        for (i =0;i<20;i++){

        if (a[i] %2==0)
        printf("%d", a[i]);
        qPar++;

    }

    return 0;
}
