#include <stdio.h>
#include <time.h>
#include <locale.h>


int main(){
setlocale(LC_ALL,"Portuguese");


int a[80], soma = 0, menorvalor;
int i;

    printf("Informe os valores do Vetor A: ");

        for (i=0;i<4;i++){
        printf ("A[%d] = ",i);
        scanf("%d", &a[i]);
        soma =+ a[i];

        }

        for (i=0;i<4;i++){

        menorvalor = soma - a[i];

        if (menorvalor <= a[i]){
                menorvalor == a[i];
        }
}

        printf (" O menor elemento de A[%d] é = %d, na posição %d",menorvalor,i);



        return 0;

        }

