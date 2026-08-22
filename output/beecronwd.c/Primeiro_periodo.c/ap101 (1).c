#include <stdio.h>

     int main () {
        int questao = 0;
        printf("Digite o numero da questao: ");
        scanf("%i", &questao);

            while (questao<1||questao>8){
                printf("ERRO, ERRO\n");
                printf("Digite novamente o numero da questao:");
                scanf ("%i",&questao);

            }

        switch (questao){

            case 1:
             printf("QUESTAO 01\n");
             break;
            case 2:
             printf("QUESTAO 02\n");
             break;
            case 3:
             printf("QUESTAO 03\n");
             break;
            case 4:
             printf("QUESTAO 04\n");
             break;
            case 5:
             printf("QUESTAO 05\n");
             break;
            case 6:
             printf("QUESTAO 06\n");
             break;
            case 7:
             printf("QUESTAO 07\n");
             break;
            case 8:
             printf("QUESTAO 08\n");
             break;

        }

        return 0;
     }