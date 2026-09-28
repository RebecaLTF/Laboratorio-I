#include <stdio.h>

int main(){
    
    int num, centena, dezena, unidade, result;
    printf("Entre com um número de três dígitos: ");
    scanf("%d", &num);
    
    centena = num / 100;
    dezena = (num % 100) / 10;
    unidade = num % 10;
    result = (centena == unidade);
    
    printf("O número é um palíndromo: %d\n", result);

    return 0;
}