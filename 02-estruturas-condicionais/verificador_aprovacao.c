#include <stdio.h>

int main(){
    int nota;
    printf("Digite a nota: ");
    scanf("%d", &nota);

    if (nota >= 60){
        printf("Parabéns!\n");
        printf("Você foi aprovado!\n");
    }
    

    return 0;
}