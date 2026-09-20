#include <stdio.h>
#include <stdlib.h>
#include "Lista4_03.h"

     int g_vetor[TAM];
    
    void ler_vetor(void){
        int i;
      

        for(i=0;i<TAM;i++){
        printf("Digite as rotinas: \n", i+1);
        scanf("%d", g_vetor[i]);
        }
    }
    void imprimir_vetor(void){
        int i;
        for(i=0;i<TAM;i++){
            printf("%d",g_vetor[i]);
        }
        printf("\n");
    }
    int retorne_terceiro(void){
        return g_vetor[2];
    }