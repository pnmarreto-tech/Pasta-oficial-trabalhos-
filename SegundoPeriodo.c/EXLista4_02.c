#include<stdio.h>
#include <stdlib.h>
#include "Lista4_02.h"

   
    int tm;
    extern int  g_hora ,g_minutos;
    int converteHoraMinutos(){
        
        tm = ((g_hora*60)+g_minutos);
        return tm;
    }

    
        void saudacao(void){
            if(tm>0 && tm<=360){
            printf("Boa noite\n");
            }else if(tm>=361 && tm<=720){
                printf("Boa dia\n");
            }else if(tm>=721 && tm<=1080){
                printf("Boa tarde\n");
            }else if(tm>=1081 && tm<=1439){
                printf("Boa noite\n");
            }else{
                printf("Valor invalido\n");
            }
        }