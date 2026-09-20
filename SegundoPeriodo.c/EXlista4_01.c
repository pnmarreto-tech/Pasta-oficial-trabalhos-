#include <stdio.h>
#include <stdlib.h>
#include "Lista4_01.h"

    extern int g_valor;

    int verifica(){
        if(g_valor>0){
            return 1;
        }else if(g_valor==0){
            return 0;
        }else if(g_valor<0){
            return -1;
        }else{
            printf("Valor não encontrado\n");
        }

    }