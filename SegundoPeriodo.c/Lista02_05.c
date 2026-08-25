#include <stdio.h>
#include <string.h>

     struct Horario{
        int hora;
        int minutos;
        int segundos;
    }hrs;

     struct Data {
        int dia;
        int mes;
        int ano;
    }dta;

    struct Agenda{
        struct Horario hrs;
        struct Data dta;
    }agd;
        int main(void){
            struct Agenda agd;
            int menu;
            char mes_nome[11];
    
            printf("Digite um numero da sua agenda personalizada: \n");
            scanf("%i", &menu);

            switch(menu){
                case 1:
                printf("Digite a hora:\nminutos:\nsegundos:\n");
                scanf("%i %i %i", &agd.hrs.hora, &agd.hrs.minutos, &agd.hrs.segundos);
                printf("Digite o dia:\n mes:\n ano:\n");
                scanf("%i %i %i", &agd.dta.dia, &agd.dta.mes, &agd.dta.ano);

                break;
                default: return 1;
            }
            if(agd.dta.mes==1){
                strcpy(mes_nome,"Janeiro");
            }else if(agd.dta.mes==2){
                strcpy(mes_nome,"Fevereiro");
            }else if(agd.dta.mes==3){
                strcpy(mes_nome,"Marco");
            }else if(agd.dta.mes==4){
                strcpy(mes_nome,"Abril");
            }else if(agd.dta.mes==06){
                strcpy(mes_nome,"Junho");
            }else if(agd.dta.mes==07){
                strcpy(mes_nome,"Julho");
            }else if(agd.dta.mes==8){
                strcpy(mes_nome,"Agosto");
            }else if(agd.dta.mes==9){
                strcpy(mes_nome,"Setembro");
            }else if(agd.dta.mes==10){
                strcpy(mes_nome,"Outubro");
            }else if(agd.dta.mes==11){
                strcpy(mes_nome,"Novembro");
            }else if(agd.dta.mes==12){
                strcpy(mes_nome,"Dezembro");
            }else{
                printf("Invalido\n");
            }

            printf("Agenda:\ndia %i de %s de %i ",agd.dta.dia,mes_nome,agd.dta.ano);
            printf("as %i:%i:%i\n",agd.hrs.hora,agd.hrs.minutos,agd.hrs.segundos);

            return 0;
        }