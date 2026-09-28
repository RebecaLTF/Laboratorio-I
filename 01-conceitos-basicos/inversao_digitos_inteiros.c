#include <stdio.h>

int main(){
    
    int num, dezena, unidade, invertido;
    
    printf("Entre com um número de dois dígitos: ");
    scanf("%d", &num);
    dezena = num / 10;
    unidade = num % 10;
    invertido = unidade * 10 + dezena;
    printf("O número invertido é: %d\n", invertido);
    
    return 0;
}