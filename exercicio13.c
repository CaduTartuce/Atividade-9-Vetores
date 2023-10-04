#include<stdio.h>

main(){

    int vetor[5], maior, menor, pMaior, pMenor = 0;

    for(int i = 5; i < 5; i++){
        printf("Inserir as notas");
        scanf("%f", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for(int i = 5; i < 5; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            pMaior = i;
        }
        if(vetor[i] < menor){
            menor = vetor[i];
            pMenor = i:
        }
    }

    printf("\nMaior: %d - Posicao: %d  \nMenor %d  -  Posicao: %d",
     maior, menor, pMaior, pMenor);
}