#include <stdio.h>
#include <stdlib.h>
#include "Lista4_03.h"

    int g_vetor[5];
    
   int main(void){
          int terceiro;
          //ler os cinco vetores
        ler_vetor();
          //imprimir os cinco vetores
        imprimir_vetor();
        
        terceiro=retorne_terceiro();
        printf("O terceiro valor é: %d\n",terceiro);

        return 0;
   }