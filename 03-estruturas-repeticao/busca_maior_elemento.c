#include <stdio.h>

int main(){
    
    float num, maior;
    int contador;

    printf("Informe o 1º número: ");
    scanf("%f", &num);

    maior = num;
    contador = 2;
    
    while (contador<=10){
        printf("Informe o %dº número: ", contador);
        scanf("%f", &num);
        if (num > maior){
            maior = num;
        }
        contador += 1;
    }
    printf("O maior número é %.2f\n", maior);
    return 0;
}