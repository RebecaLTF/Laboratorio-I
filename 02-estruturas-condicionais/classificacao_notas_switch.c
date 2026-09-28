#include <stdio.h>

int main(){

    int nota;

    printf("Digite uma nota de avaliação (1 a 3): ");
    scanf("%d", &nota);

    switch (nota){
        case 1:
            printf("Regular\n");
            break;
            
        case 2:
            printf("Bom\n");
            break;
            
        case 3:
            printf("Excelente\n"); 
            break;
            
        default:
            printf("Nota inválida\n");
            break;
    }

    return 0;
}
