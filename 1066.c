#include <stdio.h>

    int main(){

    int i[5];
    int x,positivos=0,pares=0,impares=0,negativos=0;

    for(x=0;x<5;x++){
        scanf("%i", &i[x]);
        if ( i[x]>0 ) positivos++;
        if ( i[x]<0) negativos ++;
        if ( i[x]%2==0) pares++;
        if ( i[x]%2!=0) impares++;
    }
    printf("%i valor(es) par(es)\n", pares);
    printf("%i valor(es) impar(es)\n", impares);
    printf("%i valor(es) positivo(s)\n", positivos);
    printf("%i valor(es) negativo(s)\n", negativos);

    return 0;
}