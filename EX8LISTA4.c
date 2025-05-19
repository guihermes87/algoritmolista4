#include <stdio.h>
#include <time.h>
#include <locale.h>


int main(){
setlocale(LC_ALL,"Portuguese");


int a[10],n;
int i=0;


    printf("Informe o valor de n\n");
    scanf("%i",&n);

    for (i=0;i<10;i++) {

    printf("Informe os valores do Vetor [%i]: \n", i);
    scanf("%i", &a[i]);
    }

    for (i=0;i<10;i++) {

    if (n == a[i]){

    printf("Vetor encontrado posição [%i]\n", i);
    i++;

    } else {

    printf("Vetor não encontrado");
    }

    }

        return 0;

}

