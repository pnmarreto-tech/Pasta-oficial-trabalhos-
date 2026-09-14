#include <stdio.h>

    int main (){
        int N;
        printf("A branca de neve disse o numero:\n ");
        scanf("%d", &N);
         while (N<0||N>9){
            printf("ERRO,jaja so sabe contar ate 9\n");
            printf("fale outro numero: ");
            scanf("%d", &N);
        }

        printf("Jaja disse: %d", N);
        
        return 0;
    }