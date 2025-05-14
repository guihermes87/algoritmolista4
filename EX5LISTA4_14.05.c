#include <stdio.h>
#include <time.h>
#include <locale.h>


int main(){
setlocale(LC_ALL,"Portuguese");


int a[20], b[20], soma = 0;
int i;

    printf("Informe os valores do Vetor: ");

        for (i=0;i<5;i++){
            printf ("A[%d] = ",i);
            scanf("%d", &a[i]);
            if (a[i] == 0)
                b[i] = 2;
            else
                b[i] = a[i];
        }

        for (i=0;i<5;i++) {

            printf("O vetor b é %d\n\t", b[i]);
        }


        return 0;



}
