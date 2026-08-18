#include <stdio.h>

    int main (){
        int A,B;
        int resultado=0, i=0;
        scanf("%d", &A);
        scanf("%d", &B);
        
        while(i<B){
            resultado += A;
            printf("%d", A);

            if (i>B-1) {
                printf("+")

            }
            i++
        }
        printf("= %d\n", resultado);

        return 0;
    }
    