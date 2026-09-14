#include <stdio.h>

    int main(){
        int i=1, n;
        int soma;
        printf("digite um valor para n: ");
        scanf("%d", &n);

        while (i<=n){
            soma = soma + (i*i+2*i);

            i++;

        }
    
        printf("Resultado da soma: %d\n", soma);
        
        return 0;
    }