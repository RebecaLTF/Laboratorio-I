#include <stdio.h>

int main() {
    
    int conta;
    float saldo, encargo, credito, limite, resultado;
    
    printf("Informe o número da conta: ");
    scanf("%d", &conta);
    printf("Informe o saldo inicial: ");
    scanf("%f", &saldo);
    printf("Informe o total de encargos: ");
    scanf("%f", &encargo);
    printf("Informe o total de créditos: ");
    scanf("%f", &credito);
    printf("Informe o limite de crédito: ");
    scanf("%f", &limite);
    
    resultado = (saldo - encargo) + credito;
    
    if (resultado < (limite * (-1)))
        printf("Limite excedido!");
    if (resultado >= (limite * (-1)))
        printf("Limite não excedido!");
    return 0;
}