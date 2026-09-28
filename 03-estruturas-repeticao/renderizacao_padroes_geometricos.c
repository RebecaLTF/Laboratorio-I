#include <stdio.h>

int main() {

	int i, j, e;

	printf("(A)\n");
	for (i = 1; i <= 10; i++) {

		for (j = 1 ; j <= i ; j++) {
			printf("*");
		}
		printf("\n");
	}

    printf("(B)\n");
    for (i = 1; i <= 10; i++) {

		for (j = 10 ; j >= i ; j--) {
			printf("*");
		}
		printf("\n");
	}
	
    printf("(C)\n");
    for (i = 1; i <= 10; i++) {
        for (e = 0; e <= i -1; e++){
            printf(" ");
        }

		for (j = 10 ; j >= i ; j--) {
			printf("*");
		}
		printf("\n");
	}
	
    printf("(D)\n");
    for (i = 1; i <= 10; i++) {
        for (e = 9; e >= i; e--){
            printf(" ");
        }

		for (j = 1 ; j <= i ; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}