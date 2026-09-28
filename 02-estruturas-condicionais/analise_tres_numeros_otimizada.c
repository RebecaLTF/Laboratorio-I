#include <stdio.h>

int main(){
    
    int nota1, nota2, nota3, menor, maior;
    
    printf("Digite três inteiros diferentes: ");
    scanf("%d %d %d", &nota1, &nota2, &nota3);
    
    printf("A soma é %d\n", (nota1+nota2+nota3));
    printf("A média é %d\n", (nota1+nota2+nota3)/3);
    printf("O produto é %d\n", (nota1*nota2*nota3));
    
    menor = maior = nota1;
    
    if (nota2<menor)
        menor = nota2;
    if (nota3<menor)
        menor = nota3;
    
    if (nota2>maior)
        maior = nota2;
    if (nota3>maior)
        maior = nota3;
        
    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);
    
    return 0;
}