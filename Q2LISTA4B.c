#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main(){
setlocale(LC_ALL,"Portuguese");


int cod[50],busca,encontrado;
int i;
float preco[50];
srand(time(NULL));

    printf("Código\t Preço(R$)\n");

    for (i=0;i<49;i++) {

    cod[i] = rand()%100;
    preco[i] = rand()*1.25;

    printf("%d\t %.2f\n",cod[i], preco[i]);

    }

    printf("Digite o código do produto\n");
    scanf("%d",&busca);

    for (i=0;i<49;i++) {

    if (busca == cod[i]) {

        printf("O preço do produto de código %d é R$ %.2f\n", cod[i], preco[i]);
        encontrado = 2;
        break;

    }

    if (!encontrado) {

        printf("Produto não encontrado\n");
    }
}

    return 0;

    }
