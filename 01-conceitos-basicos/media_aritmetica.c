#include <stdio.h>

int main(){
    
    float n1, n2, n3, media;
    printf("Informe um número real não negativo: ");
    scanf("%f", &n1);
    printf("Informe um número real não negativo: ");
    scanf("%f", &n2);
    printf("Informe um número real não negativo: ");
    scanf("%f", &n3);
    
    media = (n1 + n2 + n3)/3;
    printf("O valor da média é: %.2f", media);
    return 0;
}