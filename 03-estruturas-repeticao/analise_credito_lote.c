#include <stdio.h>

int main(){
    
    int conta, contador;
    float limite, divida;
    
    for(contador = 1; contador <= 3; contador++){
        printf("--- Cliente %d ---\n", contador);
        printf("Número da conta: ");
        scanf("%d", &conta);
        printf("Limite de crédito inicial: R$ ");
        scanf("%f", &limite);
        printf("Dívida atual: R$ ");
        scanf("%f", &divida);

        float novo_limite = limite / 2.0;
        
        if (novo_limite >= divida){
            printf("O cliente tem limite suficiente!\n");
        }
        else{
            printf("O cliente tem limite insuficiente!\n");
        }
        printf("O novo é limite R$%.2f\n", novo_limite);
    }
    
    return 0;
}