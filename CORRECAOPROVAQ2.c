#include <stdio.h>

int main(){


int legenda[5],votos[5],i, vencedor = 0;
float percentual[5];
int totalvotos=0, ivencedor;


    printf("Informe a legenda de cada partido\n");

    for (i=0;i<5;i++) {
        scanf("%i", &legenda[i]);
}

        printf("Votos:\n");

    for(i=0;i<5;i++) {

        scanf("%i",&votos[i]);

    if(votos[i]>vencedor){

        vencedor = votos[i];
        ivencedor = i;

        totalvotos += votos[i];

    }

}
    //calculando o percentual

    for (i=0;i<5;i++){
    percentual[i] = (float)votos[i]/totalvotos*100;

    }

    printf("Legenda\t Qtde. Votos\tPercentual\n");


    for(i=0;i<5;i++)
    printf("%d\t%d\t\t\t%.2f%%\n",legenda[i], votos[i], percentual[i]);

    printf("Vencedor\n");
    printf("Legenda: %d -Qte.Votos:%d -Percentual%.2f\n",legenda[ivencedor], votos[ivencedor], percentual[ivencedor]);

    return 0;

}
