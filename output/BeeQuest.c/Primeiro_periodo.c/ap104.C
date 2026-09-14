#include <stdio.h>

    int main (){
        int num,menor;

        printf("digite um numero: ");
        scanf("%d", &num);
        menor=num;
        while (num!=0){
            if (menor<num){
                menor=num;

            }
            printf("digite outro numero: ");
            scanf("%d", &num);


        }
       
             printf("menor valor digitado: %d\n", menor);
        return 0;
    }