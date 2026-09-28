#include <stdio.h>

int main(){
    
    float saldo;
    printf("Saldo anterior: ");
    scanf("%f", &saldo);
    
    printf("O saldo reajustado é: %.2f", saldo*1.01);
    
    return 0;
}