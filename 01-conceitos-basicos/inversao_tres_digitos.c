#include <stdio.h>

int main(){
    
    int num, centena, dezena, unidade, invertido;
    printf("Entre com um número de três dígitos: ");
    scanf("%d", &num);
    centena = num / 100;
    dezena = (num % 100) / 10;
    unidade = num % 10;
    invertido = unidade * 100 + dezena * 10 + centena;
    printf("O número invertido é : %d\n", invertido);

    return 0;
}