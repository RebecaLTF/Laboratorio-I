#define SIZE 10
#include <stdio.h>

int main(){
    int vetor[SIZE];
    int soma, maior, menor, pares, impares, vp, vi;

    for (int i = 0; i < SIZE; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    soma = pares = vp = 0;
    maior = menor = vetor[SIZE - 1]; 
    
    for (int i = 0; i < SIZE; i++) { 
        soma += vetor[i];
        
        if (i % 2 == 0) {
            vp += vetor[i];
        }
        if (vetor[i] % 2 == 0) {
            pares += vetor[i];
        }
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    
    vi = soma - vp;             
    impares = soma - pares;     
    
    printf("\n--- Relatório Estatístico do Vetor ---\n");
    printf("Soma total dos elementos: %d\n", soma);
    printf("Maior valor encontrado: %d\n", maior);
    printf("Menor valor encontrado: %d\n", menor);
    printf("Soma dos números pares: %d\n", pares);
    printf("Soma dos números ímpares: %d\n", impares);
    printf("Soma dos elementos nos índices pares: %d\n", vp);
    printf("Soma dos elementos nos índices ímpares: %d\n", vi);

    return 0;
}
