#include <stdio.h>
#include <time.h>
#include <locale.h>


int main(){
setlocale(LC_ALL,"Portuguese");


int a[8], b[8];
int i=0, produto = 0;


    for (i=0;i<8;i++) {
    printf("Informe os valores do Vetor A: ", i);
    scanf("%i", &a[i]);
    }

    for (i=0;i<8;i++) {

    printf("Informe os valores do Vetor B: ", i);
    scanf("%i", &b[i]);

    }

    for (i=0;i<8;i++){

    produto += a[i]* b[i];

    }

     printf("%i\t", produto);

        return 0;



}
