#include <stdio.h>

int main(){
    
    int num, milhar, centena, dezena, unidade;
    
    printf("Entre com um número entre 0 e 9999: ");
    scanf("%d", &num);
    
    milhar = num / 1000;
    centena = (num % 1000)/ 100;
    dezena = (num % 100) / 10;
    unidade = num % 10;
    
    
    printf("Os digitos são: %d %d %d %d\n", milhar, centena, dezena, unidade);
    
    return 0;
}