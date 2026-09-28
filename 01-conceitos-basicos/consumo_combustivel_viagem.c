#include <stdio.h>

int main(){
    
    float velocidade, tempo, dist;
    printf("Velociade (em km/h): ");
    scanf("%f", &velocidade);
    printf("Tempo (em hora): ");
    scanf("%f", &tempo);
    
    dist = velocidade * tempo;
    printf("Foram gastos %.2f litros de gasolina",(dist)/12);
    return 0;
}