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

    printf("C�digo\t Pre�o(R$)\n");

    for (i=0;i<49;i++) {

    cod[i] = rand()%100;
    preco[i] = rand()*1.25;

    printf("%d\t %.2f\n",cod[i], preco[i]);

    }

    printf("Digite o c�digo do produto\n");
    scanf("%d",&busca);

    for (i=0;i<49;i++) {

    if (busca == cod[i]) {

        printf("O pre�o do produto de c�digo %d � R$ %.2f\n", cod[i], preco[i]);
        encontrado = 2;
        break;

    }

    if (!encontrado) {

        printf("Produto n�o encontrado\n");
    }
}

    return 0;

    }
