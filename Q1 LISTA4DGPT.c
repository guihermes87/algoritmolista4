#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int mat[30],inv[30],cod[3];
    int i = 0, posicao=0;
    int TAM=30;
    srand(time(NULL));

    for(i=0;i<3;i++) {

    printf("Digite a matr�cula do aluno :");
    scanf("%i",&mat[i]);

    printf("Digite o c�digo do aluno [%i]", mat[i]);
    scanf("%i",&cod[i]);

    }

    for(i=0;i<3;i++) {


    switch (cod[i]) {

    case 1:

        printf("Matr�cula: %i\n", mat[i]);
        break;



    case 2:

        for (i = 0; i < TAM; i++) {
        inv[i] = mat[TAM - 1 - i]; // Acessa de tr�s para frente
        printf("Matr�cula invertida (simulada): %i\n", inv[i]);
    }
    break;




    case 3:

    if (i%2 ==0)
        printf("Indice par da matr�cula: %i\n", i);
        break;

    case 0:
        break;

    break;

    }




    return 0;
}
}

