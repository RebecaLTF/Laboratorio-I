#define SIZE 10
#include <stdio.h>

int main(){
    
    int nota[SIZE];
    int frequencia[11]={0};
    
    for(int i=0; i<SIZE; i++){
        do{
            printf("Digite a nota do aluno %d: ", i+1);
            scanf("%d", &nota[i]);
        }while(nota[i]<0 || nota[i]>10);
        
        frequencia[nota[i]]++;
    }
    
    for(int i=0; i<=10; i++){
        printf("Nota %d: %d vezes\n", i, frequencia[i]);
    }
    return 0;
}