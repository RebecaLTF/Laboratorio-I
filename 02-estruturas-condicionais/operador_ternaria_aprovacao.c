#include <stdio.h>

int main(){
    int nota;
    printf("Digite a nota: ");
    scanf("%d", &nota);
    
    printf("%s\n", nota>=60 ? "Aprovado!" : "Reprovado!");

    return 0;
}
