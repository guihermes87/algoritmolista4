#include <stdio.h>
#include <time.h>
#include <locale.h>


int main(){
setlocale(LC_ALL,"Portuguese");


int a[10], b[10], c[10];
int i;

    printf("Informe os valores do Vetor A: ");

        for (i=0;i<10;i++){
        printf ("A[%d] = ",i);
        scanf("%d", &a[i]);
        }

    printf("Informe os valores do Vetor B: ");

        for (i=0;i<10;i++){
        printf ("B[%d] = ",i);
        scanf("%d", &b[i]);
        }


        for (i=0;i<10;i++){
        c[i] = a[i] * b[i];

        printf("O valor resultante da multiplicação de C[%d] = %d\n\t",i,c[i]);

        }



    return 0;
}
