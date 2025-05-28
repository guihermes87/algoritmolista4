#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int mat[30],inv[30],cod;
    int i = 0, posicao=0;
    int TAM=30;
    srand(time(NULL));

    for(i=0;i<3;i++) {

    printf("Digite a matrícula do aluno :");
    scanf("%i",&mat[i]);
    }

    printf("Digite o código");
    scanf("%i",&cod);




    switch (cod) {

    case 1:
        printf("Matrícula: \n");
        for(i=0;i<3;i++) {
            printf("%i\n",mat[i]);
        }
        break;


    case 2:
        for (i = 2; i>=0; i--) {
       // inv[i] = mat[i];
        printf("Matrícula invertida (simulada): %i\n", mat[i]);
    }   break;

    case 3:
        if (i%2 ==0)
        printf("Indice par da matrícula: %i\n", i);
        break;

    case 0:
        break;

    break;

    }


    return 0;
}

