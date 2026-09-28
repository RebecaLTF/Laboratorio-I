#include <stdio.h>

int main(){
    
    int total_1, contador, conceito;
    total_1 = 0;
    contador = 0;
    
    printf("Digite 1 para aprovado e 2 para reprovado!\n");
    
    while (contador < 10){
        contador ++;
        conceito = 0;
        while((conceito != 1) && (conceito != 2)){
            printf("Aluno %d - Conceito: ", contador);
            scanf("%d", &conceito);
        }
        if (conceito == 1){
            total_1 ++;
        }
    }
    
    if (total_1 > 8){
        printf("Bônus\n");
    }
    else{
        printf("Meta de aprovação não alcançada para bônus.\n");
    }

    return 0;
}