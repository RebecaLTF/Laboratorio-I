#include <stdio.h>

int main() {
    
    int x, y;
    
    printf("Digite um valor de x: ");
    scanf("%d", &x);
    printf("Digite um valor de y: ");
    scanf("%d", &y);
    // A //
    if ((y == 8) && (x == 5)){
        printf("@@@@@\n");
        printf("$$$$$\n");
        printf("&&&&&\n\n");
    }
    else
        printf("#####\n\n");
    
    
    
    // B //
    if ((y == 8) && (x == 5))
        printf("@@@@@\n\n");
    
    else{
        printf("#####\n");
        printf("$$$$$\n");
        printf("&&&&&\n\n");
    }
    
    
    // C //
    if ((y == 8) && (x == 5)){
        printf("@@@@@\n");
        printf("&&&&&\n\n");
    }
    else{
        printf("#####\n");
        printf("$$$$$\n\n");
    }
    
    
    // D //
     if ((y == 8) && (x == 5)){
        printf("#####\n");
        printf("$$$$$\n");
        printf("&&&&&\n\n");
    }
    else
        printf("@@@@@\n\n");
        
    
    return 0;
}