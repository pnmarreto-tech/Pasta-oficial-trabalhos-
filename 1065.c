#include <stdio.h>

    int main(){

        int i[5],x, pares=0;

        for (x=0;x<5;x++){
            if(scanf("%i", &i[x]) && i[x]%2==0) pares++;
        }
        printf("%i valores pares\n", pares);

        return 0;
    }