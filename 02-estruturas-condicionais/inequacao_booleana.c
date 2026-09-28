#include <stdio.h>

int main(){
    
    double x;
    int result; 
    
    printf("Digite um valor para x: ");
    scanf("%lf", &x);
    result = (x * x - 4 > 5);
    printf("Resultado: %d\n", result);

    return 0;
}