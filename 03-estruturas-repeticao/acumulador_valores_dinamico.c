#include <stdio.h>

int main(){
    
    int valor, num, contador, soma;
    
    printf("Digite um valor (inteiro positivo): ");
    scanf("%d", &valor);
    soma = 0;
    
    for (contador = 1; contador <= valor; contador++){
        printf("Digite o %dº número: ", contador);
        scanf("%d", &num);
        soma += num;
    }
        
    printf("A soma dos últimos %d inteiros é %d", (contador-1), soma);
    return 0;
}