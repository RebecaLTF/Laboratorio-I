#include <stdio.h>

int main(){
    
    int num, i, j;
    
    for (i = 1; i <= 5; i++){
        printf("\nInforme um número inteiro entre 1 e 30: ");
        scanf("%d", &num);
        while (num < 1 || num >30){
            printf("Número inválido! Tente novamente!\n");
            printf("Informe um número inteiro entre 1 e 30: ");
            scanf("%d", &num);
        }
        
        
        for (j = 1; j <= num; j++){
        printf("*");
        }
        printf("\n\n");
    }
    

    return 0;
}