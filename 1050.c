#include <stdio.h>

    int main(){
        int ddd;
        scanf("%i", &ddd);

        switch(ddd){
            case 11:
                printf("SAO PAULO\n");
                break;
            case 19:
                printf("CAMPINAS\n");
                break;
            case 21:
                printf("RIO DE JANEIRO\n");
                break;
            case 27:
                printf("VITORIA\n");
                break;
            case 31:
                printf("BELO HORIZONTE\n");
                break;
            case 32:
                printf("JUIZ DE FORA\n");
                break;
            case 61:
                printf("BRASILIA\n");
                break;
            case 71:
                printf("SALVADOR\n");
                break;
            default:
                printf("DDD nao cadastrado\n");
                break;

        }

        return 0;
    }