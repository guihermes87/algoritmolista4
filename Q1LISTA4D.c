#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main(){
setlocale(LC_ALL,"Portuguese");


int cod[50];
int i;
float preco[50];
srand(time(NULL));

    printf("Código\t Preço(R$)\n");

    for (i=0;i<49;i++) {

    cod[i] = rand()%100;
    preco[i] = rand()*1.25;

    printf("%d\t %.2f\n",cod[i], preco[i]);

}

    return 0;

    }


