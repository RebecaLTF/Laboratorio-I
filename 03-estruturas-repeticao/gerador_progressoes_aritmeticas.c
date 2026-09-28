#include <stdio.h>

int main(){
    
    int num;
    
    printf("%d", num = 1);
    for (num = 2; num <= 7; ++num){
        printf(", %d ", num);
    }
    printf("\n");
    
    printf("%d", num = 3);
    for (num = 8; num <= 23; num += 5){
        printf(", %d", num);
    }
    printf("\n");
    
    printf("%d", num = 20);
    for (num = 14; num >= -10; num -= 6){
        printf(", %d", num);
    }
    printf("\n");
    
    printf("%d", num = 19);
    for (num = 27;num <= 51; num += 8){
        printf(", %d", num);
    }
    printf("\n");
    
    return 0;
}