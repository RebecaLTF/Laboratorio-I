#include <stdio.h>

int main(){
    
    int binario, d1, d2, d3, d4, decimal; 
    
    printf("Digite um número inteiro 'binário': ");
    scanf("%d", &binario);
    
    d1 = (binario/1000) % 10;
    d2 = (binario/100) % 10;
    d3 = (binario/10) % 10;
    d4 = binario % 10;
    
    if ((d1 != 0 && d1 != 1) || (d2 != 0 && d2 != 1) || (d3 != 0 && d3 != 1) || (d4 != 0 && d4 != 1)){
        printf("Não é um número binário!\n");
        return 1;
    }
    else{
        decimal = d1*8 + d2*4 + d3*2 + d4*1;
        printf("É um número binário válido!\n");
        printf("Decimal: %d\n", decimal);
    }
    
    return 0;
}