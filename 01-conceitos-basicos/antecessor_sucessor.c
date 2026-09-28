#include <stdio.h>

int main(void){
    
    int numero;
    printf("Digite o valor do número: ");
    scanf("%d", &numero);
    
    printf("Antecessor: %d\n", numero-1);
    printf("Sucessor: %d\n", numero+1);
    return 0;
}