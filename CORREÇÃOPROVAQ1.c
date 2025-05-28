#include <stdio.h>

int main(){


int maio[31],i;
int maiortemp=-1, menortemp=99;
float media, soma=0;

printf("MAIO-TEMPERATURA\n");

for (i=0;i<5;i++){

printf("Dia %d:", i+1);
scanf("%d", &maio[i]);

soma += maio[i];

if (maio[i]>maiortemp)
    maiortemp = maio[i];

if (maio[i]<menortemp)
    menortemp = maio[i];

}

media =(float)soma/i;

    printf("Média da temperatua em maio %.2f\n", media);
    printf("Maior temperatura %d :\n", maiortemp);
    printf("Menor temperatura %d :\n", menortemp);

    printf("Dias com maior temperatura\n");

    for (i=0;i<5;i++){

    if (maiortemp == maio[i])
        printf("Dia %d\n", i+1);
}

    printf("Dias com menor temperatura\n");

    for (i=0;i<31;i++){

    if (menortemp == maio[i])
        printf("Dia %d\n", i+1);
}

}
