#include <stdio.h>
#include <stdlib.h>
#include "Lista4_01.h"

    int g_valor;

    int main(void){
        int res=0;

        printf("Digite os valor requisitado:\n");
        scanf("%d",&g_valor);

         res = verifica();
         printf("%d\n",res);
        


        return 0;
    }