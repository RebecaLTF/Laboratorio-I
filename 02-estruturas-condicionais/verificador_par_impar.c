#include <stdio.h>

int main(){
    
    int x, result;
    
    printf("Digite um valor inteiro: ");
    scanf("%d", &x); 
    result = (x % 2 == 0);
    printf("Resultado: %d\n", result);
    return 0;
}