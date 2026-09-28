#include <stdio.h>

int main(){
    
    float vendas, salario;
    int indice, i;
    int faixa[9]={0};
    
    printf("Digite o total de vendas: R$");
    scanf("%f", &vendas);
    
    while(vendas!=0.0){
        if (vendas < 0.0){
            printf("Erro: O valor de vendas não pode ser negativo!\n\n");
        } 
        else{
            salario = 200.0 + (0.09*vendas +0.5); 
            if (salario >= 1000.0){
                faixa[8]++;
            }
        
            else{
                indice = (int)(salario - 200.0)/100;
                if (indice >= 0 && indice < 8) {
                    faixa[indice]++;
                }
            }
        }
        printf("Digite o total de vendas: R$");
        scanf("%f", &vendas);
    }
    
    printf("\nQuantidade de vendedores por faixa salarial:\n");
    for(i=0; i<8; i++){
        printf("R$ %d - R$ %d: %d\n", 200 + i * 100, 299 + i * 100, faixa[i]);
    }
    printf("R$ 1000 ou mais: %d\n", faixa[8]);
    
    return 0;
}