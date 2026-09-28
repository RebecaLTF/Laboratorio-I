#include <stdio.h>

int main(){
    
    float valor_bruto;
    
    printf("Valor bruto (-1 para terminar): R$");
    scanf("%f", &valor_bruto);
    
    while (valor_bruto != -1.0){
        if (valor_bruto >= 0.0){
            printf("O valor recebido pelo vendedor foi de R$ %.2f\n", ((valor_bruto*0.09)+200.00));
        }
        else{
            printf("Valor inválido\n");
        }
        printf("Valor bruto (-1 para terminar): R$");
        scanf("%f", &valor_bruto);
    }
    

    return 0;
}