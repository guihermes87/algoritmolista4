#include <stdio.h>
#include <time.h>
#include <locale.h>


int main(){
setlocale(LC_ALL,"Portuguese");


int a[5], b[5];
int i, posicao = 4;

    printf("Informe os valores do Vetor: ");

        for (i=0;i<5;i++){
            printf ("A[%d] = ",i);
            scanf("%i", &a[i]);
        }

        for (i=0;i<5;i++){
            printf ("valores do vetor = %i \n", a[i]);
        }

        for (i=0;i<5;i++) {
            b[i] = a[posicao];
            printf("O vetor invertido de A é %i\n", b[i]);
            posicao--;
        }



        return 0;



}
