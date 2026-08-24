#include <stdio.h>

    int main(){

    int v[10], i;

    
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    
    printf("\nOrdem direta:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    printf("\n\nOrdem inversa:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", v[i]);
    }

    printf("\n");
    return 0;
}
