#include <stdio.h>

int main(){
    
    float nota, total;
    int contador;
    total = 0.0;
    contador = 0;
    
    printf("Digite sua nota (intervalo de 0 e 10): ");
    scanf("%f", &nota);
    
    while ((nota <= 10.0) && (nota >= 0.0)){
    total += nota;
    contador += 1;
    printf("Digite sua nota: ");
    scanf("%f", &nota);
    }
    
    if (contador > 0){
        printf("A média da turma foi %.2f\n", total/contador);
    }
    else{
        printf("Nenhuma nota válida foi digitada!\n");
    }

    return 0;
}
