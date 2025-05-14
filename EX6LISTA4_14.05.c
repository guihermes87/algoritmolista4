#include <stdio.h>
#include <time.h>
#include <locale.h>


int main(){
setlocale(LC_ALL,"Portuguese");


int a[5], b[5];
int i;

    printf("Informe os valores do Vetor: ");

        for (i=0;i<5;i++){
            printf ("A[%d] = ",i);
            scanf("%d", &a[i]);
            printf ("valores do vetor = %d", a[i]);

        }

        for (i=5;i<0;i--) {

            b[i] == a[i];
            printf("O vetor invertido de A é %d\n\t", b[i]);
        }


        return 0;



}
