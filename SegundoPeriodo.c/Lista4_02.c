#include <stdio.h>
#include <stdlib.h>
#include "Lista4_02.h"

    int g_hora,g_minutos;

    int main(void){

        printf("Digite a Hora e os minutos: \n");
        scanf("%d %d", &g_hora,&g_minutos);

        converteHoraMinutos();
        saudacao();

        return 0;
    }