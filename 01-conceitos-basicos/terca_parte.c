#include <stdio.h>

int main(){
    
    float num;
    printf("Digite um número real: ");
    scanf("%f", &num);
    
    printf("A terça parte desse número é %.2f", num/3);

    return 0;
}