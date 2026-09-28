#include <stdio.h>

int main(){
    
    int num, d1, d2, d3, d4, d5;
    printf("Entre com um número entre 0 e 32767: ");
    scanf("%d", &num);
    
    d5 = num % 8;
    num = num / 8;
    d4 = num % 8;
    num = num / 8;
    d3 = num % 8;
    num = num / 8;
    d2 = num % 8;
    num = num / 8;
    d1 = num % 8;
    
    printf("Em octal, o número é: %d%d%d%d%d\n", d1, d2, d3, d4, d5);

    return 0;
}