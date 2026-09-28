#include <stdio.h>
#include <string.h>

int main(){
    
    
    double a, b;
    int result1, result2, result3;
    
    // caso a //
    char nome1[] = "MIRIAM";
    char profissao1[] = "ADVOGADO"; 
    
    a = 3.0;
    b =  2.0;
    
    result1 = (a + 1 >= b * b);
    result2 = (strcmp(nome1, "ANA") != 0);
    result3 = (strcmp(profissao1, "médico") == 0);
    
    printf("(a): %d, %d, %d\n", result1, result2, result3);

    
    // caso b //
    char nome2[] = "PEDRO";
    char profissao2[] = "MÉDICO"; 
    
    a = 5.0;
    b =  1.4142;
    
    result1 = (a + 1 >= b * b);
    result2 = (strcmp(nome2, "ANA") != 0);
    result3 = (strcmp(profissao2, "médico") == 0);
    
    printf("(b): %d, %d, %d\n", result1, result2, result3);

    
    
    // caso c //
    char nome3[] = "ANA";
    char profissao3[] = "PROFESSOR"; 
    
    a = 2.5;
    b =  9.0;
    
    result1 = (a + 1 >= b * b);
    result2 = (strcmp(nome3, "ANA") != 0);
    result3 = (strcmp(profissao3, "médico") == 0);
    
    printf("(c): %d, %d, %d\n", result1, result2, result3);

    return 0;
    
}