#include <stdio.h>

int main(){
    
    float grausc;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &grausc);
    
    printf("A temperatura em Fahrenheit é %.2f", ((9.0*grausc)+160.0)/5.0);
    
    return 0;
}