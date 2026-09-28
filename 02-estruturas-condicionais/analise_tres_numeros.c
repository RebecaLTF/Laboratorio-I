#include <stdio.h>

int main(){
    
    int nota1, nota2, nota3;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &nota1);
    printf("Digite um número inteiro: ");
    scanf("%d", &nota2);
    printf("Digite um número inteiro: ");
    scanf("%d", &nota3);
    
    printf("A soma é %d\n", (nota1+nota2+nota3));
    printf("A média é %d\n", (nota1+nota2+nota3)/3);
    printf("O produto é %d\n", (nota1*nota2*nota3));
    
    if ((nota1<=nota2) && (nota1<=nota3))
        printf("O menor é %d\n", nota1);
    
    if ((nota2<=nota1) && (nota2<=nota3))
        printf("O menor é %d\n", nota2);
    
    if ((nota3<=nota1) && (nota3<=nota2))
        printf("O menor é %d\n", nota3);
    
    
    if ((nota1>=nota2) && (nota1>=nota3))
        printf("O maior é %d\n", nota1);
    
    if ((nota2>=nota1) && (nota2>=nota3))
        printf("O maior é %d\n", nota2);
    
    if ((nota3>=nota1) && (nota3>=nota2))
        printf("O maior é %d\n", nota3);
    
    
    return 0;
}