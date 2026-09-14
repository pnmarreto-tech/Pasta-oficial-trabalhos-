#include <stdio.h>

    int main (){
        int i;
        if(scanf("%d", &i) && i<0){
            printf("Entrada incorreta\n");
        }
            do{
                printf("%d\n",i);
                i--;
            }
            while (i>=0);
        return 0;
    }